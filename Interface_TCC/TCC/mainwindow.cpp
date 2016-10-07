#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Interface TCC: Ferramenta Laser"));

    ui->increase_scale->setValidator(new QDoubleValidator(0, 100, 6, this));
    ui->increase_scale->setText("1");
    ui->decrease_scale->setValidator(new QDoubleValidator(0, 100, 6, this));
    ui->decrease_scale->setText("1");
    ui->increase_scale->setValidator(new QDoubleValidator(0, 100, 6, this));
    ui->increase_scale->setText("1");

    ui->off_x->setValidator(new QDoubleValidator(0, 100, 6, this));
    ui->off_x->setText(QString::number(OFF_X));
    ui->off_y->setValidator(new QDoubleValidator(0, 100, 6, this));
    ui->off_y->setText(QString::number(OFF_Y));
    ui->off_z->setValidator(new QDoubleValidator(0, 100, 6, this));
    ui->off_z->setText(QString::number(OFF_Z));

    ui->off_a->setValidator(new QDoubleValidator(0, 100, 6, this));
    ui->off_a->setText(QString::number(OFF_A));
    ui->off_e->setValidator(new QDoubleValidator(0, 100, 6, this));
    ui->off_e->setText(QString::number(OFF_E));
    ui->off_r->setValidator(new QDoubleValidator(0, 100, 6, this));
    ui->off_r->setText(QString::number(OFF_R));

    ui->dist_approach->setValidator(new QDoubleValidator(0, 100, 6, this));
    ui->dist_approach->setText("10");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_selectButton_clicked()
{
    QString fileNames = QFileDialog::getOpenFileName(this, tr("Abrir arquivo"),"/path/to/file/",tr("Arquivos G-Code(*.tap *.gcode *.jpg)"));
    if(fileNames != NULL)
    {
        ui->listWidget->addItem(fileNames);
        currentFileName = fileNames;
        ui->listWidget->setCurrentRow(ui->listWidget->count()-1);
    }
}

void MainWindow::vetoriza_pontos()
{
    codigoG.back();
    Segments.append(PList);
    for(int i = 0 ; i < codigoG.size() ; i++)
    {
        QString linha = codigoG.at(i);

        if(QString::compare(linha.at(0), "X") == 0)
        {
            QString X;
            QString Y;
            int x_cont = 1;
            while(QString::compare(linha.at(x_cont), " ") != 0)
                X.append(linha.at(x_cont++));

            int y_cont = x_cont+2;
            while(y_cont < linha.size())
                Y.append(linha.at(y_cont++));

            float x = (float)X.toFloat()*ui->increase_scale->text().toFloat()/ui->decrease_scale->text().toFloat()+ui->off_x->text().toFloat();
            float y = (float)Y.toFloat()*ui->increase_scale->text().toFloat()/ui->decrease_scale->text().toFloat()+ui->off_y->text().toFloat();

            if(Segments.last().isEmpty())
            {
                Segments.last().append(QPointF(x,y));
            }
            else
            {
                if(Segments.last().last().x() != x || Segments.last().last().y() != y)
                {
                    if(Z10_flag)
                    {
                        Segments.append(PList);
                    }
                    Segments.last().append(QPointF(x, y));
                }
            }
            Z10_flag = false;
        }

        else if(QString::compare(linha.at(0), "Z") == 0 && i != 1)
        {
            if(linha.size() > 2)
            {
                Z10_flag = true;
            }
        }
    }
}

void MainWindow::on_convertButton_clicked()
{
    inicia_codigoPDL2();
    Segments.clear();
    vetoriza_pontos();

    //QString Z_DEF = "500";
    //int linhas_inseridas = 0;
    /*
    codigoG.back();
    for(int i = 0 ; i < codigoG.size() ; i++)
    {
        QString linha = codigoG.at(i);

        if(QString::compare(linha.at(0), "X") == 0)
        {
            QString X;
            QString Y;
            int x_cont = 1;
            while(QString::compare(linha.at(x_cont), " ") != 0)
                X.append(linha.at(x_cont++));

            int y_cont = x_cont+2;
            while(y_cont < linha.size())
                Y.append(linha.at(y_cont++));

            X = QString::number((float)X.toFloat()*ui->increase_scale->text().toFloat()/ui->decrease_scale->text().toFloat()+ui->off_x->text().toFloat());
            Y = QString::number((float)Y.toFloat()*ui->increase_scale->text().toFloat()/ui->decrease_scale->text().toFloat()+ui->off_y->text().toFloat());
            if(!Z0_flag)
                codigoPDL2.append("MOVEFLY LINEAR TO POS("+X+", "+Y+", "+ui->off_z->text()+", "+ui->off_a->text()+", "+ui->off_e->text()+", "+ui->off_r->text()+", '') ADVANCE");
            else
            {
                codigoPDL2.append("MOVEFLY LINEAR TO POS("+X+", "+Y+", "+ui->off_z->text()+", "+ui->off_a->text()+", "+ui->off_e->text()+", "+ui->off_r->text()+", '') ADVANCE WITH CONDITION[2]");
                Z0_flag = false;
            }


            if(i == codigoG.size()-1)
            {
                QString linha_antiga = codigoPDL2.last();
                QString linha_nova;
                linha_nova = linha_antiga+" WITH CONDITION[1]";
                codigoPDL2.removeLast();
                codigoPDL2.append(linha_nova);

                codigoPDL2.append("MOVEFLY LINEAR TO POS("+X+", "+Y+", "+QString::number(ui->off_z->text().toFloat()+ui->dist_approach->text().toFloat())+", "+ui->off_a->text()+", "+ui->off_e->text()+", "+ui->off_r->text()+", '') ADVANCE");
            }
        }
        else if(QString::compare(linha.at(0), "Z") == 0 && i != 1)
        {
            QString linha_antiga = codigoPDL2.last();
            QString linha_nova;
            if(linha.size() == 3)
            {
                //codigoPDL2.
                //ui->listWidget->addItem("DESLIGA LASER");
                //codigoPDL2.append("-- $DOUT[17] := FALSE");
                linha_nova = linha_antiga+" WITH CONDITION[1]";
                codigoPDL2.removeLast();
                codigoPDL2.append(linha_nova);
                codigoPDL2.append(linha_antiga);
                i++;

            }
            else //if(linha.size() == 2)
            {
                //ui->listWidget->addItem("LIGA LASER");
                //codigoPDL2.append("-- $DOUT[17] := TRUE");
                //linha_nova = linha_antiga+" WITH CONDITION[2]";
                i++;
                Z0_flag = true;
            }


            //if(QString::compare(codigoPDL2.at(codigoPDL2.size()-2).left(70),codigoPDL2.at(codigoPDL2.size()-1).left(70))== 0)
            {
                //codigoPDL2.removeLast();
                //codigoPDL2.removeLast();
            }
        }
    }
    codigoPDL2.append(codigoPDL2.last());
    */

    for(int i = 0 ; i < Segments.size() ; i++)
    {
        for(int j = 0 ; j < Segments.at(i).size() ; j++)
        {
            QString X = QString::number(Segments.at(i).at(j).x());
            QString Y = QString::number(Segments.at(i).at(j).y());

            if(j == 0)
            {
                codigoPDL2.append("MOVEFLY LINEAR TO POS("+X+", "+Y+", "+QString::number(ui->off_z->text().toFloat()+ui->dist_approach->text().toFloat())+", "+ui->off_a->text()+", "+ui->off_e->text()+", "+ui->off_r->text()+", '') ADVANCE");
                codigoPDL2.append("MOVEFLY LINEAR TO POS("+X+", "+Y+", "+QString::number(ui->off_z->text().toFloat())+", "+ui->off_a->text()+", "+ui->off_e->text()+", "+ui->off_r->text()+", '') ADVANCE");
            }
            else if(j == 1)
            {
                codigoPDL2.append("MOVEFLY LINEAR TO POS("+X+", "+Y+", "+QString::number(ui->off_z->text().toFloat())+", "+ui->off_a->text()+", "+ui->off_e->text()+", "+ui->off_r->text()+", '') ADVANCE WITH CONDITION[2]");
            }
            else if(j == Segments.at(i).size()-1)
            {
                codigoPDL2.append("MOVEFLY LINEAR TO POS("+X+", "+Y+", "+QString::number(ui->off_z->text().toFloat())+", "+ui->off_a->text()+", "+ui->off_e->text()+", "+ui->off_r->text()+", '') ADVANCE WITH CONDITION[1]");
                codigoPDL2.append("MOVEFLY LINEAR TO POS("+X+", "+Y+", "+QString::number(ui->off_z->text().toFloat()+ui->dist_approach->text().toFloat())+", "+ui->off_a->text()+", "+ui->off_e->text()+", "+ui->off_r->text()+", '') ADVANCE");
            }
            else
            {
                codigoPDL2.append("MOVEFLY LINEAR TO POS("+X+", "+Y+", "+QString::number(ui->off_z->text().toFloat())+", "+ui->off_a->text()+", "+ui->off_e->text()+", "+ui->off_r->text()+", '') ADVANCE");
            }
            //codigoPDL2.append("MOVEFLY LINEAR TO POS("+X+", "+Y+", "+QString::number(ui->off_z->text().toFloat()+ui->dist_approach->text().toFloat())+", "+ui->off_a->text()+", "+ui->off_e->text()+", "+ui->off_r->text()+", '') ADVANCE");
            //codigoPDL2.append(QString::number(i)+" X "+QString::number(Segments.at(i).at(j).x())+"Y "+QString::number(Segments.at(i).at(j).y()));
        }
    }

    finaliza_codigoPDL2();
    ui->pdl2code->setPlainText(codigoPDL2.join("\n"));
}
void MainWindow::inicia_codigoPDL2()
{
    codigoPDL2.clear();
    codigoPDL2.append("PROGRAM "+ui->n_program->text());
    codigoPDL2.append("VAR ");
    codigoPDL2.append("BEGIN");
    codigoPDL2.append("$SPD_OPT := SPD_LIN"); //Comando para usar o FLY_CART
    codigoPDL2.append("$FLY_TYPE := FLY_CART"); //Comando para manter a velocidade constante
    codigoPDL2.append("$STRESS_PER := 100"); //Comando para passar em cima dos pontos enquanto realiza o FLY
    codigoPDL2.append("$FDOUT[21] := FALSE");
    codigoPDL2.append("CONDITION[1] :");
    codigoPDL2.append("WHEN AT END DO");
    codigoPDL2.append("$FDOUT[21] := FALSE");
    codigoPDL2.append("ENDCONDITION");
    codigoPDL2.append("CONDITION[2] :");
    codigoPDL2.append("WHEN AT END DO");
    codigoPDL2.append("$FDOUT[21] := TRUE");
    codigoPDL2.append("ENDCONDITION");
}
void MainWindow::finaliza_codigoPDL2()
{
    codigoPDL2.append("END "+ui->n_program->text());
}

void MainWindow::on_saveButton_clicked()
{
    QString fileNames = QFileDialog::getSaveFileName(this, tr("Salvar arquivo"),"/path/to/file/"+ui->n_program->text(),tr("Comau PDL2(*.pdl)"));
    QFile file(fileNames);

    if(file.open(QFile::WriteOnly))
    {
        QTextStream out(&file);

        out << ui->pdl2code->toPlainText().toUtf8();
        file.flush();
        file.close();
    }
}

void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    currentFileName = ui->listWidget->currentItem()->text();

    QFile file(currentFileName);
    if(!file.open(QFile::ReadOnly))
        QMessageBox::information(0, "Erro", file.errorString());

    QTextStream in(&file);
    codigoG.clear();
    ui->gcode->clear();
    while(!in.atEnd())
    {
        QString line = in.readLine();
        codigoG.append(line);
    }
    codigoG.removeLast();
    ui->gcode->appendPlainText(codigoG.join("\n"));

    int begin_name = 0;
    for(int i = 0 ; i < currentFileName.size() ; i++)
    {
        if(QString::compare(currentFileName.at(i), "/") == 0)
            begin_name = i;
    }
    QString file_name = currentFileName.mid(begin_name+1, currentFileName.size()-begin_name-5).replace(" ","").replace("-","");

    ui->n_program->setText(file_name);
    file.close();
}

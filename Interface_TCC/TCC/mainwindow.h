#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include "ponto.h"

//offset da mesa usada
/*
#define OFF_X 61.688
#define OFF_Y 29.391
#define OFF_Z 278.595
#define OFF_A 84.182
#define OFF_E 1.572
#define OFF_R 22.731
*/
#define OFF_X 181.316
#define OFF_Y 49.556
#define OFF_Z 60.565
#define OFF_A 166.194
#define OFF_E 50.315
#define OFF_R -67.041

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void inicia_codigoPDL2();
    void finaliza_codigoPDL2();
    void vetoriza_pontos();

private slots:
    void on_selectButton_clicked();
    void on_convertButton_clicked();
    void on_saveButton_clicked();
    void on_listWidget_currentRowChanged(int currentRow);

    void on_plotButton_clicked();

private:
    Ui::MainWindow *ui;
    QStringList codigoG, codigoPDL2;
    QString currentFileName;
    QList <QPointF> PList;
    QList <QList <QPointF>> Segments;
    bool Z10_flag = false;
};

#endif // MAINWINDOW_H

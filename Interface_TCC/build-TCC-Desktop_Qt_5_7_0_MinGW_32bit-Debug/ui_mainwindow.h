/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot\qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *gcode;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *pdl2code;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLineEdit *n_program;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *selectButton;
    QPushButton *convertButton;
    QPushButton *plotButton;
    QPushButton *saveButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QListWidget *listWidget;
    QCustomPlot *graph;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *off_x;
    QLineEdit *off_y;
    QLineEdit *off_z;
    QLineEdit *off_a;
    QLineEdit *off_e;
    QLineEdit *off_r;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_20;
    QLabel *label_19;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *increase_scale;
    QLabel *label_6;
    QLineEdit *decrease_scale;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *dist_approach;
    QLabel *label_21;
    QWidget *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1008, 639);
        MainWindow->setMinimumSize(QSize(822, 522));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 11, 790, 250));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gcode = new QPlainTextEdit(layoutWidget);
        gcode->setObjectName(QStringLiteral("gcode"));
        gcode->setReadOnly(true);

        verticalLayout->addWidget(gcode);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pdl2code = new QPlainTextEdit(layoutWidget);
        pdl2code->setObjectName(QStringLiteral("pdl2code"));
        pdl2code->setReadOnly(false);

        verticalLayout_2->addWidget(pdl2code);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_4);

        n_program = new QLineEdit(layoutWidget);
        n_program->setObjectName(QStringLiteral("n_program"));

        verticalLayout_5->addWidget(n_program);


        verticalLayout_2->addLayout(verticalLayout_5);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        selectButton = new QPushButton(layoutWidget);
        selectButton->setObjectName(QStringLiteral("selectButton"));

        horizontalLayout_2->addWidget(selectButton);

        convertButton = new QPushButton(layoutWidget);
        convertButton->setObjectName(QStringLiteral("convertButton"));

        horizontalLayout_2->addWidget(convertButton);

        plotButton = new QPushButton(layoutWidget);
        plotButton->setObjectName(QStringLiteral("plotButton"));

        horizontalLayout_2->addWidget(plotButton);

        saveButton = new QPushButton(layoutWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout_2->addWidget(saveButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 270, 258, 151));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        listWidget = new QListWidget(layoutWidget1);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_4->addWidget(listWidget);

        graph = new QCustomPlot(centralWidget);
        graph->setObjectName(QStringLiteral("graph"));
        graph->setGeometry(QRect(520, 300, 271, 181));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(300, 290, 181, 277));
        verticalLayout_13 = new QVBoxLayout(layoutWidget2);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_8);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_10->addWidget(label_9);

        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_10->addWidget(label_10);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_10->addWidget(label_11);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_10->addWidget(label_12);

        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_10->addWidget(label_13);

        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_10->addWidget(label_14);


        horizontalLayout_5->addLayout(verticalLayout_10);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        off_x = new QLineEdit(layoutWidget2);
        off_x->setObjectName(QStringLiteral("off_x"));

        verticalLayout_9->addWidget(off_x);

        off_y = new QLineEdit(layoutWidget2);
        off_y->setObjectName(QStringLiteral("off_y"));

        verticalLayout_9->addWidget(off_y);

        off_z = new QLineEdit(layoutWidget2);
        off_z->setObjectName(QStringLiteral("off_z"));

        verticalLayout_9->addWidget(off_z);

        off_a = new QLineEdit(layoutWidget2);
        off_a->setObjectName(QStringLiteral("off_a"));

        verticalLayout_9->addWidget(off_a);

        off_e = new QLineEdit(layoutWidget2);
        off_e->setObjectName(QStringLiteral("off_e"));

        verticalLayout_9->addWidget(off_e);

        off_r = new QLineEdit(layoutWidget2);
        off_r->setObjectName(QStringLiteral("off_r"));

        verticalLayout_9->addWidget(off_r);


        horizontalLayout_5->addLayout(verticalLayout_9);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_7->addWidget(label_15);

        label_16 = new QLabel(layoutWidget2);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_7->addWidget(label_16);

        label_17 = new QLabel(layoutWidget2);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_7->addWidget(label_17);

        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_7->addWidget(label_18);

        label_20 = new QLabel(layoutWidget2);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout_7->addWidget(label_20);

        label_19 = new QLabel(layoutWidget2);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout_7->addWidget(label_19);


        horizontalLayout_5->addLayout(verticalLayout_7);


        verticalLayout_11->addLayout(horizontalLayout_5);


        verticalLayout_13->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        increase_scale = new QLineEdit(layoutWidget2);
        increase_scale->setObjectName(QStringLiteral("increase_scale"));

        horizontalLayout_4->addWidget(increase_scale);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        decrease_scale = new QLineEdit(layoutWidget2);
        decrease_scale->setObjectName(QStringLiteral("decrease_scale"));

        horizontalLayout_4->addWidget(decrease_scale);


        verticalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_12->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        dist_approach = new QLineEdit(layoutWidget2);
        dist_approach->setObjectName(QStringLiteral("dist_approach"));

        horizontalLayout_6->addWidget(dist_approach);

        label_21 = new QLabel(layoutWidget2);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_6->addWidget(label_21);


        verticalLayout_8->addLayout(horizontalLayout_6);


        verticalLayout_12->addLayout(verticalLayout_8);


        verticalLayout_13->addLayout(verticalLayout_12);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(430, 260, 120, 80));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1008, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "C\303\263digo G", 0));
        label_2->setText(QApplication::translate("MainWindow", "C\303\263digo PDL2", 0));
        label_4->setText(QApplication::translate("MainWindow", "Nome do programa:", 0));
        n_program->setText(QApplication::translate("MainWindow", "desenho_laser", 0));
        selectButton->setText(QApplication::translate("MainWindow", "Selecionar arquivo", 0));
        convertButton->setText(QApplication::translate("MainWindow", "Converter", 0));
        plotButton->setText(QApplication::translate("MainWindow", "Plotar Desenho", 0));
        saveButton->setText(QApplication::translate("MainWindow", "Salvar", 0));
        label_3->setText(QApplication::translate("MainWindow", "Arquivos abertos", 0));
        label_8->setText(QApplication::translate("MainWindow", "Offset da mesa de trabalho", 0));
        label_9->setText(QApplication::translate("MainWindow", "X", 0));
        label_10->setText(QApplication::translate("MainWindow", "Y", 0));
        label_11->setText(QApplication::translate("MainWindow", "Z", 0));
        label_12->setText(QApplication::translate("MainWindow", "A", 0));
        label_13->setText(QApplication::translate("MainWindow", "E", 0));
        label_14->setText(QApplication::translate("MainWindow", "R", 0));
        label_15->setText(QApplication::translate("MainWindow", "[mm]", 0));
        label_16->setText(QApplication::translate("MainWindow", "[mm]", 0));
        label_17->setText(QApplication::translate("MainWindow", "[mm]", 0));
        label_18->setText(QApplication::translate("MainWindow", "[\302\260 ]", 0));
        label_20->setText(QApplication::translate("MainWindow", "[\302\260 ]", 0));
        label_19->setText(QApplication::translate("MainWindow", "[\302\260 ]", 0));
        label_5->setText(QApplication::translate("MainWindow", "Escala", 0));
        label_6->setText(QApplication::translate("MainWindow", ":", 0));
        label_7->setText(QApplication::translate("MainWindow", "Dist\303\242ncia de afastamento", 0));
        label_21->setText(QApplication::translate("MainWindow", "[mm]", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

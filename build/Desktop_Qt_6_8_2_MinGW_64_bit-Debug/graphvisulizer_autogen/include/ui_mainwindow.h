/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QSpinBox *nodesSpinBox;
    QDoubleSpinBox *densityDoubleSpinBox;
    QPushButton *generateButton;
    QPushButton *degreeButton;
    QPushButton *maxDegreeButton;
    QPushButton *minDegreeButton;
    QPushButton *neighborsButton;
    QPushButton *matrixButton;
    GraphWidget *graphicsView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(835, 735);
        MainWindow->setStyleSheet(QString::fromUtf8("/* General Styles */\n"
"QWidget {\n"
"    background-color: #FBF9F1; /* Soft background */\n"
"    color: #333; /* Dark text for contrast */\n"
"    font-family: Arial, sans-serif;\n"
"}\n"
"\n"
"/* Buttons */\n"
"QPushButton {\n"
"    background-color: #92C7CF; /* Soft blue */\n"
"    color: white;\n"
"    border-radius: 6px;\n"
"    padding: 6px 12px;\n"
"    border: none;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #AAD7D9; /* Lighter hover */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #5E9EA0; /* Darker press effect */\n"
"}\n"
"\n"
"/* Graph Viewer */\n"
"QGraphicsView {\n"
"    background-color: white;\n"
"    border: 1px solid #E5E1DA;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"/* Spin Boxes */\n"
"QSpinBox, QDoubleSpinBox {\n"
"    background-color: white;\n"
"    border: 1px solid #E5E1DA;\n"
"    padding: 4px;\n"
"    border-radius: 4px;\n"
"}\n"
"QSpinBox::up-button, QDoubleSpinBox::up-button,\n"
"QSpinBox::down-button, QDoubleSpinBox::down-button {\n"
"    width: 16px;\n"
""
                        "    background-color: #E5E1DA;\n"
"}\n"
"QSpinBox::up-button:hover, QDoubleSpinBox::up-button:hover,\n"
"QSpinBox::down-button:hover, QDoubleSpinBox::down-button:hover {\n"
"    background-color: #AAD7D9;\n"
"}\n"
"\n"
"/* Labels */\n"
"QLabel {\n"
"    color: #333;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        nodesSpinBox = new QSpinBox(centralwidget);
        nodesSpinBox->setObjectName("nodesSpinBox");
        nodesSpinBox->setGeometry(QRect(255, 90, 42, 22));
        densityDoubleSpinBox = new QDoubleSpinBox(centralwidget);
        densityDoubleSpinBox->setObjectName("densityDoubleSpinBox");
        densityDoubleSpinBox->setGeometry(QRect(420, 90, 62, 22));
        generateButton = new QPushButton(centralwidget);
        generateButton->setObjectName("generateButton");
        generateButton->setGeometry(QRect(205, 140, 226, 28));
        degreeButton = new QPushButton(centralwidget);
        degreeButton->setObjectName("degreeButton");
        degreeButton->setGeometry(QRect(540, 75, 176, 28));
        maxDegreeButton = new QPushButton(centralwidget);
        maxDegreeButton->setObjectName("maxDegreeButton");
        maxDegreeButton->setGeometry(QRect(540, 45, 176, 28));
        minDegreeButton = new QPushButton(centralwidget);
        minDegreeButton->setObjectName("minDegreeButton");
        minDegreeButton->setGeometry(QRect(540, 105, 176, 28));
        neighborsButton = new QPushButton(centralwidget);
        neighborsButton->setObjectName("neighborsButton");
        neighborsButton->setGeometry(QRect(540, 135, 176, 28));
        matrixButton = new QPushButton(centralwidget);
        matrixButton->setObjectName("matrixButton");
        matrixButton->setGeometry(QRect(540, 165, 176, 28));
        graphicsView = new GraphWidget(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(100, 215, 621, 466));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 95, 106, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 95, 86, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(235, 10, 256, 66));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        label_3->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 835, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        generateButton->setText(QCoreApplication::translate("MainWindow", "Generate Graph", nullptr));
        degreeButton->setText(QCoreApplication::translate("MainWindow", "Show Node Degree", nullptr));
        maxDegreeButton->setText(QCoreApplication::translate("MainWindow", " Maximum Degree", nullptr));
        minDegreeButton->setText(QCoreApplication::translate("MainWindow", "Minimum Degree", nullptr));
        neighborsButton->setText(QCoreApplication::translate("MainWindow", "Find Neighbors", nullptr));
        matrixButton->setText(QCoreApplication::translate("MainWindow", "Display Adjacency Matrix", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number of Nodes", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Graph Density", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "GRAPH VISULIZER ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

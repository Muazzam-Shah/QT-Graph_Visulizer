#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "graph.h"
#include "graphwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_generateButton_clicked();
    void on_degreeButton_clicked();
    void on_maxDegreeButton_clicked();
    void on_minDegreeButton_clicked();
    void on_neighborsButton_clicked();
    void on_matrixButton_clicked();

private:
    Ui::MainWindow *ui;
    Graph* m_graph;
};

#endif // MAINWINDOW_H

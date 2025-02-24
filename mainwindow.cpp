#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_graph(nullptr)
{
    ui->setupUi(this);
    // The custom widget "graphicsView" is already promoted to GraphWidget via the UI file.
}

MainWindow::~MainWindow()
{
    delete ui;
    if(m_graph)
        delete m_graph;
}

void MainWindow::on_generateButton_clicked()
{
    int nodes = ui->nodesSpinBox->value();
    double density = ui->densityDoubleSpinBox->value();

    // Delete any existing graph instance
    if(m_graph) {
        delete m_graph;
    }
    m_graph = new Graph(nodes);

    int totalPossibleEdges = nodes * (nodes - 1) / 2;
    int desiredEdges = static_cast<int>(0.5 * density * totalPossibleEdges / 100);

    // Add edges based on the desired density
    for (int i = 0; i < nodes; ++i) {
        for (int j = i+1; j < nodes; ++j) {
            if (desiredEdges > 0) {
                m_graph->addEdge(i, j);
                desiredEdges--;
            }
        }
    }

    // Update the GraphWidget (graphicsView is your custom widget)
    static_cast<GraphWidget*>(ui->graphicsView)->setGraph(m_graph);
}

void MainWindow::on_degreeButton_clicked()
{
    bool ok;
    int node = QInputDialog::getInt(this, "Node Degree", "Enter node index:",
                                    0, 0, m_graph->getNumNodes()-1, 1, &ok);
    if(ok) {
        int degree = m_graph->getDegree(node);
        QMessageBox::information(this, "Node Degree",
                                 QString("Degree of node %1: %2").arg(node).arg(degree));
    }
}

void MainWindow::on_maxDegreeButton_clicked()
{
    int node = m_graph->getMaxDegreeNode();
    QMessageBox::information(this, "Maximum Degree",
                             QString("Node with maximum degree: %1").arg(node));
}

void MainWindow::on_minDegreeButton_clicked()
{
    int node = m_graph->getMinDegreeNode();
    QMessageBox::information(this, "Minimum Degree",
                             QString("Node with minimum degree: %1").arg(node));
}

void MainWindow::on_neighborsButton_clicked()
{
    bool ok;
    int node = QInputDialog::getInt(this, "Neighbors", "Enter node index:",
                                    0, 0, m_graph->getNumNodes()-1, 1, &ok);
    if(ok) {
        vector<int> neighbors = m_graph->getNeighbors(node);
        QString neighborList;
        for (int n : neighbors)
            neighborList += QString::number(n) + " ";
        QMessageBox::information(this, "Neighbors",
                                 QString("Neighbors of node %1: %2").arg(node).arg(neighborList));
    }
}

void MainWindow::on_matrixButton_clicked()
{
    QString matrixStr;
    const vector<vector<int>>& matrix = m_graph->getMatrix();
    for (int i = 0; i < m_graph->getNumNodes(); ++i) {
        for (int j = 0; j < m_graph->getNumNodes(); ++j)
            matrixStr += QString::number(matrix[i][j]) + " ";
        matrixStr += "\n";
    }
    QMessageBox::information(this, "Adjacency Matrix", matrixStr);
}

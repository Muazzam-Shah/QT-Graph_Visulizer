#include "graphwidget.h"
#include <QtMath>
#include <QGraphicsEllipseItem>
#include <QGraphicsLineItem>
#include <QGraphicsTextItem>

GraphWidget::GraphWidget(QWidget *parent) : QGraphicsView(parent), m_graph(nullptr)
{
    scene = new QGraphicsScene(this);
    setScene(scene);
}

void GraphWidget::setGraph(Graph* graph)
{
    m_graph = graph;
    drawGraph();
}

void GraphWidget::drawGraph()
{
    scene->clear();
    if (!m_graph)
        return;

    int n = m_graph->getNumNodes();
    // Layout parameters for a circular layout
    const int radius = 200;
    const QPointF center(250, 250);
    QVector<QPointF> positions(n);

    // Calculate positions for each node arranged in a circle
    for (int i = 0; i < n; ++i) {
        qreal angle = (2 * M_PI * i) / n;
        qreal x = center.x() + radius * qCos(angle);
        qreal y = center.y() + radius * qSin(angle);
        positions[i] = QPointF(x, y);
    }

    // Draw edges using the adjacency matrix
    const vector<vector<int>>& matrix = m_graph->getMatrix();
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (matrix[i][j] == 1)
                scene->addLine(positions[i].x(), positions[i].y(), positions[j].x(), positions[j].y());
        }
    }

    // Draw nodes (circles) and add labels
    const int nodeSize = 20;
    for (int i = 0; i < n; ++i) {
        QRectF rect(positions[i].x() - nodeSize/2, positions[i].y() - nodeSize/2, nodeSize, nodeSize);
        scene->addEllipse(rect);
        QGraphicsTextItem* text = scene->addText(QString::number(i));
        text->setPos(positions[i].x() - 5, positions[i].y() - 10);
    }
}

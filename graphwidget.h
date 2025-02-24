#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include <QGraphicsView>
#include "graph.h"
#include <QGraphicsScene>

class GraphWidget : public QGraphicsView
{
    Q_OBJECT
public:
    explicit GraphWidget(QWidget *parent = nullptr);
    void setGraph(Graph* graph);
    void drawGraph();

private:
    Graph* m_graph;
    QGraphicsScene* scene;
};

#endif // GRAPHWIDGET_H

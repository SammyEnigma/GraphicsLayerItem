#include "graphicslayeritem.h"

#include <QPainter>

GraphicsLayerItem::GraphicsLayerItem(QGraphicsItem *parent)
    : QGraphicsItem(parent)
{

}

GraphicsLayerItem::~GraphicsLayerItem()
{

}

void GraphicsLayerItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    painter->fillRect(boundingRect(), Qt::red);
}


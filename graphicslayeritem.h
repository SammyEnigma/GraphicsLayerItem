#ifndef GRAPHICSLAYERITEM_H
#define GRAPHICSLAYERITEM_H

#include <QGraphicsItem>

class GraphicsLayerItem : public QGraphicsItem
{
public:
    explicit GraphicsLayerItem(QGraphicsItem *parent = 0);
    virtual ~GraphicsLayerItem();

private:
    virtual QRectF boundingRect() const { return QRectF(0, 0, 100, 100); }
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);
};

#endif // GRAPHICSLAYERITEM_H

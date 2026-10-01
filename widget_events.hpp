#ifndef WIDGET_EVENTS_H
#define WIDGET_EVENTS_H

#include <QWidget>
#include <QEvent>

class WidgetEvent : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetEvent(QWidget *parent = nullptr);
    bool event(QEvent *e) override;
};

#endif
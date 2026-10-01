// widget_events.cpp

#include "widget_events.hpp"

#include <QMetaEnum>
#include <iostream>

WidgetEvent::WidgetEvent(QWidget *parent) : QWidget(parent) {}

static const char *eventName(QEvent::Type type) {
    static const QMetaEnum typeEnum =
        QEvent::staticMetaObject.enumerator(
            QEvent::staticMetaObject.indexOfEnumerator("Type"));
    const char *name = typeEnum.valueToKey(type);
    return name ? name : "Unknown";
}

bool WidgetEvent::event(QEvent *e) {
    std::cout << "QEvent::" << eventName(e->type())
              << " (" << static_cast<int>(e->type()) << ")"
              << std::endl;
    return true;
}
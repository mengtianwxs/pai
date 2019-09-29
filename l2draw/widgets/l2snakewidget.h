#ifndef L2SNAKEWIDGET_H
#define L2SNAKEWIDGET_H

#include <QWidget>

class l2snakewidget : public QWidget
{
    Q_OBJECT
public:
    explicit l2snakewidget(QWidget *parent = nullptr);
    void createWidget();

signals:

public slots:
};

#endif // L2SNAKEWIDGET_H

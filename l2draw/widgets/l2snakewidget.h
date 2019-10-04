#ifndef L2SNAKEWIDGET_H
#define L2SNAKEWIDGET_H

#include <QGraphicsPathItem>
#include <QLineEdit>
#include <QWidget>

#include <l2draw/bars/l2snakebar.h>

class l2snakewidget : public QWidget
{
    Q_OBJECT
public:
    explicit l2snakewidget(l2snakebar* bar,QWidget *parent = nullptr);
    void createWidget(l2snakebar* bar);

    QLineEdit* le_height;
    l2snakebar* snakebar;
    QLineEdit* le_width;
    QLineEdit* le_upd;
    QLineEdit* le_dod;



public slots:
   void method_lepress();


signals:
   void sig_emitsnake(double,double,double,double);
};

#endif // L2SNAKEWIDGET_H

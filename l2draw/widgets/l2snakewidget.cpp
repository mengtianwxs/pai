#include "l2snakewidget.h"

#include <QLabel>
#include <QVBoxLayout>
#include<QLineEdit>
#include <QSizePolicy>

l2snakewidget::l2snakewidget(l2snakebar* bar,QWidget *parent) : QWidget(parent)
{

    this->snakebar=bar;
createWidget(bar);


}

void l2snakewidget::createWidget(l2snakebar* bar)
{

    this->resize(100,100);

    int w=50;
    int h=30;
    QGridLayout* grid=new QGridLayout();

    QLabel* lal_height=new QLabel();
    lal_height->setText("height");
    le_height=new QLineEdit();
//    lal_height->setMinimumSize(w,h);
//    le_height->setMinimumSize(w,h);

    lal_height->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    le_height->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    le_height->setText(QString::number(bar->height));



    QLabel* lal_width=new QLabel();
    lal_width->setText("width");
    le_width=new QLineEdit();
//    lal_width->setMinimumSize(w,h);
//    le_width->setMinimumSize(w,h);
    lal_width->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    le_width->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    le_width->setText(QString::number(bar->width));



    QLabel* lal_upd=new QLabel();
    lal_upd->setText("upd");
    le_upd=new QLineEdit();
    le_upd->setText(QString::number(bar->upd));

    QLabel* lal_dod=new QLabel();
    lal_dod->setText("dod");
    le_dod=new QLineEdit();
    le_dod->setText(QString::number(bar->dod));


    grid->setSpacing(10);
    grid->addWidget(lal_height,0,0);
    grid->addWidget(le_height,0,1);

    grid->addWidget(lal_width,1,0);
    grid->addWidget(le_width,1,1);

    grid->addWidget(lal_upd,2,0);
    grid->addWidget(le_upd,2,1);

    grid->addWidget(lal_dod,3,0);
    grid->addWidget(le_dod,3,1);

    grid->setRowStretch(0,1);
    grid->setRowStretch(1,1);
    grid->setColumnStretch(0,1);
    grid->setColumnStretch(1,1);

    connect(le_height,SIGNAL(returnPressed()),this,SLOT(method_lepress()));
    connect(le_width,SIGNAL(returnPressed()),this,SLOT(method_lepress()));
    connect(le_upd,SIGNAL(returnPressed()),this,SLOT(method_lepress()));
    connect(le_dod,SIGNAL(returnPressed()),this,SLOT(method_lepress()));


    this->setLayout(grid);


}

void l2snakewidget::method_lepress()
{
    double height=le_height->text().toDouble();
    double width=le_width->text().toDouble();
    double upd=le_upd->text().toDouble();
    double dod=le_dod->text().toDouble();
    emit sig_emitsnake(width,height,upd,dod);



}

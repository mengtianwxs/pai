#include "l2snakewidget.h"

#include <QLabel>
#include <QVBoxLayout>
#include<QLineEdit>

l2snakewidget::l2snakewidget(QWidget *parent) : QWidget(parent)
{

createWidget();

}

void l2snakewidget::createWidget()
{

    int w=50;
    int h=30;
    QGridLayout* grid=new QGridLayout();

    QLabel* lal_height=new QLabel();
    lal_height->setText("height");
    QLineEdit* le_height=new QLineEdit();
    lal_height->setMinimumSize(w,h);
    le_height->setMinimumSize(w,h);

    QLabel* lal_width=new QLabel();
    lal_width->setText("width");
    QLineEdit* le_width=new QLineEdit();
    lal_width->setMinimumSize(w,h);
    le_width->setMinimumSize(w,h);

    grid->addWidget(lal_height,0,0);
    grid->addWidget(le_height,0,1);

    grid->addWidget(lal_width,1,0);
    grid->addWidget(le_width,1,1);

//    grid->setColumnStretch(1,1);





    this->setLayout(grid);


}

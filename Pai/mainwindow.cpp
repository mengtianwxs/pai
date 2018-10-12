#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    this->setStyleSheet("background-color:#ccc");
    initMainWindow();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionabout_pai_triggered()
{
    QString dlgTitle="about pai";
    QString content="made by mengtianwxs .";
    QMessageBox::information(this,dlgTitle,content,QMessageBox::Ok,QMessageBox::NoButton);

}

void MainWindow::on_actionnew_triggered()
{


  scene->clear();

}

void MainWindow::initMainWindow(){
qDebug("this is initMainWindow method");


view=new QGraphicsView(this);
scene=new QGraphicsScene(this);
view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

view->move(0,vnum);
view->resize(this->width()-hnum,this->height());
scene->setSceneRect(0,vnum,this->width()-hnum,this->height());
view->setScene(scene);


//添加右侧tab键
tabWid=new QTabWidget(this);
tabWid->resize(300,this->height()-vnum);
tab1=new QWidget();
tab2=new QWidget();
tabWid->addTab(tab1,"tab1");
//tabWid->addTab(tab2,"tab2");
tabWid->setCurrentIndex(0);
tabWid->setCurrentIndex(1);
tabWid->move(this->width()-300,vnum);


}
//create snakebar
void MainWindow::on_actionsnake_bar_triggered()
{
    l2snakebar *bar=new l2snakebar(300,400,100,40);
    scene->addItem(bar);
    bar->setPos(QPointF((this->width()-hnum)/2,this->height()/2));
    bar->moveBy(-150,-200);
}

void MainWindow::on_actionline_mode_triggered()
{
    ui->actionplane_mode->setChecked(false);
    ui->actionview_mode->setChecked(false);
    qDebug("this button is "+ui->actionline_mode->isChecked());
}

void MainWindow::on_actionplane_mode_triggered()
{
    ui->actionline_mode->setChecked(false);
    ui->actionview_mode->setChecked(false);
}

void MainWindow::on_actionview_mode_triggered()
{
    ui->actionline_mode->setChecked(false);
    ui->actionplane_mode->setChecked(false);
}

void MainWindow::on_actionexit_triggered()
{
    this->close();
}

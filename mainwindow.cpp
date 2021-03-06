#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <l2draw/l2view.h>
#include <l2draw/widgets/l2snakewidget.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    this->setStyleSheet("background-color:#ccc");
    initMainWindow();

     connect(this,SIGNAL(sig_bardata(l2bar*)),SLOT(method_item(l2bar*)));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::method_viewclick(QPoint p)
{

//    QPointF objpoint=view->mapToScene(p);
//    QGraphicsItem* item=scene->itemAt(objpoint,view->transform());
//    if(item!=NULL)  {

//        qDebug()<<item<<"thsi is item" <<item->data(1);
//        if(item->data(1).toString()=="l2snakebar"){



//            qDebug()<<"this is l2 bar";

//            int num=tabWidget->count();
//            if(num<1){
//                l2snakewidget* wid=new l2snakewidget();
//                tabWidget->addTab(wid,"snakebar");

//            }
//        }

//        QString con=item->data(1).toString();


//        switch (1) {
//        case (b.snake):
//             qDebug()<<"this is l2 bar==";
//             int num=tabWidget->count();
//             if(num<1){
//                 l2snakewidget* wid=new l2snakewidget();
//                 tabWidget->addTab(wid,"snakebar");

//             }



//            break;


//        }

//    }






}

void MainWindow::on_actionabout_pai_triggered()
{
    QString dlgTitle="about pai";
    QString content="made by mengtianwxs .";
    QMessageBox::information(this,dlgTitle,content,QMessageBox::Ok,QMessageBox::NoButton);

}

void MainWindow::on_actionnew_triggered()
{


  QString create_sql="create table if not exists student (id INTEGER PRIMARY KEY AUTOINCREMENT,name varchar(30),age int)";
  QString insert_sql="insert into student (name,age) values('aabb',22)";
  l2db* db =new l2db();
  db->initSqlite("a.db");
  db->create_table(create_sql);
  db->insert_sql(insert_sql);
  QSqlQuery query= db->getQuery();
  QString query_sql="select * from student";
  query.prepare(query_sql);
  if(query.exec()){
      while(query.next()){
          int id=query.value(0).toInt();
          qDebug()<<QString(id);
      }
  }

}

void MainWindow::initMainWindow(){

    this->setWindowTitle("pai");
//qDebug("this is initMainWindow method");
view=new l2view(this);
scene=new QGraphicsScene();

view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
view->setRenderHint(QPainter::Antialiasing);

view->move(0,vnum);
view->resize(this->width()-hnum,this->height());
scene->setSceneRect(0,vnum,this->width()-hnum,this->height());
view->setScene(scene);

connect(view,SIGNAL(onclickview(QPoint)),this,SLOT(method_viewclick(QPoint)));

tabWidget=new QTabWidget(this);

//tabWidget->sizeHint();
tabWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
tabWidget->move(this->width()-300,vnum);
tabWidget->setStyleSheet("background-color:rgb(ccc,ccc,ccc)");



//添加右侧tab键
//tabWid=new QTabWidget(this);
//tabWid->resize(300,this->height()-vnum);
//tab1=new QWidget();
//tab2=new QWidget();
//tabWid->addTab(tab1,"tab1");
//tabWid->addTab(tab2,"tab2");
//tabWid->setCurrentIndex(0);
//tabWid->setCurrentIndex(1);
//tabWid->move(this->width()-300,vnum);



}

void MainWindow::method_item(l2bar* bar)
{



//  QObject* obj=bar;
    l2snakebar* snake=(l2snakebar*)(bar);
     qDebug()<<"this is bar"<<snake->width<<"snake width";
    int num=tabWidget->count();
    if(num<1){


        l2snakewidget* wid=new l2snakewidget(snake);
        tabWidget->addTab(wid,"snakebar");
        tabWidget->resize(300,200 );
        connect(wid,SIGNAL(sig_emitsnake(double,double,double,double)),this,SLOT(method_redrawsnake(double,double,double,double)));

    }
}

void MainWindow::method_redrawsnake(double w, double h, double upd, double dod)
{
   if(scene->items().count()>0){
    scene->clear();
   }

    l2snakebar* bar=new l2snakebar(w,h,upd,dod);
    scene->addItem(bar);
    bar->setPos(QPointF((this->width()-hnum)/2,this->height()/2));
    bar->moveBy(-150,-200);

     emit sig_bardata(bar);

}




//create snakebar
void MainWindow::on_actionsnake_bar_triggered()
{
    l2snakebar *bar=new l2snakebar(300,400,100,40);
    scene->addItem(bar);
    bar->setPos(QPointF((this->width()-hnum)/2,this->height()/2));
    bar->moveBy(-150,-200);

     emit sig_bardata(bar);




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

void MainWindow::on_actionM_bar_triggered()
{
//    l2mbar* mbar=new l2mbar(300,200,60,80);
//    scene->addItem(mbar);

}



void MainWindow::on_actionL_elephant_bar_2_triggered()
{
//    l2lebar* le=new l2lebar(100,400,50,200,200);
//    scene->addItem(le);
//    qDebug()<<"this is le click";
}

void MainWindow::on_actionR_elephant_bar_2_triggered()
{
//    l2rebar* re=new l2rebar(200,400,50,150,40);
//    scene->addItem(re);
//    qDebug()<<"this is re click";
}

void MainWindow::on_actionL_bar_2_triggered()
{
//    l2lbar* l=new l2lbar(200,400);
//    scene->addItem(l);
}



void MainWindow::on_actionZ_bar_3_triggered()
{
//    l2zbar* z=new l2zbar(100,300,80);
//    scene->addItem(z);
}

void MainWindow::on_actionship_bar_triggered()
{
//    l2shipbar* ship=new l2shipbar(200,100,400,40,50,20,50);
//    scene->addItem(ship);
}

void MainWindow::on_actionI_bar_triggered()
{
//    l2ibar* i=new l2ibar(200);
//    scene->addItem(i);
//    i->moveBy(100,100);
}

void MainWindow::on_actionU_bar_2_triggered()
{
//    l2ubar* u=new l2ubar(100,300,50);
//    scene->addItem(u);
}

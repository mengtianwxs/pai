#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>
#include<l2draw/l2headers.h>
#include<l2draw/bars/l2snakebar.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionabout_pai_triggered();

    void on_actionnew_triggered();

    void on_actionsnake_bar_triggered();

    void on_actionline_mode_triggered();

    void on_actionplane_mode_triggered();

    void on_actionview_mode_triggered();

    void on_actionexit_triggered();

private:
    Ui::MainWindow *ui;
    void initMainWindow();


    QGraphicsView *view;
    QGraphicsScene *scene;

     int const vnum=27;
     int const hnum=300;

     QTabWidget *tabWid;
     QWidget *tab1;
     QWidget *tab2;




};

#endif // MAINWINDOW_H

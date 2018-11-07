#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>
#include<l2draw/l2headers.h>
#include <l2draw/db/l2db.h>
#include <l2draw/l2events.h>

#include<l2draw/bars/l2snakebar.h>
#include<l2draw/bars/l2mbar.h>
#include<l2draw/bars/l2lebar.h>
#include<l2draw/bars/l2rebar.h>
#include<l2draw/bars/l2lbar.h>
#include<l2draw/bars/l2ubar.h>
#include<l2draw/bars/l2zbar.h>
#include<l2draw/bars/l2shipbar.h>
#include<l2draw/bars/l2ibar.h>

#include<l2draw/core/l2scene.h>

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


    void on_actionM_bar_triggered();

    void on_actionL_elephant_bar_triggered();

    void on_actionL_elephant_bar_2_triggered();

    void on_actionR_elephant_bar_2_triggered();

    void on_actionL_bar_2_triggered();

    void on_actionU_bar_triggered();

    void on_actionZ_bar_3_triggered();

    void on_actionship_bar_triggered();

    void on_actionI_bar_triggered();

    void on_actionU_bar_2_triggered();

private:
    Ui::MainWindow *ui;
    void initMainWindow();


    QGraphicsView *view;
    l2scene* scene;

     int const vnum=27;
     int const hnum=300;

     QTabWidget *tabWid;
     QWidget *tab1;
     QWidget *tab2;




};

#endif // MAINWINDOW_H

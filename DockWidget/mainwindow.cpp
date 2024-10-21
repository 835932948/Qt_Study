#include "mainwindow.h"
#include <QTextEdit>
#include <QDockWidget>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("DockWidget");
    QTextEdit* main_edit = new QTextEdit(QObject::tr("mian window"), this);
    main_edit->setAlignment(Qt::AlignCenter);
    setCentralWidget(main_edit);

    //第一个停靠窗口
    QDockWidget* first_dock_widget = new QDockWidget(QObject::tr("DockWindow1"), this);
    first_dock_widget->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    //设置可移动
    first_dock_widget->setFeatures(QDockWidget::DockWidgetFloatable);

    QTextEdit* dock_1_edit = new QTextEdit(tr("dock window 1"));
    first_dock_widget->setWidget(dock_1_edit);
    dock_1_edit->setAlignment(Qt::AlignCenter);
    addDockWidget(Qt::RightDockWidgetArea, first_dock_widget);
}

MainWindow::~MainWindow()
{
}


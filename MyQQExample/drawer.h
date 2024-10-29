#ifndef DRAWER_H
#define DRAWER_H

#include <QToolBox>
#include <QToolButton>

class Drawer : public QToolBox
{
    Q_OBJECT
public:
    Drawer(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());

private:
    QToolButton* mToolBtn1_1;
    QToolButton* mToolBtn1_2;
    QToolButton* mToolBtn1_3;
    QToolButton* mToolBtn1_4;
    QToolButton* mToolBtn1_5;
    QToolButton* mToolBtn2_1;
    QToolButton* mToolBtn2_2;
    QToolButton* mToolBtn3_1;
    QToolButton* mToolBtn3_2;

};

#endif // DRAWER_H

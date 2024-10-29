#include "drawer.h"
#include <QGroupBox>
#include <QVBoxLayout>
Drawer::Drawer(QWidget *parent, Qt::WindowFlags f) : QToolBox(parent, f)
{
    setWindowTitle(tr("My QQ"));
    mToolBtn1_1 = new QToolButton;
    mToolBtn1_1->setText("zhangsan");
    mToolBtn1_1->setIcon(QPixmap("11.png"));
    mToolBtn1_1->setIconSize(QPixmap("11.png").size());
    mToolBtn1_1->setAutoRaise(true);   //鼠标离开时 按钮自动恢复为弹起状态
    mToolBtn1_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮属性 文字显示在图标旁边

    mToolBtn1_2 = new QToolButton;
    mToolBtn1_2->setText("lisi");
    mToolBtn1_2->setIcon(QPixmap("12.png"));
    mToolBtn1_2->setIconSize(QPixmap("12.png").size());
    mToolBtn1_2->setAutoRaise(true);   //鼠标离开时 按钮自动恢复为弹起状态
    mToolBtn1_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮属性 文字显示在图标旁边

    mToolBtn1_3 = new QToolButton;
    mToolBtn1_3->setText("wanwu");
    mToolBtn1_3->setIcon(QPixmap("13.png"));
    mToolBtn1_3->setIconSize(QPixmap("13.png").size());
    mToolBtn1_3->setAutoRaise(true);   //鼠标离开时 按钮自动恢复为弹起状态
    mToolBtn1_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮属性 文字显示在图标旁边

    mToolBtn1_4 = new QToolButton;
    mToolBtn1_4->setText("xiaozhao");
    mToolBtn1_4->setIcon(QPixmap("14.png"));
    mToolBtn1_4->setIconSize(QPixmap("14.png").size());
    mToolBtn1_4->setAutoRaise(true);   //鼠标离开时 按钮自动恢复为弹起状态
    mToolBtn1_4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮属性 文字显示在图标旁边

    mToolBtn1_5 = new QToolButton;
    mToolBtn1_5->setText("xiaosun");
    mToolBtn1_5->setIcon(QPixmap("15.png"));
    mToolBtn1_5->setIconSize(QPixmap("15.png").size());
    mToolBtn1_5->setAutoRaise(true);   //鼠标离开时 按钮自动恢复为弹起状态
    mToolBtn1_5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮属性 文字显示在图标旁边
    QGroupBox* groupBox1 = new QGroupBox;
    QVBoxLayout* vLayout1 = new QVBoxLayout(groupBox1);
    vLayout1->setMargin(10);  //布局中个窗体的显示间距
    vLayout1->setAlignment(Qt::AlignHCenter); //显示位置
    //加入各个按钮
    vLayout1->addWidget(mToolBtn1_1);
    vLayout1->addWidget(mToolBtn1_2);
    vLayout1->addWidget(mToolBtn1_3);
    vLayout1->addWidget(mToolBtn1_4);
    vLayout1->addWidget(mToolBtn1_5);
    //插入一个占位符
    vLayout1->addStretch();

    mToolBtn2_1 = new QToolButton;
    mToolBtn2_1->setText("xiaowan");
    mToolBtn2_1->setIcon(QPixmap("21.png"));
    mToolBtn2_1->setIconSize(QPixmap("21.png").size());
    mToolBtn2_1->setAutoRaise(true);   //鼠标离开时 按钮自动恢复为弹起状态
    mToolBtn2_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮属性 文字显示在图标旁边

    mToolBtn2_2 = new QToolButton;
    mToolBtn2_2->setText("xiaozhang");
    mToolBtn2_2->setIcon(QPixmap("22.png"));
    mToolBtn2_2->setIconSize(QPixmap("22.png").size());
    mToolBtn2_2->setAutoRaise(true);   //鼠标离开时 按钮自动恢复为弹起状态
    mToolBtn2_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮属性 文字显示在图标旁边
    QGroupBox* groupBox2 = new QGroupBox;
    QVBoxLayout* vLayout2 = new QVBoxLayout(groupBox2);
    vLayout2->setMargin(10);  //布局中个窗体的显示间距
    vLayout2->setAlignment(Qt::AlignHCenter); //显示位置
    //加入各个按钮
    vLayout2->addWidget(mToolBtn2_1);
    vLayout2->addWidget(mToolBtn2_2);
    //插入一个占位符
    vLayout2->addStretch();

    mToolBtn3_1 = new QToolButton;
    mToolBtn3_1->setText("xiaochen");
    mToolBtn3_1->setIcon(QPixmap("31.png"));
    mToolBtn3_1->setIconSize(QPixmap("31.png").size());
    mToolBtn3_1->setAutoRaise(true);   //鼠标离开时 按钮自动恢复为弹起状态
    mToolBtn3_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮属性 文字显示在图标旁边

    mToolBtn3_2 = new QToolButton;
    mToolBtn3_2->setText("xiaoli");
    mToolBtn3_2->setIcon(QPixmap("32.png"));
    mToolBtn3_2->setIconSize(QPixmap("32.png").size());
    mToolBtn3_2->setAutoRaise(true);   //鼠标离开时 按钮自动恢复为弹起状态
    mToolBtn3_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon); //设置按钮属性 文字显示在图标旁边
    QGroupBox* groupBox3 = new QGroupBox;
    QVBoxLayout* vLayout3 = new QVBoxLayout(groupBox3);
    vLayout3->setMargin(10);  //布局中个窗体的显示间距
    vLayout3->setAlignment(Qt::AlignHCenter); //显示位置
    //加入各个按钮
    vLayout3->addWidget(mToolBtn3_1);
    vLayout3->addWidget(mToolBtn3_2);
    //插入一个占位符
    vLayout3->addStretch();

    //将准备好的抽屉放入toolbox中
    this->addItem(groupBox1, tr("my friend"));
    this->addItem(groupBox2, tr("stranger"));
    this->addItem(groupBox3, tr("blacklist"));
}


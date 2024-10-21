#include "stackdlg.h"
#include <QHBoxLayout>

StackDlg::StackDlg(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("StackedWidget"));
    m_list = new QListWidget(this);
    //插入三个条目
    m_list->insertItem(1, "Window1");
    m_list->insertItem(2, "Window2");
    m_list->insertItem(3, "Window3");
    //创建三个Qlable标签控件对象，作为堆栈窗口需要显示的三个窗体
    m_lable_1 = new QLabel(tr("Window1"));
    m_lable_2 = new QLabel(tr("Window2"));
    m_lable_3 = new QLabel(tr("Window3"));

    m_stack = new QStackedWidget(this);
    //将lable一次放入栈堆窗口中
    m_stack->addWidget(m_lable_1);
    m_stack->addWidget(m_lable_2);
    m_stack->addWidget(m_lable_3);
    QHBoxLayout*  h_layout = new QHBoxLayout(this);
    h_layout->setMargin(5);  //设置对话框（窗体）的边距为5
    h_layout->setSpacing(5); //控件之间的距离
    h_layout->addWidget(m_list);
    h_layout->addWidget(m_stack,0,Qt::AlignHCenter);
    h_layout->setStretchFactor(m_list, 1);
    h_layout->setStretchFactor(m_stack, 3);
    setLayout(h_layout);

    connect(m_list, &QListWidget::currentRowChanged, m_stack, &QStackedWidget::setCurrentIndex);
}

StackDlg::~StackDlg()
{
}


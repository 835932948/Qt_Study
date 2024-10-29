#include "dialog.h"
#include <QPushButton>
#include <QFileDialog>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("dialog"));

    mFileBtn = new QPushButton(tr("file dialog"));  //各个控件的初始化
    mFileLineEdit  = new QLineEdit;  //显示文件名
    mMainLayout = new QGridLayout(this);
    mMainLayout->addWidget(mFileBtn, 0 ,0);
    mMainLayout->addWidget(mFileLineEdit, 0, 1);

    connect(mFileBtn, &QPushButton::clicked, this, &Dialog::ShowFile);

    //------------------------------------
    mColorBtn = new QPushButton(tr("color dialog"));
    mColorFrame = new QFrame;
    mColorFrame->setFrameShape(QFrame::Box);
    mColorFrame->setAutoFillBackground(true);
    mMainLayout->addWidget(mColorBtn, 1, 0);
    mMainLayout->addWidget(mColorFrame, 1, 1);

    connect(mColorBtn, &QPushButton::clicked, this, &Dialog::ShowColor);

    //--------------------------------------------------------
    mFontBtn = new QPushButton(tr("font dialog"));
    mFontLineEdit = new QLineEdit(tr("welcom"));
    mMainLayout->addWidget(mFontBtn, 2, 0);
    mMainLayout->addWidget(mFontLineEdit, 2, 1);

    connect(mFontBtn, &QPushButton::clicked, this, &Dialog::ShowFont);


    //------------------------------------------------------
    mInputBtn = new QPushButton(tr("input dialog"));
    mMainLayout->addWidget(mInputBtn, 3, 0);
    connect(mInputBtn, &QPushButton::clicked, this, &Dialog::ShowInputDlg);

    //-----------------------------------------------------
    mMsgBtn = new QPushButton(tr("mag dialog"));
    mMainLayout->addWidget(mMsgBtn, 3, 1);
    connect(mMsgBtn, &QPushButton::clicked, this, &Dialog::ShowMsgDlg);

}

Dialog::~Dialog()
{
}

void Dialog::ShowFile()
{
    QString s = QFileDialog::getOpenFileName(this, "open file dialog", "/", "C++ file(*.cpp);; C file(*.c);; Head file(*.h)");
    mFileLineEdit->setText(s);
}

#include <QColorDialog>
void Dialog::ShowColor()
{
    QColor c = QColorDialog::getColor(Qt::blue);
    if(c.isValid())
    {
        mColorFrame->setPalette(c);
    }
}

#include <QFontDialog>
void Dialog::ShowFont()
{
    bool ok = false;
    QFont f = QFontDialog::getFont(&ok);
    if(ok)
    {
        mFontLineEdit->setFont(f);
    }
}

void Dialog::ShowInputDlg()
{
    mInputDlg = new InputDlg(this);
    mInputDlg->show();
}

void Dialog::ShowMsgDlg()
{
    mMsgBoxDlg = new MsgBoxDlg(this);
    mMsgBoxDlg->show();
}


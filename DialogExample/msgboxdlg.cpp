#include "msgboxdlg.h"
#include <QPushButton>
#include <QMessageBox>

MsgBoxDlg::MsgBoxDlg(QWidget *parent) : QDialog(parent)
{
    setWindowTitle(tr("msg dialog"));
    mLabel = new QLabel(tr("choose a msg dialog"));
    mQuestionBtn = new QPushButton(tr("question dialog"));
    mInformationBtn = new QPushButton(tr("information dialog"));
    mWarningBtn = new QPushButton(tr("warining dialog"));
    mCriticalBtn = new QPushButton(tr("critical dialog"));
    mAboutBtn = new QPushButton(tr("about dialog"));
    mAboutQtBtn = new QPushButton(tr("about qt dialog"));

    //布局
    mMainLayout = new QGridLayout(this);
    mMainLayout->addWidget(mLabel, 0, 0, 1, 2);
    mMainLayout->addWidget(mQuestionBtn, 1, 0);
    mMainLayout->addWidget(mInformationBtn, 1, 1);
    mMainLayout->addWidget(mWarningBtn, 2, 0);
    mMainLayout->addWidget(mCriticalBtn, 2, 1);
    mMainLayout->addWidget(mAboutBtn, 3, 0);
    mMainLayout->addWidget(mAboutQtBtn, 3, 1);

    //事件关联
    connect(mQuestionBtn, &QPushButton::clicked, this, &MsgBoxDlg::ShowQuestionMsg);
    connect(mInformationBtn, &QPushButton::clicked, this, &MsgBoxDlg::ShowInfoationMsg);
    connect(mWarningBtn, &QPushButton::clicked, this, &MsgBoxDlg::ShowWarningMsg);
    connect(mCriticalBtn, &QPushButton::clicked, this, &MsgBoxDlg::showCriticalMsg);
    connect(mAboutBtn, &QPushButton::clicked, this, &MsgBoxDlg::ShowAboutMsg);
    connect(mAboutQtBtn, &QPushButton::clicked, this, &MsgBoxDlg::ShowAboutQtMsg);
}

void MsgBoxDlg::ShowQuestionMsg()
{
    mLabel->setText(tr("Quenstion Message Box"));
    switch (QMessageBox::question(this, tr("question dlg"), tr("whether to end program"), QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Ok)) {
    case QMessageBox::Ok:
        mLabel->setText(tr("question btn/ok"));
        break;
    case QMessageBox::Cancel:
        mLabel->setText(tr("question btn/cancel"));
        break;
    default:

        break;
    }
}

void MsgBoxDlg::ShowInfoationMsg()
{

}

void MsgBoxDlg::ShowWarningMsg()
{

}

void MsgBoxDlg::showCriticalMsg()
{

}

void MsgBoxDlg::ShowAboutMsg()
{

}

void MsgBoxDlg::ShowAboutQtMsg()
{

}

#include "inputdlg.h"
#include <QDialog>
#include <QPushButton>
InputDlg::InputDlg(QWidget *parent) :QDialog(parent)
{
    setWindowTitle(tr("input dialog"));
    mNameLanbel1 = new QLabel(tr("name: "));
    mNameLanbel2 = new QLabel(tr("hjs"));
    mNameLanbel2->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    mNameBtn = new QPushButton(tr("modification name"));

    mSexLabel1 = new QLabel(tr("sex: "));
    mSexLabel2 = new QLabel(tr("man"));
    mSexLabel2->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    mSexBtn = new QPushButton(tr("modification sex"));

    mAgeLabel1 = new QLabel(tr("age: "));
    mAgeLabel2 = new QLabel(tr("21"));
    mAgeLabel2->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    mAgeBtn = new QPushButton(tr("modification age"));

    mScoreLabel1 = new QLabel(tr("score: "));
    mScoreLabel2 = new QLabel(tr("80"));
    mScoreLabel2->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    mScoreBtn = new QPushButton(tr("modification score"));

    mMainLayout = new QGridLayout(this);
    mMainLayout->addWidget(mNameLanbel1, 0, 0);
    mMainLayout->addWidget(mNameLanbel2, 0, 1);
    mMainLayout->addWidget(mNameBtn, 0, 2);

    mMainLayout->addWidget(mSexLabel1, 1, 0);
    mMainLayout->addWidget(mSexLabel2, 1, 1);
    mMainLayout->addWidget(mSexBtn, 1, 2);

    mMainLayout->addWidget(mAgeLabel1, 2, 0);
    mMainLayout->addWidget(mAgeLabel2, 2, 1);
    mMainLayout->addWidget(mAgeBtn, 2, 2);

    mMainLayout->addWidget(mScoreLabel1, 3,0);
    mMainLayout->addWidget(mScoreLabel2, 3, 1);
    mMainLayout->addWidget(mScoreBtn, 3, 2);

    mMainLayout->setMargin(15);
    mMainLayout->setSpacing(10);

    mMainLayout->addWidget(mNameLanbel1, 0,0);
    mMainLayout->addWidget(mNameLanbel2, 0, 1);
    mMainLayout->addWidget(mNameBtn, 0, 2);

    connect(mNameBtn, &QPushButton::clicked, this, &InputDlg::ChangeName);
    connect(mSexBtn, &QPushButton::clicked, this, &InputDlg::ChangeSex);
    connect(mAgeBtn, &QPushButton::clicked, this, &InputDlg::ChangeAge);
    connect(mScoreBtn, &QPushButton::clicked, this, &InputDlg::ChangeScore);

}
#include <QInputDialog>
void InputDlg::ChangeName()
{
    bool ok = false;
    QString name = QInputDialog::getText(this, "string input dialog", "input name", QLineEdit::Normal, mNameLanbel2->text(), &ok);
    if(ok)
    {
        mNameLanbel2->setText(name);
    }
}

void InputDlg::ChangeSex()
{
    QStringList sexList;
    sexList << "man" << "woman";
    bool ok = false;
    QString sex = QInputDialog::getItem(this, tr("item dialog"), tr("choose sex"), sexList, 0, false, &ok);
    if(ok && !sex.isEmpty())
    {
        mSexLabel2->setText(sex);
    }
}

void InputDlg::ChangeAge()
{
    bool ok = false;
    int age = QInputDialog::getInt(this, tr("int dialog"), tr("input age"), mAgeLabel2->text().toInt(), 0, 100, 1, &ok);
    if(ok)
    {
        mAgeLabel2->setText(QString::number(age));
    }
}

void InputDlg::ChangeScore()
{

    bool ok = false;
    double score = QInputDialog::getDouble(this, tr("double dialog"), tr("input score"), mScoreLabel2->text().toInt(), 0, 100, 1, &ok);
    if(ok)
    {
        mScoreLabel2->setText(QString(tr("%1")).arg(score));
    }
}

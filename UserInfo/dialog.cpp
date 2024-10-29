#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("UserInfo"));
    /*******************左侧***********************/
    mUserNameLabel = new QLabel(tr("用户名"));
    mUserNameLineEdit = new QLineEdit;
    mNameLabel = new QLabel(tr("姓名"));
    mNameLineEdit = new QLineEdit;
    mSexLabel = new QLabel(tr("性别"));
    mSexComboBox = new QComboBox;
    mSexComboBox->addItem("女");
    mSexComboBox->addItem("男");

}

Dialog::~Dialog()
{
}


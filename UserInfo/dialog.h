#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QTextEdit>
#include <QGridLayout>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    //左侧
    QLabel* mUserNameLabel;
    QLabel* mNameLabel;
    QLabel* mSexLabel;
    QLabel* mDepartmentLabel;
    QLabel* mAgeLabel;
    QLabel* mOtherLabel;
    QLineEdit* mUserNameLineEdit;
    QLineEdit* mNameLineEdit;
    QComboBox* mSexComboBox;
    QTextEdit* *mDepartmentTextEdit;
    QLineEdit* mAgeLineEdit;
    QGridLayout* mLeftLayout;

    //右侧
    QLabel* mHealLabel;
    QLabel* mHeadIconLabel;
    QPushButton* mUpdateHeadBtn;
    QHBoxLayout* mTopRightLayout;
    QLabel* mIntroductionLabel;
    QTextEdit* mIntroductionTextEdit;
    QVBoxLayout* mRightLayout;
    QPushButton* mOkBtn;
    QPushButton* mCancelBtn;
    QHBoxLayout* mButtomLayout;
};
#endif // DIALOG_H

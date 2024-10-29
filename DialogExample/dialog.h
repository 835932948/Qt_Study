#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QGridLayout>
#include "inputdlg.h"
#include "msgboxdlg.h"
class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    //标准文件对话框
    QPushButton* mFileBtn;
    QLineEdit* mFileLineEdit;
    QGridLayout* mMainLayout;

    //标准颜色对话框
    QPushButton* mColorBtn;
    QFrame* mColorFrame;    //frame边框

    //标准字体对话框
    QPushButton* mFontBtn;
    QLineEdit* mFontLineEdit;

    //输入对话框
    QPushButton* mInputBtn;
    InputDlg* mInputDlg;

    //消息对话框
    QPushButton* mMsgBtn;
    MsgBoxDlg* mMsgBoxDlg;

private slots:
    void ShowFile();
    void ShowColor();
    void ShowFont();
    void ShowInputDlg();
    void ShowMsgDlg();
};
#endif // DIALOG_H

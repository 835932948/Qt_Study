#ifndef MSGBOXDLG_H
#define MSGBOXDLG_H

#include <QDialog>
#include <QLabel>
#include <QGridLayout>

class MsgBoxDlg : public QDialog
{
    Q_OBJECT
public:
    MsgBoxDlg(QWidget* parent = nullptr);

private slots:
    void ShowQuestionMsg();
    void ShowInfoationMsg();
    void ShowWarningMsg();
    void showCriticalMsg();
    void ShowAboutMsg();
    void ShowAboutQtMsg();

private:
    QLabel* mLabel;
    QPushButton* mQuestionBtn;
    QPushButton* mInformationBtn;
    QPushButton* mWarningBtn;
    QPushButton* mCriticalBtn;
    QPushButton* mAboutBtn;
    QPushButton* mAboutQtBtn;
    QGridLayout* mMainLayout;

};

#endif // MSGBOXDLG_H

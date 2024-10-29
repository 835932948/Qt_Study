#ifndef INPUTDLG_H
#define INPUTDLG_H

#include <QLabel>
#include <QDialog>
#include <QGridLayout>

class InputDlg : public QDialog
{
    Q_OBJECT
public:
    InputDlg(QWidget* parent = 0);

private slots:
    void ChangeName();
    void ChangeSex();
    void ChangeAge();
    void ChangeScore();

private:
    QLabel* mNameLanbel1;
    QLabel* mSexLabel1;
    QLabel* mAgeLabel1;
    QLabel* mScoreLabel1;
    QLabel* mNameLanbel2;
    QLabel* mSexLabel2;
    QLabel* mAgeLabel2;
    QLabel* mScoreLabel2;
    QPushButton* mNameBtn;
    QPushButton* mSexBtn;
    QPushButton* mScoreBtn;
    QPushButton* mAgeBtn;
    QGridLayout* mMainLayout;


};

#endif // INPUTDLG_H

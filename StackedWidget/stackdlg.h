#ifndef STACKDLG_H
#define STACKDLG_H

#include <QMainWindow>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>
#include <QDialog>

class StackDlg : public QDialog
{
    Q_OBJECT

public:
    StackDlg(QWidget *parent = nullptr);
    ~StackDlg();

private:
    QListWidget* m_list;
    QStackedWidget* m_stack;
    QLabel* m_lable_1;
    QLabel* m_lable_2;
    QLabel* m_lable_3;
};
#endif // STACKDLG_H

#include "class_string.h"
#include "QString"
#include <QDebug>


void OpeatorString()
{
    QString str1 = "Welcom";
    str1 = str1 + "to you";

    QString str2 = "Hellow";
    str2 += "World";

    str1.append(str2);
    str1.append("you");

    QString str;
    str = QString("%1 was born in %2").arg("john").arg(1998);

    QString str3 = "  welcom \t to \n you  ";
    str3.trimmed();  //去除字符串两端空白
    str3.simplified();

    qDebug() << str3.simplified();
}

void InquireString()
{
    QString str = "Welcom to you";
    auto rel =  str.startsWith("welcom", Qt::CaseInsensitive);
    str.contains("Welcom");
    QString str1 = "";
    qDebug() << str1.size();

    QList<int> a;
    QListIterator<int> i(a);
    i.hasNext();
}


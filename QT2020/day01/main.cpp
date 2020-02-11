#include "mywidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();

    // 让程序一直执行，等待用户操作
    // 等待事件的发生
    return a.exec();
}

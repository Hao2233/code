#include <QApplication>
// 窗口文件基类
#include <QWidget>
#include <QPushButton>

int main(int argc,char **argv)
{
    QApplication app(argc,argv);

    QWidget w;
    // 设置标题
    w.setWindowTitle("sss");

    // 按钮
    QPushButton b;
    b.setText("ss");
    // 指定父对象
    b.setParent(&w);
    b.move(100,100);

    w.show();

    // 如果不指定父对象，对象和对象没有关系，互相独立
    // 指定父对象的两种方式
    // 1.setParent
    // 2. 通过构造函数
    // 指定父对象，只需要父对象显示，上面的子对象自动显示

    app.exec();
    return 0;
}

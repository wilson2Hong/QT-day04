#include "widget.h"
#include <QApplication>
#include"udpserver.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    UdpServer w1;
    w1.show();
    return a.exec();
}

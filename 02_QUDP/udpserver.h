#ifndef UDPSERVER_H
#define UDPSERVER_H

#include <QWidget>
#include<QUdpSocket>

namespace Ui {
class UdpServer;
}

class UdpServer : public QWidget
{
    Q_OBJECT

public:
    explicit UdpServer(QWidget *parent = 0);
    ~UdpServer();
    void dealMsg();

private slots:
    void on_buttonSend_clicked();

    void on_buttonClose_clicked();

private:
    Ui::UdpServer *ui;
    QUdpSocket *udpSocket;//UDP套接字
};

#endif // UDPSERVER_H

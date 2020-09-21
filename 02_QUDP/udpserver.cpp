#include "udpserver.h"
#include "ui_udpserver.h"
#include<QUdpSocket>
UdpServer::UdpServer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UdpServer)
{
    ui->setupUi(this);
    udpSocket = new QUdpSocket(this);
    udpSocket->bind(9999);

    setWindowTitle("端口号为9999");

    connect(udpSocket,&QUdpSocket::readyRead,this,&UdpServer::dealMsg);
}

UdpServer::~UdpServer()
{
    delete ui;
}

void UdpServer::dealMsg()
{
    //读取对方发送的内容
    char buf[1024]={0};
    QHostAddress cliAddr;//对方IP地址
    quint16 port;//对方端口
   qint64 len = udpSocket->readDatagram(buf,sizeof(buf),&cliAddr,&port);
     if(len>0)
     {
         //格式化 [192.68.2.2:8888]aaaa
         QString str = QString("[%1:%2] %3").arg(cliAddr.toString().arg(port).arg(buf));

         //给编辑区设置内容
         ui->textEdit->setText(str);

     }

}
//发送数据
void UdpServer::on_buttonSend_clicked()
{

    //先获取对方的IP和端口
    QString ip= ui->lineEditIP->text();
    qint16 port = ui->lineEditPort->text().toInt();

    //获取编辑区内容

    QString str = ui->textEdit->toPlainText();

    //给指定的IP发送数据
    udpSocket->writeDatagram(str.toUtf8(),QHostAddress(ip),port);
}

void UdpServer::on_buttonClose_clicked()
{

}

/********************************************************************************
** Form generated from reading UI file 'udpserver.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPSERVER_H
#define UI_UDPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UdpServer
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditPort;
    QLabel *label_2;
    QLineEdit *lineEditIP;
    QTextEdit *textEdit;
    QPushButton *buttonSend;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonClose;

    void setupUi(QWidget *UdpServer)
    {
        if (UdpServer->objectName().isEmpty())
            UdpServer->setObjectName(QStringLiteral("UdpServer"));
        UdpServer->resize(400, 300);
        gridLayout = new QGridLayout(UdpServer);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(UdpServer);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditPort = new QLineEdit(UdpServer);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        gridLayout->addWidget(lineEditPort, 0, 1, 1, 2);

        label_2 = new QLabel(UdpServer);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditIP = new QLineEdit(UdpServer);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));

        gridLayout->addWidget(lineEditIP, 1, 1, 1, 2);

        textEdit = new QTextEdit(UdpServer);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 2, 0, 1, 3);

        buttonSend = new QPushButton(UdpServer);
        buttonSend->setObjectName(QStringLiteral("buttonSend"));

        gridLayout->addWidget(buttonSend, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(217, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 1, 1, 1);

        buttonClose = new QPushButton(UdpServer);
        buttonClose->setObjectName(QStringLiteral("buttonClose"));

        gridLayout->addWidget(buttonClose, 3, 2, 1, 1);


        retranslateUi(UdpServer);

        QMetaObject::connectSlotsByName(UdpServer);
    } // setupUi

    void retranslateUi(QWidget *UdpServer)
    {
        UdpServer->setWindowTitle(QApplication::translate("UdpServer", "Form", 0));
        label->setText(QApplication::translate("UdpServer", "\345\257\271\346\226\271\347\232\204\347\253\257\345\217\243\357\274\232", 0));
        label_2->setText(QApplication::translate("UdpServer", "\345\257\271\346\226\271\347\232\204IP\357\274\232", 0));
        buttonSend->setText(QApplication::translate("UdpServer", "send", 0));
        buttonClose->setText(QApplication::translate("UdpServer", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class UdpServer: public Ui_UdpServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPSERVER_H

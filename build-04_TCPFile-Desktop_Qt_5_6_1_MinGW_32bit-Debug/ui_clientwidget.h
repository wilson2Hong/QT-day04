/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QLineEdit *lineEditIP;
    QLabel *label;
    QPushButton *buttonConnect;
    QLineEdit *lineEditPort;
    QLabel *label_2;
    QProgressBar *progressBar;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QStringLiteral("ClientWidget"));
        ClientWidget->resize(400, 300);
        widget = new QWidget(ClientWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 19, 351, 100));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(115, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(24);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        widget_2 = new QWidget(ClientWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 130, 371, 111));
        lineEditIP = new QLineEdit(widget_2);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));
        lineEditIP->setGeometry(QRect(110, 30, 161, 20));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 81, 16));
        buttonConnect = new QPushButton(widget_2);
        buttonConnect->setObjectName(QStringLiteral("buttonConnect"));
        buttonConnect->setGeometry(QRect(280, 50, 75, 23));
        lineEditPort = new QLineEdit(widget_2);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setGeometry(QRect(110, 70, 161, 20));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 81, 20));
        progressBar = new QProgressBar(ClientWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 260, 371, 23));
        progressBar->setValue(24);

        retranslateUi(ClientWidget);

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QApplication::translate("ClientWidget", "Form", 0));
        label_3->setText(QApplication::translate("ClientWidget", "\345\256\242\346\210\267\347\253\257", 0));
        lineEditIP->setText(QApplication::translate("ClientWidget", "127.0.0.1", 0));
        label->setText(QApplication::translate("ClientWidget", "\346\234\215\345\212\241\345\231\250\347\232\204IP:", 0));
        buttonConnect->setText(QApplication::translate("ClientWidget", "connect", 0));
        lineEditPort->setText(QApplication::translate("ClientWidget", "8888", 0));
        label_2->setText(QApplication::translate("ClientWidget", "\346\234\215\345\212\241\345\231\250\347\232\204\347\253\257\345\217\243:", 0));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *TSPassword;
    QLabel *label;
    QComboBox *ComboTServer;
    QLabel *label_3;
    QLineEdit *TSUsername;
    QLabel *label_4;
    QComboBox *ComboDomain;
    QLabel *label_5;
    QWidget *tab_2;
    QLabel *LabelIP;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QWidget *tab_3;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *ButtonConnect;
    QLabel *label_2;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(395, 581);
        MainWindow->setMinimumSize(QSize(395, 581));
        MainWindow->setMaximumSize(QSize(395, 581));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/\305\275D syst\303\251my/Projekty/aplikace/terminal klient/rdp.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLocale(QLocale(QLocale::Czech, QLocale::CzechRepublic));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(6, 179, 381, 301));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 50, 351, 171));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TSPassword = new QLineEdit(widget);
        TSPassword->setObjectName(QStringLiteral("TSPassword"));
        TSPassword->setMinimumSize(QSize(113, 0));
        TSPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(TSPassword, 2, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        ComboTServer = new QComboBox(widget);
        ComboTServer->setObjectName(QStringLiteral("ComboTServer"));

        gridLayout->addWidget(ComboTServer, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(58, 0));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        TSUsername = new QLineEdit(widget);
        TSUsername->setObjectName(QStringLiteral("TSUsername"));
        TSUsername->setMinimumSize(QSize(113, 0));

        gridLayout->addWidget(TSUsername, 1, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(58, 0));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        ComboDomain = new QComboBox(widget);
        ComboDomain->setObjectName(QStringLiteral("ComboDomain"));

        gridLayout->addWidget(ComboDomain, 3, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(58, 0));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        LabelIP = new QLabel(tab_2);
        LabelIP->setObjectName(QStringLiteral("LabelIP"));
        LabelIP->setGeometry(QRect(170, 40, 191, 31));
        widget1 = new QWidget(tab_2);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 20, 352, 101));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        listWidget = new QListWidget(widget1);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 40, 121, 91));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Pictures/logo-png-500px-blankframe.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 20, 201, 191));
        tabWidget->addTab(tab_3, QString());
        ButtonConnect = new QPushButton(centralWidget);
        ButtonConnect->setObjectName(QStringLiteral("ButtonConnect"));
        ButtonConnect->setGeometry(QRect(257, 486, 111, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 371, 71));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(240, 70, 111, 101));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/\305\275D syst\303\251my/Projekty/aplikace/terminal klient/rdp.png")));
        label_8->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 395, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget, ComboTServer);
        QWidget::setTabOrder(ComboTServer, TSUsername);
        QWidget::setTabOrder(TSUsername, TSPassword);
        QWidget::setTabOrder(TSPassword, ComboDomain);
        QWidget::setTabOrder(ComboDomain, ButtonConnect);
        QWidget::setTabOrder(ButtonConnect, pushButton);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TS Klient Z-NET", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Server", Q_NULLPTR));
        ComboTServer->clear();
        ComboTServer->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "term01.z-net.cz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "term02.z-net.cz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "term03.z-net.cz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "term04.z-net.cz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ds-term01.csad.cz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ds-term02.csad.cz", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("MainWindow", "U\305\276ivatel", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Heslo", Q_NULLPTR));
        ComboDomain->clear();
        ComboDomain->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "z-net.cz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "csad.cz", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "Dom\303\251na", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "TS Client", Q_NULLPTR));
        LabelIP->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Zjisti IP", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Lok\303\241ln\303\255 info", Q_NULLPTR));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">\305\275D syst\303\251my, s.r.o.</span></p><p>t\305\231\303\255da Tom\303\241\305\241e Bati 258, Louky</p><p>76302 Zl\303\255n</p><p>I\304\214 29204640 DI\304\214 CZ29204640</p><p>Autor Roman Fic</p><p>Helpdesk podpora@zdsystemy.cz</p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "O aplikaci", Q_NULLPTR));
        ButtonConnect->setText(QApplication::translate("MainWindow", "P\305\231ipojit", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:600;\">TS Klient </span><span style=\" font-size:36pt; font-weight:600; vertical-align:super;\">Z-NET</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

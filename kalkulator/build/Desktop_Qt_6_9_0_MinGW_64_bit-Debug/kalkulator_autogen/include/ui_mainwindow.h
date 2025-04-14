/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionO_Autorze;
    QAction *actionJasny;
    QAction *actionCiemny;
    QAction *action2;
    QAction *action3;
    QAction *action4;
    QAction *action5;
    QAction *action6;
    QAction *action7;
    QAction *action8;
    QAction *action9;
    QAction *action10;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *mno;
    QPushButton *dziewiec;
    QPushButton *od;
    QPushButton *zero;
    QPushButton *jeden;
    QPushButton *row;
    QPushButton *osiem;
    QPushButton *dod;
    QPushButton *kon;
    QPushButton *trzy;
    QPushButton *kro;
    QPushButton *mod;
    QPushButton *AC;
    QLineEdit *wys;
    QPushButton *siedem;
    QPushButton *piec;
    QPushButton *dwa;
    QPushButton *dziel;
    QPushButton *CE;
    QPushButton *szesc;
    QPushButton *cztery;
    QMenuBar *menuBar;
    QMenu *menuAUtor;
    QMenu *menuMotywy;
    QMenu *menuDomy_lna_baza_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(370, 330);
        MainWindow->setMinimumSize(QSize(370, 330));
        MainWindow->setMaximumSize(QSize(370, 330));
        MainWindow->setStyleSheet(QString::fromUtf8("background: #C0C0C0"));
        actionO_Autorze = new QAction(MainWindow);
        actionO_Autorze->setObjectName("actionO_Autorze");
        actionJasny = new QAction(MainWindow);
        actionJasny->setObjectName("actionJasny");
        actionCiemny = new QAction(MainWindow);
        actionCiemny->setObjectName("actionCiemny");
        action2 = new QAction(MainWindow);
        action2->setObjectName("action2");
        action3 = new QAction(MainWindow);
        action3->setObjectName("action3");
        action4 = new QAction(MainWindow);
        action4->setObjectName("action4");
        action5 = new QAction(MainWindow);
        action5->setObjectName("action5");
        action6 = new QAction(MainWindow);
        action6->setObjectName("action6");
        action7 = new QAction(MainWindow);
        action7->setObjectName("action7");
        action8 = new QAction(MainWindow);
        action8->setObjectName("action8");
        action9 = new QAction(MainWindow);
        action9->setObjectName("action9");
        action10 = new QAction(MainWindow);
        action10->setObjectName("action10");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 10, 334, 266));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mno = new QPushButton(gridLayoutWidget);
        mno->setObjectName("mno");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mno->sizePolicy().hasHeightForWidth());
        mno->setSizePolicy(sizePolicy);
        mno->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #8B0000	;\n"
"border: 2px #800000;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF6347	;\n"
"border: 5px red;\n"
"padding: 5px}"));

        gridLayout->addWidget(mno, 5, 3, 1, 1);

        dziewiec = new QPushButton(gridLayoutWidget);
        dziewiec->setObjectName("dziewiec");
        sizePolicy.setHeightForWidth(dziewiec->sizePolicy().hasHeightForWidth());
        dziewiec->setSizePolicy(sizePolicy);
        dziewiec->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #2F4F4F;\n"
"border: 1px solid gray;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF00FF;\n"
"border: 1px purple;\n"
"padding: 5px\n"
"}"));

        gridLayout->addWidget(dziewiec, 4, 2, 1, 1);

        od = new QPushButton(gridLayoutWidget);
        od->setObjectName("od");
        sizePolicy.setHeightForWidth(od->sizePolicy().hasHeightForWidth());
        od->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        od->setFont(font);
        od->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #8B0000	;\n"
"border: 2px #800000;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF6347	;\n"
"border: 5px red;\n"
"padding: 5px}"));

        gridLayout->addWidget(od, 6, 3, 1, 1);

        zero = new QPushButton(gridLayoutWidget);
        zero->setObjectName("zero");
        sizePolicy.setHeightForWidth(zero->sizePolicy().hasHeightForWidth());
        zero->setSizePolicy(sizePolicy);
        zero->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #2F4F4F;\n"
"border: 1px solid gray;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF00FF;\n"
"border: 1px purple;\n"
"padding: 5px\n"
"}"));

        gridLayout->addWidget(zero, 7, 0, 1, 1);

        jeden = new QPushButton(gridLayoutWidget);
        jeden->setObjectName("jeden");
        sizePolicy.setHeightForWidth(jeden->sizePolicy().hasHeightForWidth());
        jeden->setSizePolicy(sizePolicy);
        jeden->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #2F4F4F;\n"
"border: 1px solid gray;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF00FF;\n"
"border: 1px purple;\n"
"padding: 5px\n"
"}"));

        gridLayout->addWidget(jeden, 6, 0, 1, 1);

        row = new QPushButton(gridLayoutWidget);
        row->setObjectName("row");
        sizePolicy.setHeightForWidth(row->sizePolicy().hasHeightForWidth());
        row->setSizePolicy(sizePolicy);
        row->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #8B0000	;\n"
"border: 2px #800000;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF6347	;\n"
"border: 5px red;\n"
"padding: 5px}"));

        gridLayout->addWidget(row, 7, 2, 1, 1);

        osiem = new QPushButton(gridLayoutWidget);
        osiem->setObjectName("osiem");
        sizePolicy.setHeightForWidth(osiem->sizePolicy().hasHeightForWidth());
        osiem->setSizePolicy(sizePolicy);
        osiem->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #2F4F4F;\n"
"border: 1px solid gray;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF00FF;\n"
"border: 1px purple;\n"
"padding: 5px\n"
"}"));

        gridLayout->addWidget(osiem, 4, 1, 1, 1);

        dod = new QPushButton(gridLayoutWidget);
        dod->setObjectName("dod");
        sizePolicy.setHeightForWidth(dod->sizePolicy().hasHeightForWidth());
        dod->setSizePolicy(sizePolicy);
        dod->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #8B0000	;\n"
"border: 2px #800000;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF6347	;\n"
"border: 5px red;\n"
"padding: 5px}"));

        gridLayout->addWidget(dod, 7, 3, 1, 1);

        kon = new QPushButton(gridLayoutWidget);
        kon->setObjectName("kon");
        sizePolicy.setHeightForWidth(kon->sizePolicy().hasHeightForWidth());
        kon->setSizePolicy(sizePolicy);
        kon->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #8B0000	;\n"
"border: 2px #800000;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF6347	;\n"
"border: 5px red;\n"
"padding: 5px}"));

        gridLayout->addWidget(kon, 2, 2, 1, 1);

        trzy = new QPushButton(gridLayoutWidget);
        trzy->setObjectName("trzy");
        sizePolicy.setHeightForWidth(trzy->sizePolicy().hasHeightForWidth());
        trzy->setSizePolicy(sizePolicy);
        trzy->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #2F4F4F;\n"
"border: 1px solid gray;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF00FF;\n"
"border: 1px purple;\n"
"padding: 5px\n"
"}"));

        gridLayout->addWidget(trzy, 6, 2, 1, 1);

        kro = new QPushButton(gridLayoutWidget);
        kro->setObjectName("kro");
        sizePolicy.setHeightForWidth(kro->sizePolicy().hasHeightForWidth());
        kro->setSizePolicy(sizePolicy);
        kro->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #8B0000	;\n"
"border: 2px #800000;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF6347	;\n"
"border: 5px red;\n"
"padding: 5px}"));

        gridLayout->addWidget(kro, 7, 1, 1, 1);

        mod = new QPushButton(gridLayoutWidget);
        mod->setObjectName("mod");
        sizePolicy.setHeightForWidth(mod->sizePolicy().hasHeightForWidth());
        mod->setSizePolicy(sizePolicy);
        mod->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #8B0000	;\n"
"border: 2px #800000;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF6347	;\n"
"border: 5px red;\n"
"padding: 5px}"));

        gridLayout->addWidget(mod, 2, 3, 1, 1);

        AC = new QPushButton(gridLayoutWidget);
        AC->setObjectName("AC");
        sizePolicy.setHeightForWidth(AC->sizePolicy().hasHeightForWidth());
        AC->setSizePolicy(sizePolicy);
        AC->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #8B0000	;\n"
"border: 2px #800000;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF6347	;\n"
"border: 5px red;\n"
"padding: 5px\n"
"}"));

        gridLayout->addWidget(AC, 2, 0, 1, 1);

        wys = new QLineEdit(gridLayoutWidget);
        wys->setObjectName("wys");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wys->sizePolicy().hasHeightForWidth());
        wys->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        wys->setFont(font1);
        wys->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: #8B0000;\n"
"border: 1px Plum;\n"
"padding: 5px\n"
"}"));
        wys->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(wys, 1, 0, 1, 4);

        siedem = new QPushButton(gridLayoutWidget);
        siedem->setObjectName("siedem");
        sizePolicy.setHeightForWidth(siedem->sizePolicy().hasHeightForWidth());
        siedem->setSizePolicy(sizePolicy);
        siedem->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #2F4F4F;\n"
"border: 1px solid gray;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF00FF;\n"
"border: 1px purple;\n"
"padding: 5px\n"
"}"));

        gridLayout->addWidget(siedem, 4, 0, 1, 1);

        piec = new QPushButton(gridLayoutWidget);
        piec->setObjectName("piec");
        sizePolicy.setHeightForWidth(piec->sizePolicy().hasHeightForWidth());
        piec->setSizePolicy(sizePolicy);
        piec->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #2F4F4F;\n"
"border: 1px solid gray;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF00FF;\n"
"border: 1px purple;\n"
"padding: 5px\n"
"}"));

        gridLayout->addWidget(piec, 5, 1, 1, 1);

        dwa = new QPushButton(gridLayoutWidget);
        dwa->setObjectName("dwa");
        sizePolicy.setHeightForWidth(dwa->sizePolicy().hasHeightForWidth());
        dwa->setSizePolicy(sizePolicy);
        dwa->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #2F4F4F;\n"
"border: 1px solid gray;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF00FF;\n"
"border: 1px purple;\n"
"padding: 5px\n"
"}"));

        gridLayout->addWidget(dwa, 6, 1, 1, 1);

        dziel = new QPushButton(gridLayoutWidget);
        dziel->setObjectName("dziel");
        sizePolicy.setHeightForWidth(dziel->sizePolicy().hasHeightForWidth());
        dziel->setSizePolicy(sizePolicy);
        dziel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #8B0000	;\n"
"border: 1px solid gray;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF00FF;\n"
"border: 1px purple;\n"
"padding: 5px\n"
"}"));

        gridLayout->addWidget(dziel, 4, 3, 1, 1);

        CE = new QPushButton(gridLayoutWidget);
        CE->setObjectName("CE");
        sizePolicy.setHeightForWidth(CE->sizePolicy().hasHeightForWidth());
        CE->setSizePolicy(sizePolicy);
        CE->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #8B0000	;\n"
"border: 2px #800000;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF6347	;\n"
"border: 5px red;\n"
"padding: 5px}"));

        gridLayout->addWidget(CE, 2, 1, 1, 1);

        szesc = new QPushButton(gridLayoutWidget);
        szesc->setObjectName("szesc");
        sizePolicy.setHeightForWidth(szesc->sizePolicy().hasHeightForWidth());
        szesc->setSizePolicy(sizePolicy);
        szesc->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #2F4F4F;\n"
"border: 1px solid gray;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF00FF;\n"
"border: 1px purple;\n"
"padding: 5px\n"
"}"));

        gridLayout->addWidget(szesc, 5, 2, 1, 1);

        cztery = new QPushButton(gridLayoutWidget);
        cztery->setObjectName("cztery");
        sizePolicy.setHeightForWidth(cztery->sizePolicy().hasHeightForWidth());
        cztery->setSizePolicy(sizePolicy);
        cztery->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #2F4F4F;\n"
"border: 1px solid gray;\n"
"padding: 5px\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: #FF00FF;\n"
"border: 1px purple;\n"
"padding: 5px\n"
"}"));

        gridLayout->addWidget(cztery, 5, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 370, 17));
        menuAUtor = new QMenu(menuBar);
        menuAUtor->setObjectName("menuAUtor");
        menuMotywy = new QMenu(menuAUtor);
        menuMotywy->setObjectName("menuMotywy");
        menuDomy_lna_baza_2 = new QMenu(menuAUtor);
        menuDomy_lna_baza_2->setObjectName("menuDomy_lna_baza_2");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuAUtor->menuAction());
        menuAUtor->addAction(actionO_Autorze);
        menuAUtor->addAction(menuMotywy->menuAction());
        menuAUtor->addAction(menuDomy_lna_baza_2->menuAction());
        menuMotywy->addAction(actionJasny);
        menuMotywy->addAction(actionCiemny);
        menuDomy_lna_baza_2->addAction(action2);
        menuDomy_lna_baza_2->addAction(action3);
        menuDomy_lna_baza_2->addAction(action4);
        menuDomy_lna_baza_2->addAction(action5);
        menuDomy_lna_baza_2->addAction(action6);
        menuDomy_lna_baza_2->addAction(action7);
        menuDomy_lna_baza_2->addAction(action8);
        menuDomy_lna_baza_2->addAction(action9);
        menuDomy_lna_baza_2->addAction(action10);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionO_Autorze->setText(QCoreApplication::translate("MainWindow", "O Autorze", nullptr));
        actionJasny->setText(QCoreApplication::translate("MainWindow", "Jasny", nullptr));
        actionCiemny->setText(QCoreApplication::translate("MainWindow", "Ciemny", nullptr));
        action2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        action3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        action4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        action5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        action6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        action7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        action8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        action9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        action10->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        mno->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        dziewiec->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        od->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        jeden->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        row->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        osiem->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        dod->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        kon->setText(QCoreApplication::translate("MainWindow", "KON", nullptr));
        trzy->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        kro->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        mod->setText(QCoreApplication::translate("MainWindow", "MOD", nullptr));
        AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        wys->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        siedem->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        piec->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        dwa->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        dziel->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        CE->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        szesc->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        cztery->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        menuAUtor->setTitle(QCoreApplication::translate("MainWindow", "Opcje", nullptr));
        menuMotywy->setTitle(QCoreApplication::translate("MainWindow", "Motywy", nullptr));
        menuDomy_lna_baza_2->setTitle(QCoreApplication::translate("MainWindow", "Domy\305\233lna baza", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

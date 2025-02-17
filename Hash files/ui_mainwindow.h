/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSortir;
    QAction *actionObrir;
    QAction *actionFitxer;
    QAction *actionCadena;
    QAction *actionInfo;
    QAction *actionActivate;
    QAction *actionShow_info;
    QAction *actionMd4;
    QAction *actionThe_expert_hash;
    QWidget *centralWidget;
    QLabel *label_Sortida;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Fitxer_2;
    QLineEdit *lineEdit2;
    QPushButton *pushButton2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Fitxer_1;
    QLineEdit *lineEdit1;
    QPushButton *pushButton1;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuDaltonics;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(498, 259);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../../usr/share/icons/hicolor/16x16/emblems/emblem-note.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        actionSortir = new QAction(MainWindow);
        actionSortir->setObjectName(QString::fromUtf8("actionSortir"));
        actionObrir = new QAction(MainWindow);
        actionObrir->setObjectName(QString::fromUtf8("actionObrir"));
        actionFitxer = new QAction(MainWindow);
        actionFitxer->setObjectName(QString::fromUtf8("actionFitxer"));
        actionCadena = new QAction(MainWindow);
        actionCadena->setObjectName(QString::fromUtf8("actionCadena"));
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        actionActivate = new QAction(MainWindow);
        actionActivate->setObjectName(QString::fromUtf8("actionActivate"));
        actionActivate->setCheckable(true);
        actionShow_info = new QAction(MainWindow);
        actionShow_info->setObjectName(QString::fromUtf8("actionShow_info"));
        actionShow_info->setCheckable(true);
        actionMd4 = new QAction(MainWindow);
        actionMd4->setObjectName(QString::fromUtf8("actionMd4"));
        actionThe_expert_hash = new QAction(MainWindow);
        actionThe_expert_hash->setObjectName(QString::fromUtf8("actionThe_expert_hash"));
        actionThe_expert_hash->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_Sortida = new QLabel(centralWidget);
        label_Sortida->setObjectName(QString::fromUtf8("label_Sortida"));
        label_Sortida->setGeometry(QRect(10, 90, 481, 111));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 17, 81, 61));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 391, 36));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_Fitxer_2 = new QLabel(layoutWidget);
        label_Fitxer_2->setObjectName(QString::fromUtf8("label_Fitxer_2"));

        horizontalLayout_2->addWidget(label_Fitxer_2);

        lineEdit2 = new QLineEdit(layoutWidget);
        lineEdit2->setObjectName(QString::fromUtf8("lineEdit2"));

        horizontalLayout_2->addWidget(lineEdit2);

        pushButton2 = new QPushButton(layoutWidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));

        horizontalLayout_2->addWidget(pushButton2);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 391, 36));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_Fitxer_1 = new QLabel(layoutWidget1);
        label_Fitxer_1->setObjectName(QString::fromUtf8("label_Fitxer_1"));

        horizontalLayout->addWidget(label_Fitxer_1);

        lineEdit1 = new QLineEdit(layoutWidget1);
        lineEdit1->setObjectName(QString::fromUtf8("lineEdit1"));
        lineEdit1->setDragEnabled(false);
        lineEdit1->setReadOnly(false);

        horizontalLayout->addWidget(lineEdit1);

        pushButton1 = new QPushButton(layoutWidget1);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));

        horizontalLayout->addWidget(pushButton1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 498, 19));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuDaltonics = new QMenu(menuBar);
        menuDaltonics->setObjectName(QString::fromUtf8("menuDaltonics"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit1, lineEdit2);
        QWidget::setTabOrder(lineEdit2, pushButton1);
        QWidget::setTabOrder(pushButton1, pushButton2);
        QWidget::setTabOrder(pushButton2, pushButton);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuDaltonics->menuAction());
        menuMenu->addAction(actionShow_info);
        menuMenu->addAction(actionThe_expert_hash);
        menuMenu->addAction(actionSortir);
        menuDaltonics->addAction(actionActivate);

        retranslateUi(MainWindow);
        QObject::connect(actionSortir, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Tyby File Comp v0.2b", 0, QApplication::UnicodeUTF8));
        actionSortir->setText(QApplication::translate("MainWindow", "&Sortir", 0, QApplication::UnicodeUTF8));
        actionObrir->setText(QApplication::translate("MainWindow", "Obrir", 0, QApplication::UnicodeUTF8));
        actionFitxer->setText(QApplication::translate("MainWindow", "Fitxer", 0, QApplication::UnicodeUTF8));
        actionCadena->setText(QApplication::translate("MainWindow", "Cadena", 0, QApplication::UnicodeUTF8));
        actionInfo->setText(QApplication::translate("MainWindow", "Info", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionInfo->setToolTip(QApplication::translate("MainWindow", "File info", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionActivate->setText(QApplication::translate("MainWindow", "&Activate", 0, QApplication::UnicodeUTF8));
        actionShow_info->setText(QApplication::translate("MainWindow", "Show &info", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShow_info->setToolTip(QApplication::translate("MainWindow", "Will pop up file info if files matches", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionMd4->setText(QApplication::translate("MainWindow", "M&D4", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMd4->setToolTip(QApplication::translate("MainWindow", "MD4 (Deprecated)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionThe_expert_hash->setText(QApplication::translate("MainWindow", "The expert hash", 0, QApplication::UnicodeUTF8));
        label_Sortida->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Compara", 0, QApplication::UnicodeUTF8));
        label_Fitxer_2->setText(QApplication::translate("MainWindow", "File 2:", 0, QApplication::UnicodeUTF8));
        pushButton2->setText(QApplication::translate("MainWindow", "Cerca", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_Fitxer_1->setToolTip(QApplication::translate("MainWindow", "Or SHA512 hash", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_Fitxer_1->setText(QApplication::translate("MainWindow", "File 1:", 0, QApplication::UnicodeUTF8));
        pushButton1->setText(QApplication::translate("MainWindow", "Cerca", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("MainWindow", "&Menu", 0, QApplication::UnicodeUTF8));
        menuDaltonics->setTitle(QApplication::translate("MainWindow", "Co&lorblind", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

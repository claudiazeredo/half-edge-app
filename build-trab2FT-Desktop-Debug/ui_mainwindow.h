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
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionUp;
    QAction *actionLeft;
    QAction *actionRight;
    QAction *actionDown;
    QAction *actionVertice;
    QAction *actionAresta;
    QAction *actionFace;
    QAction *actionConvex_Hull;
    QAction *actionBondary;
    QAction *actionInsereVertice;
    QWidget *centralwidget;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/open"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_File->setIcon(icon);
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/zoom-in"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_In->setIcon(icon1);
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/zoom-out"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_Out->setIcon(icon2);
        actionUp = new QAction(MainWindow);
        actionUp->setObjectName(QString::fromUtf8("actionUp"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/arrow-up"), QSize(), QIcon::Normal, QIcon::Off);
        actionUp->setIcon(icon3);
        actionLeft = new QAction(MainWindow);
        actionLeft->setObjectName(QString::fromUtf8("actionLeft"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/arrow-left"), QSize(), QIcon::Normal, QIcon::Off);
        actionLeft->setIcon(icon4);
        actionRight = new QAction(MainWindow);
        actionRight->setObjectName(QString::fromUtf8("actionRight"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/arrow-rigth"), QSize(), QIcon::Normal, QIcon::Off);
        actionRight->setIcon(icon5);
        actionDown = new QAction(MainWindow);
        actionDown->setObjectName(QString::fromUtf8("actionDown"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/arrow-down"), QSize(), QIcon::Normal, QIcon::Off);
        actionDown->setIcon(icon6);
        actionVertice = new QAction(MainWindow);
        actionVertice->setObjectName(QString::fromUtf8("actionVertice"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/vertice"), QSize(), QIcon::Normal, QIcon::Off);
        actionVertice->setIcon(icon7);
        actionAresta = new QAction(MainWindow);
        actionAresta->setObjectName(QString::fromUtf8("actionAresta"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/aresta"), QSize(), QIcon::Normal, QIcon::Off);
        actionAresta->setIcon(icon8);
        actionFace = new QAction(MainWindow);
        actionFace->setObjectName(QString::fromUtf8("actionFace"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/face"), QSize(), QIcon::Normal, QIcon::Off);
        actionFace->setIcon(icon9);
        actionConvex_Hull = new QAction(MainWindow);
        actionConvex_Hull->setObjectName(QString::fromUtf8("actionConvex_Hull"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/convexhull"), QSize(), QIcon::Normal, QIcon::Off);
        actionConvex_Hull->setIcon(icon10);
        actionBondary = new QAction(MainWindow);
        actionBondary->setObjectName(QString::fromUtf8("actionBondary"));
        actionBondary->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/bond"), QSize(), QIcon::Normal, QIcon::On);
        actionBondary->setIcon(icon11);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));

        actionInsereVertice = new QAction(MainWindow);
        actionInsereVertice->setObjectName(QString::fromUtf8("InsereVertice"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/add"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsereVertice->setIcon(icon12);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, -15, 801, 41));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);
        MainWindow->insertToolBarBreak(toolBar);

        toolBar->addAction(actionOpen_File);
        toolBar->addSeparator();
        toolBar->addAction(actionZoom_In);
        toolBar->addAction(actionZoom_Out);
        toolBar->addSeparator();
        toolBar->addAction(actionUp);
        toolBar->addAction(actionDown);
        toolBar->addAction(actionLeft);
        toolBar->addAction(actionRight);
        toolBar->addAction(actionAresta);
        toolBar->addSeparator();
        toolBar->addAction(actionVertice);
        toolBar->addAction(actionFace);
        toolBar->addSeparator();
        toolBar->addAction(actionBondary);
        toolBar->addSeparator();
        toolBar->addAction(actionInsereVertice);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Vizualizador de malha com Half-Edge", 0, QApplication::UnicodeUTF8));
        actionOpen_File->setText(QApplication::translate("MainWindow", "Open File", 0, QApplication::UnicodeUTF8));
        actionOpen_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionZoom_In->setText(QApplication::translate("MainWindow", "Zoom In", 0, QApplication::UnicodeUTF8));
        actionZoom_In->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        actionZoom_Out->setText(QApplication::translate("MainWindow", "Zoom Out", 0, QApplication::UnicodeUTF8));
        actionZoom_Out->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionUp->setText(QApplication::translate("MainWindow", "Up", 0, QApplication::UnicodeUTF8));
        actionUp->setShortcut(QApplication::translate("MainWindow", "Ctrl+Up", 0, QApplication::UnicodeUTF8));
        actionLeft->setText(QApplication::translate("MainWindow", "Left", 0, QApplication::UnicodeUTF8));
        actionLeft->setShortcut(QApplication::translate("MainWindow", "Ctrl+Left", 0, QApplication::UnicodeUTF8));
        actionRight->setText(QApplication::translate("MainWindow", "Right", 0, QApplication::UnicodeUTF8));
        actionRight->setShortcut(QApplication::translate("MainWindow", "Ctrl+Right", 0, QApplication::UnicodeUTF8));
        actionDown->setText(QApplication::translate("MainWindow", "Down", 0, QApplication::UnicodeUTF8));
        actionDown->setShortcut(QApplication::translate("MainWindow", "Ctrl+Down", 0, QApplication::UnicodeUTF8));
        actionVertice->setText(QApplication::translate("MainWindow", "Vertice", 0, QApplication::UnicodeUTF8));
        actionAresta->setText(QApplication::translate("MainWindow", "Aresta", 0, QApplication::UnicodeUTF8));
        actionFace->setText(QApplication::translate("MainWindow", "Face", 0, QApplication::UnicodeUTF8));
        actionConvex_Hull->setText(QApplication::translate("MainWindow", "Convex Hull", 0, QApplication::UnicodeUTF8));
        actionConvex_Hull->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        actionBondary->setText(QApplication::translate("MainWindow", "bondary", 0, QApplication::UnicodeUTF8));
        actionInsereVertice->setText(QApplication::translate("MainWindow", "Inserir Novo Vertice", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

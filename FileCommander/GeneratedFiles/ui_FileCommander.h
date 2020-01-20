/********************************************************************************
** Form generated from reading UI file 'FileCommander.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECOMMANDER_H
#define UI_FILECOMMANDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileCommanderClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FileCommanderClass)
    {
        if (FileCommanderClass->objectName().isEmpty())
            FileCommanderClass->setObjectName(QStringLiteral("FileCommanderClass"));
        FileCommanderClass->resize(600, 400);
        menuBar = new QMenuBar(FileCommanderClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        FileCommanderClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FileCommanderClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FileCommanderClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(FileCommanderClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        FileCommanderClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(FileCommanderClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FileCommanderClass->setStatusBar(statusBar);

        retranslateUi(FileCommanderClass);

        QMetaObject::connectSlotsByName(FileCommanderClass);
    } // setupUi

    void retranslateUi(QMainWindow *FileCommanderClass)
    {
        FileCommanderClass->setWindowTitle(QApplication::translate("FileCommanderClass", "FileCommander", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FileCommanderClass: public Ui_FileCommanderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECOMMANDER_H

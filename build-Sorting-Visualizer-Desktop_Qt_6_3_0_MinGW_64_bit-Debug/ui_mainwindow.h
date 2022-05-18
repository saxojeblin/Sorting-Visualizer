/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *bubbleButton;
    QPushButton *insertionButton;
    QPushButton *quickButton;
    QPushButton *selectionButton;
    QPushButton *randomizeButton;
    QPushButton *exitButton;
    QFrame *menuLine1;
    QFrame *menuLine2;
    QLabel *menuLabel;
    QFrame *menuLine3;
    QFrame *displayLine1;
    QLabel *displayLabel;
    QFrame *num1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(670, 421);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bubbleButton = new QPushButton(centralwidget);
        bubbleButton->setObjectName(QString::fromUtf8("bubbleButton"));
        bubbleButton->setGeometry(QRect(570, 50, 91, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bubbleButton->sizePolicy().hasHeightForWidth());
        bubbleButton->setSizePolicy(sizePolicy);
        insertionButton = new QPushButton(centralwidget);
        insertionButton->setObjectName(QString::fromUtf8("insertionButton"));
        insertionButton->setGeometry(QRect(570, 170, 91, 41));
        sizePolicy.setHeightForWidth(insertionButton->sizePolicy().hasHeightForWidth());
        insertionButton->setSizePolicy(sizePolicy);
        quickButton = new QPushButton(centralwidget);
        quickButton->setObjectName(QString::fromUtf8("quickButton"));
        quickButton->setGeometry(QRect(570, 230, 91, 41));
        sizePolicy.setHeightForWidth(quickButton->sizePolicy().hasHeightForWidth());
        quickButton->setSizePolicy(sizePolicy);
        selectionButton = new QPushButton(centralwidget);
        selectionButton->setObjectName(QString::fromUtf8("selectionButton"));
        selectionButton->setGeometry(QRect(570, 110, 91, 41));
        sizePolicy.setHeightForWidth(selectionButton->sizePolicy().hasHeightForWidth());
        selectionButton->setSizePolicy(sizePolicy);
        randomizeButton = new QPushButton(centralwidget);
        randomizeButton->setObjectName(QString::fromUtf8("randomizeButton"));
        randomizeButton->setGeometry(QRect(570, 310, 91, 41));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(570, 370, 91, 41));
        menuLine1 = new QFrame(centralwidget);
        menuLine1->setObjectName(QString::fromUtf8("menuLine1"));
        menuLine1->setGeometry(QRect(540, 0, 41, 421));
        menuLine1->setFrameShape(QFrame::VLine);
        menuLine1->setFrameShadow(QFrame::Sunken);
        menuLine2 = new QFrame(centralwidget);
        menuLine2->setObjectName(QString::fromUtf8("menuLine2"));
        menuLine2->setGeometry(QRect(560, 280, 111, 20));
        menuLine2->setFrameShape(QFrame::HLine);
        menuLine2->setFrameShadow(QFrame::Sunken);
        menuLabel = new QLabel(centralwidget);
        menuLabel->setObjectName(QString::fromUtf8("menuLabel"));
        menuLabel->setGeometry(QRect(570, 0, 91, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(false);
        font.setUnderline(false);
        menuLabel->setFont(font);
        menuLabel->setLayoutDirection(Qt::LeftToRight);
        menuLabel->setAlignment(Qt::AlignCenter);
        menuLine3 = new QFrame(centralwidget);
        menuLine3->setObjectName(QString::fromUtf8("menuLine3"));
        menuLine3->setGeometry(QRect(560, 30, 118, 3));
        menuLine3->setFrameShape(QFrame::HLine);
        menuLine3->setFrameShadow(QFrame::Sunken);
        displayLine1 = new QFrame(centralwidget);
        displayLine1->setObjectName(QString::fromUtf8("displayLine1"));
        displayLine1->setGeometry(QRect(0, 350, 561, 20));
        displayLine1->setFrameShape(QFrame::HLine);
        displayLine1->setFrameShadow(QFrame::Sunken);
        displayLabel = new QLabel(centralwidget);
        displayLabel->setObjectName(QString::fromUtf8("displayLabel"));
        displayLabel->setGeometry(QRect(0, 359, 561, 61));
        QFont font1;
        font1.setPointSize(22);
        displayLabel->setFont(font1);
        displayLabel->setAlignment(Qt::AlignCenter);
        num1 = new QFrame(centralwidget);
        num1->setObjectName(QString::fromUtf8("num1"));
        num1->setGeometry(QRect(20, 60, 16, 301));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(num1->sizePolicy().hasHeightForWidth());
        num1->setSizePolicy(sizePolicy1);
        num1->setFrameShadow(QFrame::Plain);
        num1->setLineWidth(3);
        num1->setMidLineWidth(3);
        num1->setFrameShape(QFrame::VLine);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(exitButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bubbleButton->setText(QCoreApplication::translate("MainWindow", "Bubble Sort", nullptr));
        insertionButton->setText(QCoreApplication::translate("MainWindow", "Insertion Sort", nullptr));
        quickButton->setText(QCoreApplication::translate("MainWindow", "Quick Sort", nullptr));
        selectionButton->setText(QCoreApplication::translate("MainWindow", "Selection Sort", nullptr));
        randomizeButton->setText(QCoreApplication::translate("MainWindow", "Randomize", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        menuLabel->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        displayLabel->setText(QCoreApplication::translate("MainWindow", "Press any sort to begin...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

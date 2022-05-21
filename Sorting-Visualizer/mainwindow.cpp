#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sorts.hpp"

int *numbers = new int[50];

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    on_randomizeButton_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* Bubble Sort button */
void MainWindow::on_bubbleButton_clicked()
{
    hide_unhide_buttons(false);
    ui->displayLabel->setText("Performing bubble sort...");
    bubble_sort(numbers);
    ui->displayLabel->setText("Bubble sort complete.");
    hide_unhide_buttons(true);
}

/* Selection Sort button */
void MainWindow::on_selectionButton_clicked()
{
    hide_unhide_buttons(false);
    ui->displayLabel->setText("Performing Selection sort...");
    selection_sort(numbers);
    ui->displayLabel->setText("Selection sort complete.");
    hide_unhide_buttons(true);
}

/* Insertion Sort button */
void MainWindow::on_insertionButton_clicked()
{
    hide_unhide_buttons(false);
    ui->displayLabel->setText("Performing Insertion sort...");
    insertion_sort(numbers);
    ui->displayLabel->setText("Insertion sort complete.");
    hide_unhide_buttons(true);
}

/* Quick Sort button */
void MainWindow::on_quickButton_clicked()
{
    ui->displayLabel->setText("Performing Quick sort...");
}

/* Randomize numbers button*/
void MainWindow::on_randomizeButton_clicked()
{
    get_random_numbers(numbers);
    for (int i=0; i<50; i++) {
        edit_bar_length(i, numbers[i]);
    }
}

/* Core function to edit each bar widget */
void MainWindow::edit_bar_length(int barNumber, int height)
{
    int xVal = barNumber * 10 + 20;
    /* Because there are 50 different bars with unique identifiers,
     * we need 50 if statements depending on the bar we want to edit.
     * Since so many 'if' statements can be hard to read and is slow, we'll use a
     * switch statement instead. Apologies for the bulkiness.
     */
    switch(barNumber)
    {
        case 0:
            ui->num1->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 1:
            ui->num2->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 2:
            ui->num3->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 3:
            ui->num4->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 4:
            ui->num5->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 5:
            ui->num6->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 6:
            ui->num7->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 7:
            ui->num8->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 8:
            ui->num9->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 9:
            ui->num10->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 10:
            ui->num11->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 11:
            ui->num12->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 12:
            ui->num13->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 13:
            ui->num14->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 14:
            ui->num15->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 15:
            ui->num16->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 16:
            ui->num17->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 17:
            ui->num18->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 18:
            ui->num19->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 19:
            ui->num20->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 20:
            ui->num21->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 21:
            ui->num22->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 22:
            ui->num23->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 23:
            ui->num24->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 24:
            ui->num25->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 25:
            ui->num26->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 26:
            ui->num27->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 27:
            ui->num28->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 28:
            ui->num29->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 29:
            ui->num30->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 30:
            ui->num31->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 31:
            ui->num32->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 32:
            ui->num33->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 33:
            ui->num34->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 34:
            ui->num35->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 35:
            ui->num36->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 36:
            ui->num37->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 37:
            ui->num38->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 38:
            ui->num39->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 39:
            ui->num40->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 40:
            ui->num41->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 41:
            ui->num42->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 42:
            ui->num43->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 43:
            ui->num44->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 44:
            ui->num45->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 45:
            ui->num46->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 46:
            ui->num47->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 47:
            ui->num48->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 48:
            ui->num49->setGeometry(xVal, find_yVal(height), 16, height);
            break;
        case 49:
            ui->num50->setGeometry(xVal, find_yVal(height), 16, height);
            break;
    };
}

/* Exit program and free allocated memory */
void MainWindow::on_exitButton_clicked()
{
    delete[]numbers;
}

void MainWindow::hide_unhide_buttons(bool hide) {
    ui->bubbleButton->setVisible(hide);
    ui->selectionButton->setVisible(hide);
    ui->insertionButton->setVisible(hide);
    ui->quickButton->setVisible(hide);
    ui->randomizeButton->setVisible(hide);
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* Bubble Sort button */
void MainWindow::on_bubbleButton_clicked()
{
    ui->displayLabel->setText("Performing bubble sort...");
}

/* Selection Sort button */
void MainWindow::on_selectionButton_clicked()
{
    ui->displayLabel->setText("Performing Selection sort...");
}

/* Insertion Sort button */
void MainWindow::on_insertionButton_clicked()
{
    ui->displayLabel->setText("Performing Insertion sort...");
}

/* Quick Sort button */
void MainWindow::on_quickButton_clicked()
{
    ui->displayLabel->setText("Performing Quick sort...");
}

/* Randomize numbers button*/
void MainWindow::on_randomizeButton_clicked()
{
    ui->num1->setGeometry(20, 10, 16, 350);
    ui->displayLabel->setText("Numbers have been randomized.");
}


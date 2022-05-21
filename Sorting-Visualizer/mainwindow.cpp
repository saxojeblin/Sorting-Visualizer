#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sorts.hpp"

int *numbers = new int[50];

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    on_randomizeButton_clicked(true);
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
    hide_unhide_buttons(false);
    ui->displayLabel->setText("Performing Quick sort...");
    quick_sort(numbers, 0, 49);
    ui->displayLabel->setText("Quick sort complete.");
    hide_unhide_buttons(true);
}

/* Randomize numbers button*/
void MainWindow::on_randomizeButton_clicked(bool startup)
{
    get_random_numbers(numbers);
    for (int i=0; i<50; i++) {
        edit_bar_length(i, numbers[i]);
    }
    if (!startup) {
        ui->displayLabel->setText("Numbers have been randomized.");
    }
}

/* Exit program and free allocated memory */
void MainWindow::on_exitButton_clicked()
{
    delete[]numbers;
}

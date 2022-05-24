#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sorts.hpp"

int *numbers = new int[50];

/* Main Window Constructor and setup*/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Initialize the array with random values
    on_randomizeButton_clicked(true);
}

/* Main Window destructor */
MainWindow::~MainWindow()
{
    delete ui;
}

/*------SORTING BUTTONS------
    All of the sorting button functions follow the same process once clicked.

    1. First, disable all other buttons, since you can technically click another sort
       while one is ongoing, which messes up the program.

    2. Then perform the sort, changing the main display label accordingly based on what is happening.

    3. Finally, reactivate all the buttons so the user can proceed with a new action

    **All of the core sorting functions which are called can be found in sorts.cpp
*/

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
    /* Mark the array as sorted once complete */
    for (int i = 0; i < 50; i++) {
        mark_sorted(i, true);
        delay(12);
    }
    ui->displayLabel->setText("Quick sort complete.");
    hide_unhide_buttons(true);
}

/* Randomize numbers button*/
void MainWindow::on_randomizeButton_clicked(bool startup)
{
    //Get a new random array of values
    get_random_numbers(numbers);
    //Sync the vertical bars with the numbers array
    for (int i=0; i<50; i++) {
        edit_bar_length(i, numbers[i]);
        //Change the bars back to black (in case they were green from a preivously completed sort)
        mark_sorted(i, false);
    }
    //We don't want to display this message on startup, only when the button is pressed
    if (!startup) {
        ui->displayLabel->setText("Numbers have been randomized.");
    }
}

/* Exit program and free allocated memory */
void MainWindow::on_exitButton_clicked()
{
    delete[]numbers;
}

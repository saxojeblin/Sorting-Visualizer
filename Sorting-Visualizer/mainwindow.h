#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts>
#include <QChartView>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    /* Button Action Functions */
    void on_bubbleButton_clicked();
    void on_selectionButton_clicked();
    void on_insertionButton_clicked();
    void on_quickButton_clicked();
    void on_randomizeButton_clicked(bool startup);
    void on_exitButton_clicked();
    /* Sorting visuals and helpers*/
    void edit_bar_length(int barNumber, int height);
    void swap_numbers(int *numbers, int index1, int index);
    int repartition(int* numbers, int low_index, int high_index);
    void insert_number(int* numbers, int position, int high_index, int value);
    void hide_unhide_buttons(bool hide);
    /* Core sorting algorithms */
    void bubble_sort(int *numbers);
    void selection_sort(int *numbers);
    void insertion_sort(int *numbers);
    void quick_sort (int *numbers, int low_index, int high_index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

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
    void on_bubbleButton_clicked();

    void on_selectionButton_clicked();

    void on_insertionButton_clicked();

    void on_quickButton_clicked();

    void on_randomizeButton_clicked();

    void on_exitButton_clicked();

    void edit_bar_length(int barNumber, int height);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

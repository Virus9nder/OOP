#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int z=1, y=rand()%100+1;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_textEdit_textChanged();

    void on_pushButton_2_clicked();

    void on_Line1_textChanged(const QString &arg1);

    void on_Line1_editingFinished();

private:

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

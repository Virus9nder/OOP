#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int x;

       //Считаем значение из первого lineEdit
       QString S1 = ui->Line1->text();
       //Переведем значение в число
       x = S1.toInt();

if (x<y){
 ui->Text1->clear();
      ui->Text1->insertPlainText("Больше");
//ui->Text1->insertPlainText(QString::number(y));
}
else if (x==y){ui->Text1->clear(); ui->Text1->insertPlainText("You Win!");}
else {ui->Text1->clear(); ui->Text1->insertPlainText("Меньше");}
}

void MainWindow::on_textEdit_textChanged()
{

}

void MainWindow::on_pushButton_2_clicked()
{   ui->Text2->clear();
    ui->Line1->clear();
    ui->Text1->clear();
    y=rand()%100+1;
    z=1;
}

void MainWindow::on_Line1_textChanged(const QString &arg1)
{

}

void MainWindow::on_Line1_editingFinished()
{ui->Text2->clear();
    ui->Text2->insertPlainText(QString::number(z));
    if(z>14){
        MainWindow::on_pushButton_2_clicked();z=15;
        ui->Text1->clear(); ui->Text1->insertPlainText("You Lose!");
        ui->Text2->insertPlainText("|><|");
        }
    else{
    z++;
    int x;

       //Считаем значение из первого lineEdit
       QString S1 = ui->Line1->text();
       //Переведем значение в число
       x = S1.toInt();

if (x<y){
 ui->Text1->clear();
      ui->Text1->insertPlainText("Больше");

}
else if (x==y){ui->Text1->clear();ui->Text2->clear(); ui->Text1->insertPlainText("You Win!");
    ui->Text2->insertPlainText(QString::number(z-1));}
else {ui->Text1->clear(); ui->Text1->insertPlainText("Меньше");}
    }}

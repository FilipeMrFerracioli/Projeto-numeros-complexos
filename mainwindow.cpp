#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , numero1(0)
    , numero2(0)
{
    ui->setupUi(this);
    ui->pushButtonLimparValores->setEnabled(false);
}

MainWindow::~MainWindow()
{
    if(numero1) delete numero1;
    if(numero2) delete numero2;
    delete ui;
}

// guardar valores
void MainWindow::on_pushButtonGuardarValores_clicked()
{
    try {
        numero1->setNumeroComplexo(ui->lineEditNumero1ParteReal->text().toInt(),
                                   ui->lineEditNumero1ParteImaginaria->text().toInt());

        numero2->setNumeroComplexo(ui->lineEditNumero2ParteReal->text().toInt(),
                                   ui->lineEditNumero2ParteImaginaria->text().toInt());

        ui->lineEditNumero1ParteReal->setEnabled(false);
        ui->lineEditNumero1ParteImaginaria->setEnabled(false);
        ui->lineEditNumero2ParteReal->setEnabled(false);
        ui->lineEditNumero2ParteImaginaria->setEnabled(false);

        ui->pushButtonGuardarValores->setEnabled(false);

        ui->pushButtonLimparValores->setEnabled(true);
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

void MainWindow::on_pushButtonLimparValores_clicked()
{
    try {
        ui->lineEditNumero1ParteReal->setEnabled(true);
        ui->lineEditNumero1ParteReal->clear();
        ui->lineEditNumero1ParteImaginaria->setEnabled(true);
        ui->lineEditNumero1ParteImaginaria->clear();
        ui->lineEditNumero2ParteReal->setEnabled(true);
        ui->lineEditNumero2ParteReal->clear();
        ui->lineEditNumero2ParteImaginaria->setEnabled(true);
        ui->lineEditNumero2ParteImaginaria->clear();

        ui->pushButtonGuardarValores->setEnabled(true);

        ui->pushButtonLimparValores->setEnabled(false);
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

// soma
void MainWindow::on_pushButtonSoma_clicked()
{
    try {
        minhaNamespace::NumeroComplexo soma = *numero1 + *numero2;

        ui->lineEditResultado->setText(soma.getNumeroComplexo());
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

// subtracao
void MainWindow::on_pushButtonSubtracao_clicked()
{

}

// multiplicacao
void MainWindow::on_pushButtonMultiplicacao_clicked()
{

}

// divisao
void MainWindow::on_pushButtonDivisao_clicked()
{

}

// igual
void MainWindow::on_pushButtonIgual_clicked()
{

}

// diferente
void MainWindow::on_pushButtonDiferente_clicked()
{

}

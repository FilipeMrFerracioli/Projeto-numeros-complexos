#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <numerocomplexo.h>
#include <QMessageBox>

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
    void on_pushButtonGuardarValores_clicked();

    void on_pushButtonSoma_clicked();

    void on_pushButtonSubtracao_clicked();

    void on_pushButtonMultiplicacao_clicked();

    void on_pushButtonDivisao_clicked();

    void on_pushButtonIgual_clicked();

    void on_pushButtonDiferente_clicked();

    void on_pushButtonLimparValores_clicked();

private:
    Ui::MainWindow *ui;
    minhaNamespace::NumeroComplexo *numero1;
    minhaNamespace::NumeroComplexo *numero2;
};
#endif // MAINWINDOW_H

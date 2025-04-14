#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "kalkulator.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


QString akt_string;//to co jest na ekranie
    double temp; //pierwsza liczba w operacji
int baza; //baza z ktorej robimy konwersje
std::string temp_kon; //temp do konwersji

    bool dziel; //znacznik jaka operacja jest wykonywana
    bool mnoz;
    bool dod;
    bool od;
    bool mod;
    void setDarkTheme();
    void setLightTheme();

private:
    Ui::MainWindow *ui;
Kalkulator kalkulator;



private slots:

    void on_dziewiec_clicked();
    void on_osiem_clicked();
    void on_siedem_clicked();
    void on_szesc_clicked();
    void on_piec_clicked();
    void on_cztery_clicked();
    void on_trzy_clicked();
    void on_dwa_clicked();
    void on_jeden_clicked();
    void on_zero_clicked();
    void on_AC_clicked();
    void on_dziel_clicked();
    void on_CE_clicked();
    void on_actionO_Autorze_triggered();
    void on_mno_clicked();
    void on_row_clicked();
    void on_kro_clicked();
    void on_dod_clicked();
    void on_od_clicked();
    void on_mod_clicked();
    void on_kon_clicked();
    void on_actionJasny_triggered();
    void on_actionCiemny_triggered();

    void on_action2_triggered();
    void on_action3_triggered();
    void on_action4_triggered();
    void on_action5_triggered();
    void on_action6_triggered();
    void on_action7_triggered();
    void on_action8_triggered();
    void on_action9_triggered();
    void on_action10_triggered();
};

#endif // MAINWINDOW_H

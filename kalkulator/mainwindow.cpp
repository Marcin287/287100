#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include "kalkulator.h"



QString akt_string="";//to co jest akutalnie na ekranie
int baza=10; //domyślna baza
double temp=0; //pierwsza liczba w operacji
std::string temp_kon;

bool dziel=false; //znacznik jaka operacja jest wykonywana
bool mnoz=false;
bool dod=false;
bool od=false;
bool mod=false;
bool kon=false;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
ui->wys->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_dziewiec_clicked()
{
    //maksymalna długosc wpisywania=16
    if (akt_string.length() < 16) {


    akt_string+='9';
    ui->wys->setText(akt_string);

    kalkulator.set(akt_string.toDouble());
    }

}


void MainWindow::on_osiem_clicked()
{
    if (akt_string.length() < 16) {

    akt_string+='8';
    ui->wys->setText(akt_string);
 kalkulator.set(akt_string.toDouble());
    }
}


void MainWindow::on_siedem_clicked()
{

    if (akt_string.length() < 16) {
    akt_string+='7';
    ui->wys->setText(akt_string);

 kalkulator.set(akt_string.toDouble());
    }
}


void MainWindow::on_szesc_clicked()
{
    if (akt_string.length() < 16) {
    akt_string+='6';
    ui->wys->setText(akt_string);

 kalkulator.set(akt_string.toDouble());
    }

}


void MainWindow::on_piec_clicked()
{
    if (akt_string.length() < 16) {
    akt_string+='5';
    ui->wys->setText(akt_string);
 kalkulator.set(akt_string.toDouble());
    }
}


void MainWindow::on_cztery_clicked()
{
    if (akt_string.length() < 16) {
    akt_string+='4';
    ui->wys->setText(akt_string);
 kalkulator.set(akt_string.toDouble());
    }
}


void MainWindow::on_trzy_clicked()
{
    if (akt_string.length() < 16) {
    akt_string+='3';
    ui->wys->setText(akt_string);
 kalkulator.set(akt_string.toDouble());
    }
}


void MainWindow::on_dwa_clicked()
{
    if (akt_string.length() < 16) {
    akt_string+='2';
    ui->wys->setText(akt_string);
 kalkulator.set(akt_string.toDouble());
    }
}


void MainWindow::on_jeden_clicked()
{
    if (akt_string.length() < 16) {
    akt_string+='1';

    ui->wys->setText(akt_string);

 kalkulator.set(akt_string.toDouble());
    }
}

void MainWindow::on_zero_clicked()
{

    if (akt_string.length() < 16 ) {
    akt_string+='0';
    ui->wys->setText(akt_string);
 kalkulator.set(akt_string.toDouble());
    }
}


void MainWindow::on_AC_clicked()
{

    ui->wys->setText(QString::number(0));
    akt_string="";
    kalkulator.set(0);

    dziel=false;
     mnoz=false;
     dod=false;
     od=false;
     mod=false;
     kon=false;
}



void MainWindow::on_CE_clicked()
{

    if(!akt_string.isEmpty()){
        akt_string.chop(1);
        ui->wys->setText(akt_string);
        kalkulator.set(akt_string.toDouble());


    }if(akt_string.isEmpty() or akt_string=="-" or akt_string=="."){
            ui->wys->setText(QString::number(0));
        kalkulator.set(0);
    }

}

void MainWindow::on_kro_clicked()
{
    if (!akt_string.contains('.')){
    akt_string+='.';
    ui->wys->setText(akt_string);
    kalkulator.set(akt_string.toDouble());
    }
}


void MainWindow::on_dziel_clicked()
{
    if(mod==true or od==true or dod==true or mnoz==true or dziel==true or kon==true){
        dziel=false;
        return;
    }
    temp=kalkulator.get();
    ui->wys->setText(QString::number(0));

    akt_string="";
    dziel=true;

}
void MainWindow::on_mno_clicked()
{


    if(mod==true or od==true or dod==true or mnoz==true or dziel==true or kon==true){
        mnoz=false;
            return;
    }
     temp=kalkulator.get();
     ui->wys->setText(QString::number(0));
 akt_string="";

    mnoz=true;

}

void MainWindow::on_dod_clicked()
{
    if(mod==true or od==true or dod==true or mnoz==true or dziel==true or kon==true){
        dod=false;
        return;
    }



    ui->wys->setText(QString::number(0));
temp=kalkulator.get();
    akt_string="";
    dod=true;
}


void MainWindow::on_od_clicked()
{




    //to robi ze mozna wpisywac ujemne liczby
    if (akt_string.isEmpty()) {
        akt_string = "-";
        ui->wys->setText(akt_string);
        kalkulator.set(-1);//wpisanie samego minusa traktuj jako -1
        return;
    }

    //to robi ze nie stanie sie nic zlego po kliknieciu dwa razy operacji
    if(mod==true or od==true or dod==true or mnoz==true or dziel==true or kon==true){
        //trzeba zmienic flage na false bo inaczej wpisujesz liczbe klikasz operacje i nic sie nie dzieje
        od=false;
        return;
    }

    ui->wys->setText(QString::number(0));

 temp=kalkulator.get();

    akt_string="";
    od=true;
}

void MainWindow::on_mod_clicked()
{
    if(mod==true or od==true or dod==true or mnoz==true or dziel==true or kon==true){
        mod=false;
        return;
    }

    ui->wys->setText(QString::number(0));
    temp=kalkulator.get();
    akt_string="";
    mod=true;
}

void MainWindow::on_kon_clicked()
{

    if(mod==true or od==true or dod==true or mnoz==true or dziel==true or kon==true){
        kon=false;
        return;
    }

    double a=akt_string.toDouble();

    int kon_we= static_cast<int>(a);
    if(kon_we<0){
        kon_we=kon_we*(-1);
    }
    temp_kon=akt_string.toStdString();
    ui->wys->setText(QString::number(0));
    temp=kon_we;
    akt_string="";
    kon=true;

}



void MainWindow::on_actionO_Autorze_triggered()
{
    QMessageBox::about(this, "O Autorze",
                       "Aplikacja Kalkulator\n"
                       "Numer indeksu:287100\n"
                       "Autor: Marcin Dąbkowski\n"
                       "Rok: 2025");
}





void MainWindow::on_action2_triggered()
{
    baza=2;
}


void MainWindow::on_action3_triggered()
{
    baza=3;
}


void MainWindow::on_action4_triggered()
{
    baza=4;
}


void MainWindow::on_action5_triggered()
{
    baza=5;
}


void MainWindow::on_action6_triggered()
{
    baza=6;
}


void MainWindow::on_action7_triggered()
{
    baza=7;
}


void MainWindow::on_action8_triggered()
{
    baza=8;
}


void MainWindow::on_action9_triggered()
{
    baza=9;
}


void MainWindow::on_action10_triggered()
{
    baza=10;
}






void MainWindow::on_row_clicked()
{

    if(dziel==true){
        //obsluga dzielenia przez zero
        if(kalkulator.get()==0){
            QMessageBox::about(this,"Błąd","nie mozna dzielic przez 0");
            dziel=false;
//to ustawia aktualną liczbe na pierwsza wpiysaną w operacji
            akt_string=QString::number(temp);
            kalkulator.set(akt_string.toDouble());
            ui->wys->setText(akt_string);
            return;
        }
        double wynik=kalkulator.dziel(temp,kalkulator.get());

        QString tekst = QString::number(wynik, 'f', 5);

        while (tekst.endsWith('0'))
            tekst.chop(1);

        if (tekst.endsWith('.'))
            tekst.chop(1);

        if (tekst.length() > 16)
            tekst = tekst.left(16);

        ui->wys->setText(tekst);

        akt_string=tekst;

        kalkulator.set(akt_string.toDouble());

        dziel=false;

    }else if(mnoz==true){

      double wynik=kalkulator.mnoz(temp,kalkulator.get());

      QString tekst = QString::number(wynik, 'f', 5);

      while (tekst.endsWith('0'))
          tekst.chop(1);

      if (tekst.endsWith('.'))
          tekst.chop(1);

      if (tekst.length() > 16)
          tekst = tekst.left(16);

        ui->wys->setText(tekst);

        akt_string=tekst;

         kalkulator.set(akt_string.toDouble());

        mnoz=false;

    }else if(dod==true){

        double wynik=kalkulator.dodawanie(temp,kalkulator.get());

        QString tekst = QString::number(wynik, 'f', 5);

        while (tekst.endsWith('0'))
            tekst.chop(1);

        if (tekst.endsWith('.'))
            tekst.chop(1);

        if (tekst.length() > 16)
            tekst = tekst.left(16);

        ui->wys->setText(tekst);

         akt_string=tekst;

        kalkulator.set(akt_string.toDouble());

        dod=false;

    }else if(od==true){
        double wynik=kalkulator.odejmowanie(temp,kalkulator.get());

        QString tekst = QString::number(wynik, 'f', 5);

        while (tekst.endsWith('0'))
            tekst.chop(1);

        if (tekst.endsWith('.'))
            tekst.chop(1);

        if (tekst.length() > 16)
            tekst = tekst.left(16);

        ui->wys->setText(tekst);

        akt_string=tekst;

        kalkulator.set(akt_string.toDouble());

        od=false;
    }
    else if(mod==true){
        if(kalkulator.get()==0){
            QMessageBox::about(this,"Błąd","nie mozna dzielic przez 0");
            mod=false;
            //to ustawia aktualną liczbe na pierwsza wpiysaną w operacji
            akt_string=QString::number(temp);
            kalkulator.set(akt_string.toDouble());
            ui->wys->setText(akt_string);
            return;
        }


        ui->wys->setText(QString::number(kalkulator.mod(temp,kalkulator.get())));



        akt_string=QString::number(kalkulator.mod(temp,kalkulator.get()));

        kalkulator.set(akt_string.toDouble());
        mod=false;
    }else if(kon==true){



        if(kalkulator.get()>10 or kalkulator.get()<2 ){
            QMessageBox::about(this,"Błąd","zła baza");
            kon=false;
            //to ustawia aktualną liczbe na pierwsza wpiysaną w operacji
            akt_string=QString::number(temp);
            kalkulator.set(akt_string.toDouble());
            ui->wys->setText(akt_string);
            return;
        }

        akt_string=QString::fromStdString(kalkulator.menu_kon(temp_kon, baza , kalkulator.get()));

        ui->wys->setText(akt_string);

        kalkulator.set(akt_string.toDouble());

        kon=false;


    }



    //bez tego po np. 5*0 i wpisaniu kolejnej liczby wysiwetla sie np. 05
    if(akt_string=="0"){
        akt_string="";
        kalkulator.set(akt_string.toDouble());
    }
}














void MainWindow::on_actionJasny_triggered()
{
    setLightTheme();
}

void MainWindow::on_actionCiemny_triggered()
{
    setDarkTheme();
}

void MainWindow::setDarkTheme() {
    ui->od->setStyleSheet(//powiekszenie minusa
        "QPushButton {"
        "  background-color: #8ab4f8;"
        "  color: #202124;"
        "  border: none;"
        "  border-radius: 16px;"
        "  font-size: 26px;"
        "  padding: 10px;"
        "}"
        "QPushButton:pressed {"
        "  background-color: #aecbfa;"
        "}"
        );

    this->setStyleSheet("background-color: #202124;");

    ui->wys->setStyleSheet(
        "QLineEdit {"
        "  background-color: #303134;"
        "  color: #ffffff;"
        "  border: none;"
        "  border-radius: 8px;"
        "  font-size: 18px;"
        "  padding: 10px;"
        "}"
        );

    QList<QPushButton*> liczby = {
        ui->zero, ui->jeden, ui->dwa, ui->trzy,
        ui->cztery, ui->piec, ui->szesc, ui->siedem,
        ui->osiem, ui->dziewiec, ui->kro
    };

    QString styl =
        "QPushButton {"
        "  background-color: #3c4043;"
        "  color: #ffffff;"
        "  border: none;"
        "  border-radius: 16px;"
        "  font-size: 16px;"
        "  padding: 10px;"
        "}"
        "QPushButton:pressed {"
        "  background-color: #5f6368;"
        "}";

    for (QPushButton* p : liczby) {
        p->setStyleSheet(styl);
    }

    QList<QPushButton*> operacje = {
        ui->dod, ui->mno, ui->dziel,
        ui->AC, ui->CE, ui->row, ui->mod,
        ui->kon
    };

    QString styl_o =
        "QPushButton {"
        "  background-color: #8ab4f8;"
        "  color: #202124;"
        "  border: none;"
        "  border-radius: 16px;"
        "  font-size: 16px;"
        "  padding: 10px;"
        "}"
        "QPushButton:pressed {"
        "  background-color: #aecbfa;"
        "}";

    for (QPushButton* o : operacje) {
        o->setStyleSheet(styl_o);
    }
}


void MainWindow::setLightTheme() {

    ui->od->setStyleSheet(
        "QPushButton {"
        "  background-color: #4169E1;"
        "  color: #202124;"
        "  border: none;"
        "  border-radius: 8px;"
        "  font-size: 26px;"
        "  padding: 10px;"
        "}"
        "QPushButton:pressed {"
        "  background-color: #dadce0;"
        "}"
        );


   this->setStyleSheet("background-color: #808080;");//TŁO USTAWIA

    ui->wys->setStyleSheet(        "QLineEdit {"//wyswietlacz ustawia
                           "  background-color: #D3D3D3;"
                           "  color: #202124;"
                           "  border: none;"
                           "  border-radius: 8px;"
                           "  font-size: 18px;"
                           "  padding: 10px;"
                           "}"
                           );

    QList<QPushButton*> liczby = {
        ui->zero, ui->jeden, ui->dwa, ui->trzy,
        ui->cztery, ui->piec, ui->szesc, ui->siedem,
        ui->osiem, ui->dziewiec, ui->kro};


    QString styl =
        "QPushButton {"
        "  background-color: #D3D3D3;"
        "  color: #202124;"
        "  border: none;"
        "  border-radius: 8px;"
        "  font-size: 16px;"
        "  padding: 10px;"
        "}"
        "QPushButton:pressed {"
        "  background-color: #dadce0;"
        "}";

    for (QPushButton* p : liczby) {
        p->setStyleSheet(styl);
    }


    QList<QPushButton*> operacje = {
                                   ui->dod, ui->mno, ui->dziel,
                                   ui->AC, ui->CE, ui->row, ui->mod,
                                   ui->kon};


    QString styl_o =
        "QPushButton {"
        "  background-color: #4169E1;"
        "  color: #202124;"
        "  border: none;"
        "  border-radius: 8px;"
        "  font-size: 16px;"
        "  padding: 10px;"
        "}"
        "QPushButton:pressed {"
        "  background-color: #dadce0;"
        "}";

    for (QPushButton* o : operacje) {
        o->setStyleSheet(styl_o);
    }


}



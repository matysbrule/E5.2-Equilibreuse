#include "equilibreuse.h"
#include "ui_equilibreuse.h"



Equilibreuse::Equilibreuse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Equilibreuse)
{
    ui->setupUi(this);
       leCapot = new Capot(laCarte,0,this);
       leMoteur = new Moteur(laCarte,4);
   }
bool etatCapot;
int numDio;

Equilibreuse::~Equilibreuse()
{
    delete ui;
}


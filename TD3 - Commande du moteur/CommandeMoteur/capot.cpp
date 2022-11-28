#include "capot.h"
#define TEMPO_CAPOT 500

Capot::Capot(MccUldaq &_laCarte,const int _numDio,QObject *parent):
    QObject(parent),
    numDio(_numDio),
    laCarte(_laCarte)
{
    laCarte.ulDConfigBit(numDio,DD_INPUT);
    laCarte.ulDBitIn(numDio,etatCapot);

    connect(&timerCapot,&QTimer::timeout,this,&Capot::onTimerCapot_timeout);
    timerCapot.start(TEMPO_CAPOT);
}

void Capot::onTimerCapot_timeout()
{

}

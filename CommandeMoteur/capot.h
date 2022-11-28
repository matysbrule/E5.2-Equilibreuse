#ifndef CAPOT_H
#define CAPOT_H


#include "mcculdaq.h"
#include <QObject>
#include <QTimer>

class Capot : public QObject
{
public:
    Capot(MccUldaq &_laCarte,const int _numDio,QObject *parent);
    void onTimerCapot_timeout();
    bool getEtatCapot() const;
private:
    bool etatCapot;
    int numDio;
    QTimer timerCapot;
    MccUldaq &laCarte;
};

#endif // CAPOT_H

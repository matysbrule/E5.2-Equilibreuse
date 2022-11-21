#ifndef WIDGETUSB202_H
#define WIDGETUSB202_H

#include <QWidget>
#include "mcculdaq.h"
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class WidgetUSB202; }
QT_END_NAMESPACE



class WidgetUSB202 : public QWidget
{
    Q_OBJECT
    enum LEDS{
        LED1 =4,
        LED2,
        LED3,
        LED4
    };
    enum BPS{
        BP1 = 0,
        BP2,
        BP3,
        BP4
    };

public:
    WidgetUSB202(QWidget *parent = nullptr);
    ~WidgetUSB202();


private slots:
void on_checkbox_LED1_stateChanged(int arg1);
void on_checkbox_LED2_stateChanged(int arg1);
void on_checkbox_LED3_stateChanged(int arg1);
void on_checkbox_LED4_stateChanged(int arg1);
void onTimerBp_timeOut();


private:
    Ui::WidgetUSB202 *ui;
    MccUldaq laCarte;
    QTimer timerBP;
};
#endif // WIDGETUSB202_H

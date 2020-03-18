#ifndef TEMPMANAGER_H
#define TEMPMANAGER_H


class TempManager
{
public:
    TempManager(Ui::Form ui);
public slots:
    void UpdateTemperature(float value);
};

#endif // TEMPMANAGER_H

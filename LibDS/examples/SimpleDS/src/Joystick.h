#ifndef JOYSTICK_H
#define JOYSTICK_H

#include <QObject>

class Joystick : public QObject
{
    Q_OBJECT
public:
    explicit Joystick(QObject *parent = nullptr);
    static void updateAxes (float left, float right);

signals:

public slots:
};

#endif // JOYSTICK_H

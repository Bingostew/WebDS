#ifndef REMOTEJOYSTICK_H
#define REMOTEJOYSTICK_H

#include <QKeyEvent>

#include "Joystick.h"

class RemoteJoystick : public Joystick//QObject
{
    Q_OBJECT

public:
    explicit RemoteJoystick();
    static void updateAxes (float left, float right);

private:
    // static bool jsConfigured;

};

#endif // REMOTEJOYSTICK_H

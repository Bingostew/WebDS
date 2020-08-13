#ifndef SOCKETHANDLER_H
#define SOCKETHANDLER_H

#include "Socket.h"

class SocketHandler
{
public:
    SocketHandler();
    static SocketHandler* getInstance();
    void resetSocket();
    void openSocket(QString addy);

private:
    Socket* socket;
};

#endif // SOCKETHANDLER_H

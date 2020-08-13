#include "SocketHandler.h"

SocketHandler::SocketHandler() {}

SocketHandler* SocketHandler::getInstance()
{
    static SocketHandler instance;
    return &instnce;
}

void SocketHandler::openSocket(QString addy)
{
    socket = new Socket(QUrl(QStringLiteral(addy)));
}

void SocketHandler::resetSocket()
{
    if(socket != null)
    {
        socket = new Socket(QUrl(QStringLiteral("ws://localhost:8080/ds")));
    }
}

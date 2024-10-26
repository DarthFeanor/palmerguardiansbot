#include "groupmeinterface.h"

GroupMeInterface::GroupMeInterface(QString token, QObject *parent)
    : QObject{parent}
{
    m_access_token = token;
}

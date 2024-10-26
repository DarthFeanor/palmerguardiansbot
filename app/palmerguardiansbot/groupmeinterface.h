#ifndef GROUPMEINTERFACE_H
#define GROUPMEINTERFACE_H

#include <QObject>

class GroupMeInterface : public QObject
{
    Q_OBJECT
public:
    explicit GroupMeInterface(QString token, QObject *parent = nullptr);

signals:

private:

    QString m_access_token = "";
};

#endif // GROUPMEINTERFACE_H

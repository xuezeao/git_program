#include "httpgp.h"

HttpGP::HttpGP(QObject *parent) :
    QObject(parent)
{
    user = new User;
    http_info = new Http_info;


}

#ifndef CLIENT_TCP_GLOBAL_H
#define CLIENT_TCP_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CLIENT_TCP_LIBRARY)
#  define CLIENT_TCPSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CLIENT_TCPSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CLIENT_TCP_GLOBAL_H

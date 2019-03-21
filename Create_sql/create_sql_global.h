#ifndef CREATE_SQL_GLOBAL_H
#define CREATE_SQL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CREATE_SQL_LIBRARY)
#  define CREATE_SQLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CREATE_SQLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CREATE_SQL_GLOBAL_H

/*
 * (c)2017, Jerry Wu
 * This is a input method for Qt5.9
*/
#ifndef PLUGIN_H
#define PLUGIN_H

#include <qpa/qplatforminputcontextplugin_p.h>
#include "platforminputcontext.h"
#include <QStringList>

class myInputMethodPlugin : public QPlatformInputContextPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QPlatformInputContextFactoryInterface_iid FILE "myinputmethod.json")

public:
    QPlatformInputContext *create(const QString&, const QStringList&);
};

#endif // PLUGIN_H

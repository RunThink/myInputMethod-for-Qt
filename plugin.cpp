/*
 * (c)2017, Jerry Wu
 * This is a input method for Qt5.9
*/
#include "plugin.h"
#include <QDebug>

using namespace myInputMethod;

static const char pluginName[] = "myinputmethod";
static const char inputMethodEnvVarName[] = "QT_IM_MODULE";

static QPointer<PlatformInputContext> platformInputContext;

QPlatformInputContext *myInputMethodPlugin::create(const QString &system, const QStringList &paramList)
{
    Q_UNUSED(paramList);
    //判断环境变量"QT_IM_MODULE设置是否是myinputmethod,不是的话直接退出"
    if(!qEnvironmentVariableIsSet(inputMethodEnvVarName)||qgetenv(inputMethodEnvVarName)!=pluginName){
        return Q_NULLPTR;
    }
    //如果是myinputmethod,注册platforminputcontext
    if(system.compare(system,QLatin1String(pluginName),Qt::CaseInsensitive)==0){
        platformInputContext=new PlatformInputContext();
    }

    return platformInputContext;
}

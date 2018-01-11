/*
 * (c)2017, Jerry Wu
 * This is a input method for Qt5.9
 * Test this input method on the Qt5.4.1, it is work well.
*/

#ifndef PLATFORMINPUTCONTEXT_H
#define PLATFORMINPUTCONTEXT_H

#include <qpa/qplatforminputcontext.h>
#include <QObject>

//#include "inputdialog.h"
#include "enkeyboard.h"

namespace myInputMethod {

class PlatformInputContext : public QPlatformInputContext
{
    Q_OBJECT
public:
    explicit PlatformInputContext();
    ~PlatformInputContext();

    virtual bool isValid() const Q_DECL_OVERRIDE;

    void setFocusObject(QObject *object) Q_DECL_OVERRIDE;

    void showInputPanel() Q_DECL_OVERRIDE;
    void hideInputPanel() Q_DECL_OVERRIDE;
    bool isInputPanelVisible() const Q_DECL_OVERRIDE;

private slots:
    void keyboardSpecialKeyClicked(int key);
    void keyboardKeyClicked(const QString &character);

private:
    QObject *m_focusObject;
    //myInputDialog *m_inputPanel;
    enKeyboard *m_inputPanel;
};

}

#endif

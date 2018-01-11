/*
 * (c)2017, Jerry Wu
 * This is a input method for Qt5.9
*/
#include "platforminputcontext.h"

#include <QInputMethodEvent>
#include <QWidget>
#include <QGuiApplication>
#include <QKeyEvent>

#include <QDebug>

namespace myInputMethod {

PlatformInputContext::PlatformInputContext() :
    m_inputPanel(0),
    m_focusObject(0)
{
}
PlatformInputContext::~PlatformInputContext()
{
}
bool PlatformInputContext::isValid() const
{
    return true;
}
void PlatformInputContext::setFocusObject(QObject *object)
{
    m_focusObject = object;
}
void PlatformInputContext::showInputPanel()
{
    if(!m_inputPanel){
        //m_inputPanel=new myInputDialog();
        m_inputPanel=new enKeyboard();

        connect(m_inputPanel,SIGNAL(keyClicked(QString)),SLOT(keyboardKeyClicked(QString)));
        connect(m_inputPanel,SIGNAL(specialKeyClicked(int)),SLOT(keyboardSpecialKeyClicked(int)));
    }
    if(m_inputPanel){
        m_inputPanel->show();
    }
}
void PlatformInputContext::hideInputPanel()
{
    if(m_inputPanel){
        m_inputPanel->hide();
    }
}
bool PlatformInputContext::isInputPanelVisible() const
{
    return m_inputPanel ? m_inputPanel->isVisible() : false;
}
void PlatformInputContext::keyboardSpecialKeyClicked(int key)
{
    if(!m_focusObject){
        return;
    }
    if (key == Qt::Key_Enter) {
        QKeyEvent *pressEvent = new QKeyEvent(QEvent::KeyPress, Qt::Key_Enter, Qt::NoModifier);
        QGuiApplication::postEvent(m_focusObject, pressEvent);

        QKeyEvent *releaseEvent = new QKeyEvent(QEvent::KeyRelease, Qt::Key_Enter, Qt::NoModifier);
        QGuiApplication::postEvent(m_focusObject, releaseEvent);
    } else if (key == Qt::Key_Backspace) {
        QKeyEvent *pressEvent = new QKeyEvent(QEvent::KeyPress, Qt::Key_Backspace, Qt::NoModifier);
        QGuiApplication::postEvent(m_focusObject, pressEvent);

        QKeyEvent *releaseEvent = new QKeyEvent(QEvent::KeyRelease, Qt::Key_Backspace, Qt::NoModifier);
        QGuiApplication::postEvent(m_focusObject, releaseEvent);
    } else if (key == Qt::Key_Delete) {
        QKeyEvent *pressEvent = new QKeyEvent(QEvent::KeyPress, Qt::Key_Delete, Qt::NoModifier);
        QGuiApplication::postEvent(m_focusObject, pressEvent);

        QKeyEvent *releaseEvent = new QKeyEvent(QEvent::KeyRelease, Qt::Key_Delete, Qt::NoModifier);
        QGuiApplication::postEvent(m_focusObject, releaseEvent);
    }
}
void PlatformInputContext::keyboardKeyClicked(const QString &characters)
{
    if(!m_focusObject){
        return;
    }
    QInputMethodEvent event;
    event.setCommitString(characters);

    QGuiApplication::sendEvent(m_focusObject, &event);
}

}

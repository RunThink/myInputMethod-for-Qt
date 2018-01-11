# myInputMethod-for-Qt
this is a platform input method with virtual keyboard for Qt5.4 to Qt5.9, on embed linux

most of time, i am develop app on embed linux platform, but i did not found a simple input method with virtual keyboard on internet, so i am develop this input method myself.
it is a platform input method with virtual keyboard, it is a pure widget input method, it is not request qml, just compile it to a libmyinputmethod.so, and copy this so file to QT_INSTALL_DIR/plugins/platforminputcontexts, and add "export QT_IM_MODULE=myinputmethod" to linux environment variable.

2018-1-11, ver 0.0.1, this is a first version, i am test it on my AM3358 board with qt5.9.3 and linux 4.4.41, it is work well.
                      i am test it on my PC with qt5.4.1 and windows 7 64bits, it is work well.
                      English only.

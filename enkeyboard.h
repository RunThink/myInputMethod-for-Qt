#ifndef ENKEYBOARD_H
#define ENKEYBOARD_H

#include <QDialog>

namespace Ui {
class enKeyboard;
}

namespace myInputMethod {

class enKeyboard : public QDialog
{
    Q_OBJECT

public:
    explicit enKeyboard(QWidget *parent = 0);
    ~enKeyboard();

signals:
    void specialKeyClicked(int key);
    void keyClicked(const QString &text);

private slots:
    void keyWave(void);
    void key1(void);
    void key2(void);
    void key3(void);
    void key4(void);
    void key5(void);
    void key6(void);
    void key7(void);
    void key8(void);
    void key9(void);
    void key0(void);
    void keyDec(void);
    void keyAdd(void);

    void keyQ(void);
    void keyW(void);
    void keyE(void);
    void keyR(void);
    void keyT(void);
    void keyY(void);
    void keyU(void);
    void keyI(void);
    void keyO(void);
    void keyP(void);
    void keyBracket1(void);
    void keyBracket2(void);
    void keySlash(void);

    void keyA(void);
    void keyS(void);
    void keyD(void);
    void keyF(void);
    void keyG(void);
    void keyH(void);
    void keyJ(void);
    void keyK(void);
    void keyL(void);
    void keySemi(void);
    void keyQuot(void);

    void keyZ(void);
    void keyX(void);
    void keyC(void);
    void keyV(void);
    void keyB(void);
    void keyN(void);
    void keyM(void);
    void keyComma(void);
    void keyFStop(void);
    void keyFDiv(void);

    void keySpace(void);
    void keyBackspace(void);
    void keyDelete(void);

    void keyEnter(void);

    void keyShift(void);

private:
    Ui::enKeyboard *ui;
    bool bShift;

    void dispShift(void);
};

}
#endif // ENKEYBOARD_H

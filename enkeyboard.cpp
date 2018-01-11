#include "enkeyboard.h"
#include "ui_enkeyboard.h"

namespace myInputMethod {

enKeyboard::enKeyboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::enKeyboard)
{
    setWindowFlags(Qt::WindowDoesNotAcceptFocus | Qt::Tool | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint | Qt::BypassWindowManagerHint);
    ui->setupUi(this);

    this->move(0,568);

    connect(ui->pbWave,SIGNAL(clicked()),this,SLOT(keyWave()));
    connect(ui->pb1,SIGNAL(clicked()),this,SLOT(key1()));
    connect(ui->pb2,SIGNAL(clicked()),this,SLOT(key2()));
    connect(ui->pb3,SIGNAL(clicked()),this,SLOT(key3()));
    connect(ui->pb4,SIGNAL(clicked()),this,SLOT(key4()));
    connect(ui->pb5,SIGNAL(clicked()),this,SLOT(key5()));
    connect(ui->pb6,SIGNAL(clicked()),this,SLOT(key6()));
    connect(ui->pb7,SIGNAL(clicked()),this,SLOT(key7()));
    connect(ui->pb8,SIGNAL(clicked()),this,SLOT(key8()));
    connect(ui->pb9,SIGNAL(clicked()),this,SLOT(key9()));
    connect(ui->pb0,SIGNAL(clicked()),this,SLOT(key0()));
    connect(ui->pbDec,SIGNAL(clicked()),this,SLOT(keyDec()));
    connect(ui->pbAdd,SIGNAL(clicked()),this,SLOT(keyAdd()));

    connect(ui->pbQ,SIGNAL(clicked()),this,SLOT(keyQ()));
    connect(ui->pbW,SIGNAL(clicked()),this,SLOT(keyW()));
    connect(ui->pbE,SIGNAL(clicked()),this,SLOT(keyE()));
    connect(ui->pbR,SIGNAL(clicked()),this,SLOT(keyR()));
    connect(ui->pbT,SIGNAL(clicked()),this,SLOT(keyT()));
    connect(ui->pbY,SIGNAL(clicked()),this,SLOT(keyY()));
    connect(ui->pbU,SIGNAL(clicked()),this,SLOT(keyU()));
    connect(ui->pbI,SIGNAL(clicked()),this,SLOT(keyI()));
    connect(ui->pbO,SIGNAL(clicked()),this,SLOT(keyO()));
    connect(ui->pbP,SIGNAL(clicked()),this,SLOT(keyP()));
    connect(ui->pbBracket1,SIGNAL(clicked()),this,SLOT(keyBracket1()));
    connect(ui->pbBracket2,SIGNAL(clicked()),this,SLOT(keyBracket2()));
    connect(ui->pbSlash,SIGNAL(clicked()),this,SLOT(keySlash()));

    connect(ui->pbA,SIGNAL(clicked()),this,SLOT(keyA()));
    connect(ui->pbS,SIGNAL(clicked()),this,SLOT(keyS()));
    connect(ui->pbD,SIGNAL(clicked()),this,SLOT(keyD()));
    connect(ui->pbF,SIGNAL(clicked()),this,SLOT(keyF()));
    connect(ui->pbG,SIGNAL(clicked()),this,SLOT(keyG()));
    connect(ui->pbH,SIGNAL(clicked()),this,SLOT(keyH()));
    connect(ui->pbJ,SIGNAL(clicked()),this,SLOT(keyJ()));
    connect(ui->pbK,SIGNAL(clicked()),this,SLOT(keyK()));
    connect(ui->pbL,SIGNAL(clicked()),this,SLOT(keyL()));
    connect(ui->pbSemi,SIGNAL(clicked()),this,SLOT(keySemi()));
    connect(ui->pbQuot,SIGNAL(clicked()),this,SLOT(keyQuot()));

    connect(ui->pbZ,SIGNAL(clicked()),this,SLOT(keyZ()));
    connect(ui->pbX,SIGNAL(clicked()),this,SLOT(keyX()));
    connect(ui->pbC,SIGNAL(clicked()),this,SLOT(keyC()));
    connect(ui->pbV,SIGNAL(clicked()),this,SLOT(keyV()));
    connect(ui->pbB,SIGNAL(clicked()),this,SLOT(keyB()));
    connect(ui->pbN,SIGNAL(clicked()),this,SLOT(keyN()));
    connect(ui->pbM,SIGNAL(clicked()),this,SLOT(keyM()));
    connect(ui->pbComma,SIGNAL(clicked()),this,SLOT(keyComma()));
    connect(ui->pbFStop,SIGNAL(clicked()),this,SLOT(keyFStop()));
    connect(ui->pbFDiv,SIGNAL(clicked()),this,SLOT(keyFDiv()));

    connect(ui->pbSpace,SIGNAL(clicked()),this,SLOT(keySpace()));

    connect(ui->pbDelete,SIGNAL(clicked()),this,SLOT(keyDelete()));
    connect(ui->pbBackspace,SIGNAL(clicked()),this,SLOT(keyBackspace()));

    connect(ui->pbEnter,SIGNAL(clicked()),this,SLOT(keyEnter()));

    connect(ui->pbShift,SIGNAL(clicked()),this,SLOT(keyShift()));

    bShift=false;
    dispShift();
}
enKeyboard::~enKeyboard()
{
    delete ui;
}

void enKeyboard::keyWave(void)
{
    if(bShift==true){
        emit keyClicked(QString("~"));
    } else {
        emit keyClicked(QString("`"));
    }
}
void enKeyboard::key1(void)
{
    if(bShift==true){
        emit keyClicked(QString("!"));
    } else {
        emit keyClicked(QString("1"));
    }
}
void enKeyboard::key2(void)
{
    if(bShift==true){
        emit keyClicked(QString("@"));
    } else {
        emit keyClicked(QString("2"));
    }
}
void enKeyboard::key3(void)
{
    if(bShift==true){
        emit keyClicked(QString("#"));
    } else {
        emit keyClicked(QString("3"));
    }
}
void enKeyboard::key4(void)
{
    if(bShift==true){
        emit keyClicked(QString("$"));
    } else {
        emit keyClicked(QString("4"));
    }
}
void enKeyboard::key5(void)
{
    if(bShift==true){
        emit keyClicked(QString("%"));
    } else {
        emit keyClicked(QString("5"));
    }
}
void enKeyboard::key6(void)
{
    if(bShift==true){
        emit keyClicked(QString("^"));
    } else {
        emit keyClicked(QString("6"));
    }
}
void enKeyboard::key7(void)
{
    if(bShift==true){
        emit keyClicked(QString("&"));
    } else {
        emit keyClicked(QString("7"));
    }
}
void enKeyboard::key8(void)
{
    if(bShift==true){
        emit keyClicked(QString("*"));
    } else {
        emit keyClicked(QString("8"));
    }
}
void enKeyboard::key9(void)
{
    if(bShift==true){
        emit keyClicked(QString("("));
    } else {
        emit keyClicked(QString("9"));
    }
}
void enKeyboard::key0(void)
{
    if(bShift==true){
        emit keyClicked(QString(")"));
    } else {
        emit keyClicked(QString("0"));
    }
}
void enKeyboard::keyDec(void)
{
    if(bShift==true){
        emit keyClicked(QString("_"));
    } else {
        emit keyClicked(QString("-"));
    }
}
void enKeyboard::keyAdd(void)
{
    if(bShift==true){
        emit keyClicked(QString("+"));
    } else {
        emit keyClicked(QString("="));
    }
}

void enKeyboard::keyQ(void)
{
    if(bShift==true){
        emit keyClicked(QString("Q"));
    } else {
        emit keyClicked(QString("q"));
    }
}
void enKeyboard::keyW(void)
{
    if(bShift==true){
        emit keyClicked(QString("W"));
    } else {
        emit keyClicked(QString("w"));
    }
}
void enKeyboard::keyE(void)
{
    if(bShift==true){
        emit keyClicked(QString("E"));
    } else {
        emit keyClicked(QString("e"));
    }
}
void enKeyboard::keyR(void)
{
    if(bShift==true){
        emit keyClicked(QString("R"));
    } else {
        emit keyClicked(QString("r"));
    }
}
void enKeyboard::keyT(void)
{
    if(bShift==true){
        emit keyClicked(QString("T"));
    } else {
        emit keyClicked(QString("t"));
    }
}
void enKeyboard::keyY(void)
{
    if(bShift==true){
        emit keyClicked(QString("Y"));
    } else {
        emit keyClicked(QString("y"));
    }
}
void enKeyboard::keyU(void)
{
    if(bShift==true){
        emit keyClicked(QString("U"));
    } else {
        emit keyClicked(QString("u"));
    }
}
void enKeyboard::keyI(void)
{
    if(bShift==true){
        emit keyClicked(QString("I"));
    } else {
        emit keyClicked(QString("i"));
    }
}
void enKeyboard::keyO(void)
{
    if(bShift==true){
        emit keyClicked(QString("O"));
    } else {
        emit keyClicked(QString("o"));
    }
}
void enKeyboard::keyP(void)
{
    if(bShift==true){
        emit keyClicked(QString("P"));
    } else {
        emit keyClicked(QString("p"));
    }
}
void enKeyboard::keyBracket1(void)
{
    if(bShift==true){
        emit keyClicked(QString("{"));
    } else {
        emit keyClicked(QString("["));
    }
}
void enKeyboard::keyBracket2(void)
{
    if(bShift==true){
        emit keyClicked(QString("}"));
    } else {
        emit keyClicked(QString("]"));
    }
}
void enKeyboard::keySlash(void)
{
    if(bShift==true){
        emit keyClicked(QString("|"));
    } else {
        emit keyClicked(QString("\\"));
    }
}

void enKeyboard::keyA(void)
{
    if(bShift==true){
        emit keyClicked(QString("A"));
    } else {
        emit keyClicked(QString("a"));
    }
}
void enKeyboard::keyS(void)
{
    if(bShift==true){
        emit keyClicked(QString("S"));
    } else {
        emit keyClicked(QString("s"));
    }
}
void enKeyboard::keyD(void)
{
    if(bShift==true){
        emit keyClicked(QString("D"));
    } else {
        emit keyClicked(QString("d"));
    }
}
void enKeyboard::keyF(void)
{
    if(bShift==true){
        emit keyClicked(QString("F"));
    } else {
        emit keyClicked(QString("f"));
    }
}
void enKeyboard::keyG(void)
{
    if(bShift==true){
        emit keyClicked(QString("G"));
    } else {
        emit keyClicked(QString("g"));
    }
}
void enKeyboard::keyH(void)
{
    if(bShift==true){
        emit keyClicked(QString("H"));
    } else {
        emit keyClicked(QString("h"));
    }
}
void enKeyboard::keyJ(void)
{
    if(bShift==true){
        emit keyClicked(QString("J"));
    } else {
        emit keyClicked(QString("j"));
    }
}
void enKeyboard::keyK(void)
{
    if(bShift==true){
        emit keyClicked(QString("K"));
    } else {
        emit keyClicked(QString("k"));
    }
}
void enKeyboard::keyL(void)
{
    if(bShift==true){
        emit keyClicked(QString("L"));
    } else {
        emit keyClicked(QString("l"));
    }
}
void enKeyboard::keySemi(void)
{
    if(bShift==true){
        emit keyClicked(QString(":"));
    } else {
        emit keyClicked(QString(";"));
    }
}
void enKeyboard::keyQuot(void)
{
    if(bShift==true){
        emit keyClicked(QString("\""));
    } else {
        emit keyClicked(QString("'"));
    }
}

void enKeyboard::keyZ(void)
{
    if(bShift==true){
        emit keyClicked(QString("Z"));
    } else {
        emit keyClicked(QString("z"));
    }
}
void enKeyboard::keyX(void)
{
    if(bShift==true){
        emit keyClicked(QString("X"));
    } else {
        emit keyClicked(QString("x"));
    }
}
void enKeyboard::keyC(void)
{
    if(bShift==true){
        emit keyClicked(QString("C"));
    } else {
        emit keyClicked(QString("c"));
    }
}
void enKeyboard::keyV(void)
{
    if(bShift==true){
        emit keyClicked(QString("V"));
    } else {
        emit keyClicked(QString("v"));
    }
}
void enKeyboard::keyB(void)
{
    if(bShift==true){
        emit keyClicked(QString("B"));
    } else {
        emit keyClicked(QString("b"));
    }
}
void enKeyboard::keyN(void)
{
    if(bShift==true){
        emit keyClicked(QString("N"));
    } else {
        emit keyClicked(QString("n"));
    }
}
void enKeyboard::keyM(void)
{
    if(bShift==true){
        emit keyClicked(QString("M"));
    } else {
        emit keyClicked(QString("m"));
    }
}
void enKeyboard::keyComma(void)
{
    if(bShift==true){
        emit keyClicked(QString("<"));
    } else {
        emit keyClicked(QString(","));
    }
}
void enKeyboard::keyFStop(void)
{
    if(bShift==true){
        emit keyClicked(QString(">"));
    } else {
        emit keyClicked(QString("."));
    }
}
void enKeyboard::keyFDiv(void)
{
    if(bShift==true){
        emit keyClicked(QString("?"));
    } else {
        emit keyClicked(QString("/"));
    }
}

void enKeyboard::keySpace(void)
{
    emit keyClicked(QString(" "));
}
void enKeyboard::keyBackspace(void)
{
    emit specialKeyClicked(Qt::Key_Backspace);
}
void enKeyboard::keyDelete(void)
{
    emit specialKeyClicked(Qt::Key_Delete);
}
void enKeyboard::keyEnter(void)
{
    emit specialKeyClicked(Qt::Key_Enter);
}
void enKeyboard::keyShift(void)
{
    if(bShift==true){
        bShift=false;
    } else {
        bShift=true;
    }
    dispShift();
}

void enKeyboard::dispShift(void)
{
    if(bShift==true){
        ui->pbWave->setText("~");
        ui->pb1->setText("!");
        ui->pb2->setText("@");
        ui->pb3->setText("#");
        ui->pb4->setText("$");
        ui->pb5->setText("%");
        ui->pb6->setText("^");
        ui->pb7->setText("&&");
        ui->pb8->setText("*");
        ui->pb9->setText("(");
        ui->pb0->setText(")");
        ui->pbDec->setText("_");
        ui->pbAdd->setText("+");

        ui->pbQ->setText("Q");
        ui->pbW->setText("W");
        ui->pbE->setText("E");
        ui->pbR->setText("R");
        ui->pbT->setText("T");
        ui->pbY->setText("Y");
        ui->pbU->setText("U");
        ui->pbI->setText("I");
        ui->pbO->setText("O");
        ui->pbP->setText("P");
        ui->pbBracket1->setText("{");
        ui->pbBracket2->setText("}");
        ui->pbSlash->setText("|");

        ui->pbA->setText("A");
        ui->pbS->setText("S");
        ui->pbD->setText("D");
        ui->pbF->setText("F");
        ui->pbG->setText("G");
        ui->pbH->setText("H");
        ui->pbJ->setText("J");
        ui->pbK->setText("K");
        ui->pbL->setText("L");
        ui->pbSemi->setText(":");
        ui->pbQuot->setText("\"");

        ui->pbZ->setText("Z");
        ui->pbX->setText("X");
        ui->pbC->setText("C");
        ui->pbV->setText("V");
        ui->pbB->setText("B");
        ui->pbN->setText("N");
        ui->pbM->setText("M");
        ui->pbComma->setText("<");
        ui->pbFStop->setText(">");
        ui->pbFDiv->setText("?");
    } else {
        ui->pbWave->setText("`");
        ui->pb1->setText("1");
        ui->pb2->setText("2");
        ui->pb3->setText("3");
        ui->pb4->setText("4");
        ui->pb5->setText("5");
        ui->pb6->setText("6");
        ui->pb7->setText("7");
        ui->pb8->setText("8");
        ui->pb9->setText("9");
        ui->pb0->setText("0");
        ui->pbDec->setText("-");
        ui->pbAdd->setText("=");

        ui->pbQ->setText("q");
        ui->pbW->setText("w");
        ui->pbE->setText("e");
        ui->pbR->setText("r");
        ui->pbT->setText("t");
        ui->pbY->setText("y");
        ui->pbU->setText("u");
        ui->pbI->setText("i");
        ui->pbO->setText("o");
        ui->pbP->setText("p");
        ui->pbBracket1->setText("[");
        ui->pbBracket2->setText("]");
        ui->pbSlash->setText("\\");

        ui->pbA->setText("a");
        ui->pbS->setText("s");
        ui->pbD->setText("d");
        ui->pbF->setText("f");
        ui->pbG->setText("g");
        ui->pbH->setText("h");
        ui->pbJ->setText("j");
        ui->pbK->setText("k");
        ui->pbL->setText("l");
        ui->pbSemi->setText(";");
        ui->pbQuot->setText("'");

        ui->pbZ->setText("z");
        ui->pbX->setText("x");
        ui->pbC->setText("c");
        ui->pbV->setText("v");
        ui->pbB->setText("b");
        ui->pbN->setText("n");
        ui->pbM->setText("m");
        ui->pbComma->setText(",");
        ui->pbFStop->setText(".");
        ui->pbFDiv->setText("/");
    }
}

}

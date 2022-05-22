#include "chessboard.h"

chessBoard::chessBoard(QWidget *parent) : QWidget(parent)
{
    dataInit();
}

void chessBoard::dataInit()
{
    upDownMargin = 60;
    leftRightMargin = 40;
    squareSize = 60;
    memset(chessList,NoChess,sizeof(chessList));

    this->setMinimumSize(leftRightMargin*2+14*squareSize,upDownMargin*2+14*squareSize);
    this->setMaximumSize(leftRightMargin*2+14*squareSize,upDownMargin*2+14*squareSize);
}

void chessBoard::paintEvent(QPaintEvent *e)
{
    e=e;
    QPainter painter(this);
    //画背景
    QPixmap pic(":/images/background_1.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pic);

    QPen pen;
    pen.setColor(Qt::black);
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(4);
    painter.setPen(pen);

    //画棋盘
    for(int i=0;i<15;i++)
    {
        painter.drawLine(leftRightMargin,upDownMargin+i*squareSize,leftRightMargin+14*squareSize,upDownMargin+i*squareSize);
    }
    for(int i=0;i<15;i++)
    {
        painter.drawLine(leftRightMargin+i*squareSize,upDownMargin,leftRightMargin+i*squareSize,upDownMargin+14*squareSize);
    }
}


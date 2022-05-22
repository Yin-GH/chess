#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <QWidget>
#include <QDebug>
#include <QEvent>
#include <QPaintEvent>
#include <QPainter>
#include <QPen>
#include <QPixmap>
#include <QMouseEvent>

class chessBoard : public QWidget
{
    Q_OBJECT
    enum {NoChess=0,BlackChess,WhiteChess};
public:
    explicit chessBoard(QWidget *parent = 0);
    void dataInit(void);

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *e);
    //mouseMoveEvent(QMouseEvent *);

private:
    int upDownMargin;       //上下边距
    int leftRightMargin;    //左右边距
    int squareSize;         //格子边长
    int chessList[15][15];  //棋盘
};

#endif // CHESSBOARD_H

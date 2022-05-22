#include "chess.h"
#include <QApplication>
#include "chessboard.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    chess w;
//    w.show();
    chessBoard b;
    b.show();

    return a.exec();
}

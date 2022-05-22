/********************************************************************************
** Form generated from reading UI file 'chess.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESS_H
#define UI_CHESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chess
{
public:

    void setupUi(QWidget *chess)
    {
        if (chess->objectName().isEmpty())
            chess->setObjectName(QStringLiteral("chess"));
        chess->resize(400, 300);

        retranslateUi(chess);

        QMetaObject::connectSlotsByName(chess);
    } // setupUi

    void retranslateUi(QWidget *chess)
    {
        chess->setWindowTitle(QApplication::translate("chess", "chess", 0));
    } // retranslateUi

};

namespace Ui {
    class chess: public Ui_chess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESS_H

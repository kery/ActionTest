#include "MainWindow.h"
#include <QApplication>

#if !defined Q_OS_MACOS
#include <exception_handler.h>
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    qputenv("QTSCRCPY_ADB_PATH", "..\\qtscrcpy\\QtScrcpy\\third_party\\adb\\win\\adb.exe");
    QApplication a(argc, argv);
    Dialog w;
    w.show();

    return a.exec();
}

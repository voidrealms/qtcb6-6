#include <QCoreApplication>

#include <QDebug>
#include <iostream>
#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int max = 0;

    qInfo() << "Enter a max:";

    cin >> max;

    if(max <= 0) qFatal("Please enter a valid number!");

    for(int i = 0; i < max; i++) {
        qInfo() << "i = " << i;
    }

    array<int, 4> ages = {44,56,32,16}; //Zero based index!!!
    for(int i = 0; i < ages.size(); i++) {
        qInfo() << "ages[" << i << "] = " << ages.at(i);
    }

    return a.exec();
}

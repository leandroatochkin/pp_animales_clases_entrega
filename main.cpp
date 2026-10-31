#include <iostream>
#include <windows.h>
#include "include/businessLogic.hpp"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    PolyDemo demo;
    demo.showMenu();

    return 0;
}
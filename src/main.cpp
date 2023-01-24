#include <bits/stdc++.h>
#include "system\menuSelector.cpp"
using namespace std;

int main() {
    menu mainMenu;
    mainMenu.addMenu("A");
    mainMenu.addMenu("B");
    mainMenu.addMenu("C");

    system("cls");
    mainMenu.showMenu();
    while (true) {
        if (getch() == KEY_ENTER) break;
        if (mainMenu.selectMenu()) {
            system("cls");
            mainMenu.showMenu();
        }
    }
}
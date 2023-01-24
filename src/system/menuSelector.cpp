#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER '\r'

class menu {
    private:
        vector<string> menuList;
        static int menuIterator;
    public:
        void addMenu(string option) {
            menuList.push_back(" - " + option + " \n");
        }

        bool selectMenu() {
            int ch = getch();
            if (ch == KEY_UP) {
                if (menuIterator > 0) menuIterator--;
                else menuIterator = menuList.size() - 1;
                return true;
            }
            if (ch == KEY_DOWN) {
                if (menuIterator < menuList.size() - 1) menuIterator++;
                else menuIterator = 0;
                return true;
            }
            return false;
        }

        void showMenu() {
            for(int i = 0; i < menuList.size(); i++) {
                if (i == menuIterator) cout << "\033[30;1;47m";
                cout << menuList[i];
                if (i == menuIterator) cout << "\033[m";
            }
        }
};
int menu::menuIterator = 0;

// Usage
// int main() {
//     menu mainMenu;
//     mainMenu.addMenu("A");
//     mainMenu.addMenu("B");
//     mainMenu.addMenu("C");

//     system("cls");
//     mainMenu.showMenu();
//     while (true) {
//         if (getch() == KEY_ENTER) break;
//         if (mainMenu.selectMenu()) {
//             system("cls");
//             mainMenu.showMenu();
//         }
//     }
// }
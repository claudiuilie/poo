#include <iostream>
#include "mainSelector.h"

using namespace std;

int main() {
    int choice;
    int screen = 1;
    bool running = true;
    mainSelector main;

    while (running) {

        switch(screen){
            case  1 :
                main.refresh();
                cout << "*****************MENU*******************\n\n";
                cout << "               1.Find\n";
                cout << "               2.Create\n";
                cout << "               3.Edit\n";
                cout << "               4.Delete\n\n";
                cout << "               9.Exit\n";
                cout << "select menu:\n\n";
                cin >> choice;
                break;
            case  2 :
                cout << "*****************Find*******************\n\n";
                cout << "               1.All\n";
                cout << "               2.Id\n";
                cout << "               3.Barcode\n\n";
                cout << "               0.Back\n";
                cout << "select menu:\n\n";
                cin >> choice;
                break;
            case  3 :
                cout << "*****************CREATE*******************\n\n";
                cout << "               0.Back\n";
                cout << "select menu:\n\n";
                cin >> choice;
                break;
            case  4 :
                cout << "*****************EDIT*******************\n\n";
                cout << "               0.Back\n";
                cout << "select menu:\n\n";
                cin >> choice;
                break;
            case  5 :
                cout << "*****************DELETE*******************\n\n";
                cout << "               0.Back\n";
                cout << "select menu:\n\n";
                cin >> choice;
                break;

        }
        main.refresh();
        if(screen && choice != 9){

            screen = main.screenSelector(screen,choice);
        }
        if(screen == 1 && choice == 9){
            running = false;
        }

    }

    return 0;
}

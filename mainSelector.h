
#include <iostream>
#include <string>

using namespace std;

class mainSelector {
    public:
       int screenSelector(int screen,int selection) {
            switch(screen) {
                //Main menu
                case 1:
                    switch(selection){
                        case 1:
                            return 2;
                        case 2:
                            return 3;
                        case 3:
                            return 4;
                        case 4:
                            return 5;
                        default:
                            return 1;
                    }
                //Find
                case 2:
                    switch(selection){
                        case 0:
                            return 1;
                        case 1:
                            cout << "All\n"; // select *
                            return 2;
                        case 2:
                            cout << "Id\n";
                            return 2;
                        case 3:
                            cout << "Barcode\n";
                            return 2;
                        default:
                            return 2;
                    }
                //Create
                case 3:
                    switch(selection){
                        case 0:
                            return 1;
                        default:
                            return 3;
                    }
                //Edit
                case 4:
                    switch(selection){
                        case 0:
                            return 1;
                        default:
                            return 4;
                    }
                case 5:
                    switch(selection){
                        case 0:
                            return 1;
                        default:
                            return 5;
                    }

            }
        }

        void refresh() {
            int n;
            for (n = 0; n < 10; n++)
                printf( "\n\n\n\n\n\n\n\n\n\n" );
       }
};

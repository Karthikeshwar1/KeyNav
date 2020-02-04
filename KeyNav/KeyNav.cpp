#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main() {
    int line = 1;
    char nav;

    while (1) {
        cout<<(line == 1 ? ">" : " ")<<"1.Photos\n";
        cout<<(line == 2 ? ">" : " ")<<"2.Music\n";
        cout<<(line == 3 ? ">" : " ")<<"3.Games\n";
        cout<<(line == 4 ? ">" : " ")<<"4.Movies\n";
        cout<<(line == 5 ? ">" : " ")<<"5.Exit\n";

        nav = getch();

        switch(nav) {
            case 80:if (line == 5)
                        line = 1;
                    else
                        line++;
                    break;
            case 72:if (line == 1)
                        line = 5;
                    else
                        line--;
                    break;
        }

        if (nav == 13) {
            switch(line) {
                case 1:
                case 2:
                case 3:
                case 4:cout<<"Nothing available yet!\n";
                cout<<flush;
                system("PAUSE");
                system("CLS");
                break;
                case 5:return 0;
                default:continue;
            }
        }
        cout<<flush;
        system("CLS");
    }
    return 0;
}

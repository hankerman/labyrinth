#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

const int horizont = 40, vertical = 20;
char pole[::vertical][::horizont];
char wall = '#', empt = ' ', wall2 = '*';

void full(char arr[][::horizont]) {

    for (int i = 0; i < ::vertical; i++) {
        for (int j = 0; j < ::horizont; j++) {
            if (i == 0 || i == vertical - 1) {
                arr[i][j] = ::wall;
            }
            else if(j == 0 || j == ::horizont - 1) {
                
                arr[i][j] = ::wall;
            }
            else {
                arr[i][j] = ::empt;
            }
        }
    }

}



void print(char arr[][::horizont]) {

    for (int i = 0; i < ::vertical; i++) {
        for (int j = 0; j < ::horizont; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
}



int main()
{
    
    full(pole);
    print(pole);

}
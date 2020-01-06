#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;

int main(){
string f = "==>";
int x=0,y=0;
char key;

while(1){
        key=getch();
        system("cls");
        if(key=='w')
            y--;

        if(key=='d')
            x++;
        if(key=='s')
            y++;
        if(key=='a')
            x--;
        int i=0;
        int j=0;
        while(i<y){
            cout << endl;
            i++;
        }

        while(j<x){

            cout << " ";
            j++;
        }

        cout << f;




}





//cout << f << endl << "    " << f;
//cout << endl << endl << "   " << f;
//cout << endl << "     " << f;
}

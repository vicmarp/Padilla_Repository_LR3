#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

void askFirstNumber(int& num1);
void askSecondNumber(int& num2);
string addRight(int& num1,int& num2);
string addLefth(int& num1,int& num2);
int menu();

int main(){
    menu();
    system("pause");
    return 0;
}

int menu(){
    //Developed by Victor Padilla - branch branch_fun_1
    char letter;
    int num1,num2,option;
    string right,lefth;
    menu:
    system("cls");
    cout<<"MENU\n";
    cout<<"1. Enter a natural number K \n";
    cout<<"2. Enter a number D (in the range 1-9)\n";
    cout<<"3. Add the digit D to the number K on the right\n";
    cout<<"4. Add the digit D to the number K on the left\n";
    cout<<"\n*Please enter the number of the desired function or 0 if you wantto closethe app*\n";
    cin>>option;
    switch (option)
    {
    case 1:
        askFirstNumber(num1);
        goto menu;
        break;
    case 2:
        askSecondNumber(num2);
        goto menu;
        break;
    case 3:
        right = addRight(num1,num2);
        cout<<"This is your number: "<<right<<"\n";
        getch();
        goto menu;
        break;
    case 4:
        lefth = addLefth(num1,num2);
        cout<<"This is your number: "<<lefth<<"\n";
        getch();
        goto menu;
        break;
    default:
        return 0;
        break;
    }
    return 0;
}
void askFirstNumber(int& num1){
    //Developed by Victor Padilla - branch branch_fun_2
}
void askSecondNumber(int& num2){
    //Developed by Victor Padilla - branch branch_fun_3
}
string addRight(int& num1,int& num2){
    //Developed by Victor Padilla - branch branch_fun_4
}
string addLefth(int& num1,int& num2){
    //Developed by Victor Padilla - branch branch_fun_5
}
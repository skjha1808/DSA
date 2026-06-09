#include<iostream>
using namespace std;

int main(){

    int num=2;
    int ch='1';
    cout <<endl;

    // switch(num){
    //     case 1: cout <<"First" <<endl;
    //     break;

    //     case 2: cout <<"Second"<<endl;
    //     break;

    //     case 3: cout <<"Third" <<endl;
    //     break;

    //     default: cout <<"It is a Default case."<<endl;
    // }

    // switch(num){
    //     case 1: cout <<"first" <<endl;
    //     break;

    //     case 2: switch(ch){
    //         case '1': cout <<"second"<<endl;
    //         break;
    //     }
    //     //break;

    //     case 3: cout <<"third" <<endl;
    //     //break;

    //     default: cout <<"it is a default case!"<<endl;
    // }



    // Basic Calculator:
    int a=10,b=5;
    char op='+';

    // cout <<"Enter the value of a: "<<endl;
    // cin >> a;

    // cout <<"Enter the operation to be performed:(+,-,*,/,%): "<<endl;
    // cin >> op;

    // cout <<"Enter the value of b: "<<endl;
    // cin >> b;

    // switch(op){
    //     case '+': cout <<"Result: "<< a+b <<endl;
    //     //break;

    //     case '-': cout <<"Result: "<< a-b <<endl;
    //     //break;

    //     case '*': cout <<"Result: "<< a*b <<endl;
    //     //break;

    //     case '/': 
    //     if(b != 0){
    //         cout <<"Result: "<< a/b <<endl;
    //     } else {
    //         cout <<"Error! divide by zero. "<<endl;
    //     }
    //     //break;

    //     case '%': cout <<"Result: "<< a%b <<endl;
    //     break;

    //     default: cout <<"Invalid operation!"<<endl;
    // }


    
    // Notes calculations:
    int amount=581;

    // cout << "Enter amount: ";
    // cin >> amount;

    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

    int choice = 1;   // initialization
    cout << "\nNotes Required:\n";

    while(choice <= 7) {
        switch(choice) {
            case 1:
                n100 = amount / 100;
                amount = amount % 100;
                cout << "100 Notes = " << n100 << endl;
                break;

            case 2:
                n50 = amount / 50;
                amount = amount % 50;
                cout << "50 Notes = " << n50 << endl;
                break;

            case 3:
                n20 = amount / 20;
                amount = amount % 20;
                cout << "20 Notes = " << n20 << endl;
                break;

            case 4:
                n10 = amount / 10;
                amount = amount % 10;
                cout << "10 Notes = " << n10 << endl;
                break;

            case 5:
                n5 = amount / 5;
                amount = amount % 5;
                cout << "5 Notes = " << n5 << endl;
                break;

            case 6:
                n2 = amount / 2;
                amount = amount % 2;
                cout << "2 Notes = " << n2 << endl;
                break;

            case 7:
                n1 = amount;
                cout << "1 Notes = " << n1 << endl;
                break;
        }
        choice++;
    }

    // cout << "\nNotes Required:\n";
    // cout << "100 Notes = " << n100 << endl;
    // cout << "50 Notes = " << n50 << endl;
    // cout << "20 Notes = " << n20 << endl;
    // cout << "10 Notes = " << n10 << endl;
    // cout << "5 Notes = " << n5 << endl;
    // cout << "2 Notes = " << n2 << endl;
    // cout << "1 Notes = " << n1 << endl;


    return 0;
}
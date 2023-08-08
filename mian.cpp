#include <iostream>
using namespace std;

// Variables

double balance = 1000;
int deposit = 0;
int withDraw = 0;
int passWord = 1234;
int choice;
// End Variables

// show is a function to display the Menu of the ATM
void show (){
    cout<< "*****Menu*****"<<endl;
    cout<<"1: Balance"<<endl;
    cout<<"2: Withdraw"<<endl;
    cout<<"3: Deposit"<<endl;
    cout<<"4: Exit"<<endl;
    cout<<"*************"<<endl;
}

void Process(){
    cout<<"Enter your Password"<<endl;
    cin>>passWord;

    if (passWord == 1234){
        do {
        show();
        cout<<"Enter Your choice"<<endl;
        cin>>choice;

            switch (choice) {
                case 1:
                    cout<<"Your balance is: "<<balance<<endl;
                    break;

                case 2:
                    cout<<"Your balance is: "<<balance<<endl;
                    cout<< "Enter the amount to Withdraw"<<endl;
                    cin>>withDraw;
                    if (withDraw > balance){
                        cout<<"Sorry You cannot Withdraw this amount. your balance is: "<<balance<<" And You are trying to Withdraw: "<<withDraw<<" Try again please"<<endl;
                    } else{
                        balance -= withDraw;
                        cout<<"Successful operation don't forget to pick up your money"<<endl;
                        cout<<"Your new balance is: "<<balance<<endl;
                    }
                    break;
                case 3:
                    cout << "Your balance is: " << balance << endl;
                    cout << "Enter the amount to Deposit" << endl;
                    cin >> deposit;
                    balance += deposit;
                    cout << "Your new Balance is: " << balance << endl;
                    break;
                case 4:
                    cout<<"Thank you for using our ATM"<<endl;
                    break;
            } //end switch

        } while (choice < 4);



    } else{
        char option = 'o';
        cout<<"The password you have entered is Incorrect, If you want to try again enter \"Y\" ""and if You don't want to try again enter \"N\"."<<endl;
        cin>>option;
        if (option == 'Y' || option =='y'){
            cout<<"Enter your Password"<<endl;
            cin>>passWord;
        }else{
            choice = 4;
        }
    }//end if
};
int main(){
    Process();
}
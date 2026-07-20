#include<iostream>
using namespace std;
int main()
{
    int balance=50000,Total_Balance,amount,choice;
    cout<<"***SBI BANK***"<<endl;
    cout<<"1.Bank Balance\n2.Withdraw\n3.Deposit\n4.Exit"<<endl;
    
    // Take Choice from user
    cout<<"Enter your choice=";
    cin>>choice;

    //applying switch case for user choice
    switch (choice)
    {
        case 1:
        cout<<"Your Bank Balance is="<<balance<<endl;
        break;
        
        //Case for Withdraw
        case 2:
        cout<<"Enter the amount to withdraw=";
        cin>>amount;
        if(amount>balance)
        {
            cout<<"Insufficient balance"<<endl;
            
        }
        else
        {
            Total_Balance=balance-amount;
            cout<<"After withdraw your amt="<<Total_Balance<<endl;
        }
        break;

        //Case for Deposit
        case 3:
        cout<<"Enter the amount to deposite=";
        cin>>amount;
        Total_Balance=balance+amount;
        cout<<"After deposit your amt="<<Total_Balance<<endl;
        break;

        //case for Exit
        case 4:
        cout<<"Thank you for using our service"<<endl;
        break;

        //Default case
        default:
        cout<<"Invalid choice"<<endl;
    }//switch end    
return 0;
}//main function end
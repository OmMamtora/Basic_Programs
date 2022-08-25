#include<iostream.h>
#include<conio.h>

class Bank
{
  public:
  char name[25],type[20];
  int accno,bal_amo_acc,dep,chbalance,amt,withdraw_amt;
 void insert();
 void Deposit();
 void withdraw();
 void Display();
};

 void Bank::insert()
{
 cout<<"Enter Name:";
 cin>>name;
 cout<<"Enter Account number:";
 cin>>accno;
 cout<<"Type Of Account:";
 cin>>type;
 cout<<"Enter balance amount in the account:";
 cin>>bal_amo_acc;
}
void Bank::Deposit()
{
 cout<<"Enter Amount for Deopsit:";
 cin>>dep;
 chbalance=bal_amo_acc+dep;
}
void Bank::withdraw()
{
 cout<<"\nCheck Balance "<<chbalance<<endl;
 cout<<"Enter Amount for Withdraw :";
 cin>>amt;
 withdraw_amt=chbalance-amt;
}
void Bank::Display()
{
   cout<<"Amount in Your Account is "<<withdraw_amt<<endl;
   cout<<"Withdraw amount "<<amt<<endl;
}

main()
{
 int cho;
 Bank a;
 clrscr();

 do
 {
 cout<<"1. Insert Value."<<endl;
 cout<<"2. Deposite amount."<<endl;
 cout<<"3. Withdraw amount."<<endl;
 cout<<"4. Display."<<endl;
 cout<<"5. Exit"<<endl;
 cout<<"Enter your Choice:";
 cin>>cho;

 switch(cho)
 {
  case 1:
  a.insert();
  cout<<"----------------------------"<<endl;
  break;

  case 2:
  a.Deposit();
  cout<<"----------------------------"<<endl;
  break;

  case 3:
  a.withdraw();
  cout<<"----------------------------"<<endl;
  break;

  case 4:
  a.Display();
  cout<<"-----------------------------"<<endl;
  break;
 }
}while(cho!=5);

  getch();

}

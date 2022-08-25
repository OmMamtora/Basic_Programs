#include<iostream.h>
#include<conio.h>

main()
{
 int unit;
 float amount;
 char name[25];
 clrscr();

 cout<<"Enter your Name:";
 cin>>name;
 cout<<"Enter Unit:";
 cin>>unit;

 if(unit<100)
 {
  amount=50;
 }
 else
 {
  amount=100*0.60;
  unit=unit-100;

  if(unit>=200)
  {
   amount=amount+(200*0.80);
   unit=unit-200;
   amount=amount+(unit*0.90);
   }
   else if(unit<=200 )
   {
   amount=amount+(unit*0.80);
   }
   if(amount>300)
   {
    amount=amount+(amount*0.15);
   }
   }
     cout<<amount;

 getch();
}

#include<iostream.h>
#include<conio.h>

main()
{
 int fact=1,n,i;
 clrscr();

 cout<<"Enter a number:";
 cin>>n;

 for(i=1;i<=n;i++)
 {
 fact=fact*i;
 }
 cout<<"Ans is:"<<fact;


 getch();


}
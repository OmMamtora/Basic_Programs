#include<iostream.h>
#include<conio.h>

class ShapeArea
{
    public:
    int b,h,r,a,l,w,tri,cir,squ,rec;
     void triangle();
     void circle();
     void square();
     void rectangle();

 };

void ShapeArea::triangle()
{
    cout<<"Enter B and H:";
    cin>>b>>h;
    tri=b*h/2;
    cout<<"Ans is: "<<tri<<endl;
}

void ShapeArea::circle()
{
    cout<<"Enter R:";
    cin>>r;
    cir=3.14*r*r;
    cout<<"Ans is: "<<cir<<endl;
}

void ShapeArea::square()
{
    cout<<"Enter A: ";
    cin>>a;
    squ=a*a;
    cout<<"Ans is: "<<squ<<endl;
}

void ShapeArea::rectangle()
{
    cout<<"Enter L and W:";
    cin>>l>>w;
    rec=l*w;
    cout<<"Ans is: "<<rec<<endl;
}

main()
{
    clrscr();
    ShapeArea s;
    s.triangle();
    s.circle();
    s.square();
    s.rectangle();

    getch();
}

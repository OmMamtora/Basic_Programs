#include<iostream.h>
#include<conio.h>

class Product
{
    public:
    char pno[15],pname[20],sname[15],name[15];
    int quantity,price,sal,lproduct,nquantity,aquantity,cho;

    void insert();
    void purchase();
    void sale();
    void display();
};

void Product::insert()
{
    cout<<"Enter Product NO :";
    cin>>pno;
    cout<<"Enter Product Name :";
    cin>>name;
    cout<<"Enter Quantity :";
    cin>>quantity;
    cout<<"Enter Price :";
    cin>>price;

}
void Product::purchase()
{

    cout<<"Which Product You Want to Purchase :";
    cin>>pname;
    cout<<"How many Product you want to purchase :";
    cin>>nquantity;

    aquantity=quantity+nquantity;

}
void Product::sale()
{
    cout<<"Which Product You want to Sale :";
    cin>>sname;
    cout<<"How many Product you want to sale :";
    cin>>sal;

    lproduct=aquantity-sal;
}
void Product::display()
{
    cout<<"Product No "<<pno<<endl;
    cout<<"Product Name "<<name<<endl;
    cout<<"Quantity is "<<quantity<<endl;
    cout<<"Price is "<<price<<endl;
    cout<<"New purchase Product Name is "<<pname<<endl;
    cout<<"Purchase Product is "<<quantity<<endl;
    cout<<"Available Product is "<<aquantity<<endl;
    cout<<"Available Product is "<<pname<<name<<endl;
    cout<<"Sale Product Name "<<sname<<endl;
    cout<<"Sale Product Quantity is  "<<sal<<endl;
    cout<<"Left Product is "<<lproduct<<endl;
}

main()
{
    int cho;
    Product p;
    clrscr();
do
{
    cout<<"\n1. Insert Value."<<endl;
    cout<<"2. Purchase."<<endl;
    cout<<"3. Sale."<<endl;
    cout<<"4. Display."<<endl;
    cout<<"5. Exit."<<endl;
    cout<<"Enter your Choice:";
    cin>>cho;

     switch(cho)
     {
    cout<<"-----------------------";
    case 1:
    p.insert();
    break;
    cout<<"-----------------------";
    case 2:
    p.purchase();
    break;
    cout<<"-----------------------";
    case 3:
    p.sale();
    break;
    cout<<"-----------------------";
    case 4:
    p.display();
    break;
    cout<<"-----------------------";

    }


}while(cho!=5);

getch();
}

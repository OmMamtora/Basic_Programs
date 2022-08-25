#include<iostream.h>
#include<conio.h>

class Student
{
    public:
    int total,i,marks;
    char eno[20],name[25],course[20],grade;
    float percen;


    void insert();
    void percentageCalculation();
    void gradeCalculation();
    void display();
};

void Student::insert()
{


    cout<<"Enter Enrollment Number :";
    cin>>eno;
    cout<<"Enter Name :";
    cin>>name;
    cout<<"Enter Course Name :";
    cin>>course;
    for(i=0; i<=4; i++)
    {
    cout<<"Marks Of Five Subject :";
    cin>>marks;
    total=marks+marks+marks+marks+marks;

    }

}

void Student::percentageCalculation()
{
    percen=total/5;

}

void Student::gradeCalculation()
{
    if(percen<99 && percen>=90)
     {
     cout<<"Grade A";
     }
    else if(percen<90 && percen>=80)
     {
     cout<<"Grade B";
     }
    else if(percen<80 && percen>=60)
    {
     cout<<"Grade c";
    }
    else if(percen<60 && percen>35)
    {
     cout<<"Grade D";
    }
    else//(percen<35)
    {
     cout<<"Grade F";
    }
}

void Student::display()
{
    cout<<"Enrollment Number is "<<eno<<endl;
    cout<<"Name is "<<name<<endl;
    cout<<"Course is "<<course<<endl;
    cout<<"Percentage is "<<percen<<endl;


}

main()
{
    clrscr();
      Student s;

    s.insert();
    s.percentageCalculation();
    s.display();
    s.gradeCalculation();

    getch();
}

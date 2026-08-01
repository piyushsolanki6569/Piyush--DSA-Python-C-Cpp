// Class and Object in c++

# include<iostream>
using namespace std;

class students
{
public:

string Name;
int Rollno;
int Marks;

void display()
{

cout<<" Name of student: " << Name << "\n";
cout<<"Roll no. of Student:"<< Rollno << "\n"; 
cout<<"Marks obtained by Student:"<< Marks << "\n";

}
};
int main()
{
    students s1,s2,s3;

    s1.Name = "Piyush";
    s1.Rollno = 20;
    s1.Marks = 89;

    s2.Name = "Happy";
    s2.Rollno = 21;
    s2.Marks = 78;

    s3.Name = "Chirag";
    s3.Rollno = 22;
    s3.Marks = 87;

    s1.display();
    s2.display();
    s3.display();
    return 0;
}

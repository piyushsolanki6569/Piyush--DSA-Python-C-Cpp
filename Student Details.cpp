#include <iostream>
using namespace std;

//Creating Class
class Student{
    public:
    string name;
    int roll;
    
    void admission(){
        
        cout << "Enter your roll number: ";
        cin >> roll;
        
        cin.ignore();
        cout << "Enter your Name: ";
        getline(cin, name);
        
    }
    
    void display(){
        cout << "Name: "<< name << " Roll No.: " << roll << endl;
    }
};

int main(){
    // Creating object
    Student s1, s2, s3;
    s1.name = "Raghav";
    s1.roll = 101;
    s2.name = "Madhav";
    s2.roll = 102;
    s1.admission();
    s3.admission();
    s1.display();
    s2.display();
    s3.display();
    //s2.display();
    cout << "Name: "<< s2.name << " Roll No.: " << s2.roll;
}

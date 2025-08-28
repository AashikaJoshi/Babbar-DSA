#include <iostream>
using namespace std;

class Student
{
public:
    // data memebers
    string name;
    int roll_no;
    int age;
    int number;
    int cost;

    // ctor: gets called as soon as an object is made.
    Student()
    {
        cout << "Student default Constructor called." << endl;
    }

    // member functions
    void study()
    {
        cout << this->name << " Studying" << endl;
    }
    void sleep()
    {
        cout << this->name << " Sleeping" << endl;
    }
    void bunk()
    {
        cout << this->name << " Bunking " << endl;
    }
    void getdata(int a,int b);//member function declared.
    // dtor:gets called as soon as the program ends or reaches return 0.
    ~Student()
    {
        cout << "Student " << this->name << " default destructor called." << endl;
    }
};
//member function defined out of class.
void Student::getdata(int a,int b){
    number=a;
    cost=b;
    cout<<number<<" "<<cost<<" "<<endl;

}
int main()
{
    Student s1;
    s1.name = "Aashika";
    s1.roll_no = 209;
    s1.age = 19;
    s1.sleep();
    s1.bunk();

    Student s2;
    s2.name = "Harshita";
    s2.roll_no = 206;
    s2.age = 18;
    s2.study();
    s2.bunk();

    s1.getdata(34,500);
    return 0;
}
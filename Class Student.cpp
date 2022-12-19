
#include <iostream>
using namespace std;

class Student 
{
    private:
      int id;
      string name;
    
    public:
      int getId();
      void setId(int);
      string getName();
      void setName(string);
      void displayStudent() const;
      void hitungTotal();
      //constructor
      Student(); //default constructor
      Student(string);
      Student(int, string); // constructor with parameter.
}; 

void Student::setId(int xid)
{
    this->id = xid; 
}

int Student::getId()
{
    return this->id; 
}

void Student::setName(string nm)
{
    this->name = nm;
}

string Student::getName()
{
    return this->name; 
}

void Student::displayStudent() const
{
    cout << this->id << "\t" << name << endl;
}

Student::Student() //default constructor
{
  this->id = 0;
  this->name = "";
}

Student::Student(int xid, string xname) //default constructor
{
  this->id = xid;
  this->name = xname;
}

int main() 
{
    cout << "Application started." << endl;

    Student s1;
    s1.setId(100);
    s1.setName("Affan");
    s1.displayStudent();

    Student s2;
    s2.setId(101);
    s2.setName("Bunny");
    s2.displayStudent();

    Student s3;
    s3 = s2;
    s3.displayStudent();

    //Contoh pass by reference
    Student s4;
    int xid = 200;
    string nm = "Elisa";
    s4.setId(xid);
    s4.setName(nm);
    s4.displayStudent(); 

    s4.setName("Elisa Thomson");
    cout << s4.getName() << endl;

    Student s5(105, "Farrah");
    s5.displayStudent();

    //contoh membuat srray dari objek student
    Student list_of_students[100];

    cout << "\n" << endl;

}
// 1.
// An empty space; a vacuum.
// 2.
// astronomy An extended region of space containing no galaxies
// 3.
// materials science A collection of adjacent vacancies inside a crystal lattice.
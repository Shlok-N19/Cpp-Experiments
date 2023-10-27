//Shlok Naik
//115
#include<iostream>
using namespace std;

class Student{  //creating a class named Student
    int rollno;
    int marks;
    string name;
public:
    Student(){
        cout<<"Enter your roll no.: ";
        cin>>rollno;
        cout<<"\nEnter your marks: ";
        cin>>marks;
        cout<<"\nEnter your name: ";
        cin>>name;
    }

    void display(){
        cout<<rollno<<"\t"<<name<<"\t"<<marks;
    }

};

int main(){
    Student s1; //assigning an object to class Student to call it
    s1.display();
}
#include <iostream>
using namespace std;

class Student { //creating Student classs
    int rollno;
    int marks;
    string name;

public:
    Student();

    void display();
};


Student::Student() { //deriving the parameters from class Student 
    cout << "Enter your roll no.: ";
    cin >> rollno;
    cout << "\nEnter your marks: ";
    cin >> marks;
    cout << "\nEnter your name: ";
    cin >> name;
}
void Student::display() //defining a function named display
{
  
        cout << "Roll No: " << rollno << "\nName: " << name << "\nMarks: " << marks << endl;
    
}

int main() {
    
    Student s1; //assigning an object to class Student
    s1.display(); //calling display function

    return 0;
}
//Shlok Naik
//115
#include<iostream>
using namespace std;

class construct{ //creating a class named construct
    public:
    int a,b;
    int sum;

    construct(int m, int n){ //defining a constructor
        a = m;
        b = n;
        sum = m+n;
    }
    void display(){
        cout<<"Sum is: "<<sum;
    }
};

int main(){
    construct c(10, 20); //entering values for constructor
    c.display(); //calling dlisplay command
    
}
//Shlok Naik
//115
#include<iostream>
using namespace std;

class Student{ //creating student class
    int rollno;
    int marks;
    string name;
public:
    Student(){ //creating a constructor
        cout<<"Enter your roll no.: ";
        cin>>rollno;
        cout<<"\nEnter your marks: ";
        cin>>marks;
        cout<<"\nEnter your name: ";
        cin>>name;
    }

    void display(){
        cout<<endl<<rollno<<"\t"<<name<<"\t"<<marks;
    }

};

int main(){
    Student s1; //assigning an object to class to execute it
    s1.display(); //calling display function
}

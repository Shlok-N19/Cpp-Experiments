/*  PRN:22070123115
    Experiment no:2(a)
*/
#include <iostream>
using namespace std;

int main() {
   int Integer_var; //Integer takes whole numbers --> 1,2,4, etc. --> 4 bytes
   float Float_var; //Float takes fractional numbers upto 7 decimal places --> 1.903, 0.9243 etc. --> 4 bytes
   double Double_var; //Double takes fractional numbers upto 15 decimal places --> 1.9037849, 0.92438935364 etc. --> 8 bytes
   char Char_var; //Character takes single characters enclosed in single quotes --> 'a', 'H', '$' etc. --> 1 byte
   bool flag; //Boolean takes either true (1) or false (0) --> 1 byte
   
   cout<< "Enter any integer value: ";
   cin >> Integer_var;
   cout<< "Enter any floating point value: ";
   cin >>Float_var ;
   cout<< "Enter any double floating point value: ";
   cin >> Double_var;
   cout<< "Enter any Character value: ";
   cin >> Char_var;
   cout<< "Enter any boolean value: ";
   cin >> flag;
   
   cout<<"Value of Integer_var is: "<< Integer_var<<endl; //Printing the value Integer_var
   cout<<"Value of Float_var is: "<< Float_var<<endl; //Printing the value Float_var
   cout<<"Value of Double_var is: "<< Double_var<<endl; //Printing the value Double_var
   cout<<"Value of Char_var is: "<< Char_var<<endl; //Printing the value Char_var
   cout<<"Value of flag is: "<< flag<<endl; //Printing the value flag
return 0;
}
/*  OUTPUT
Enter any integer value: 3
Enter any floating point value: 5.67
Enter any double floating point value: 7.8904
Enter any Character value: t
Enter any boolean value: 1345
Value of Integer_var is: 3
Value of Float_var is: 5.67
Value of Double_var is: 7.8904
Value of Char_var is: t
Value of flag is: 1
*/

/*  PRN:22070123115
    Experiment no:2(b)
*/
#include <iostream>
using namespace std;

int main() {
   int Integer_var;
   float Float_var;
   double Double_var;
   char Char_var;
   bool flag;
   
   cout<<"The size of Integer_var is: "<< sizeof(Integer_var)<<endl; //sizeof operator is used to find the size of the memory allocated to that particular data type
   cout<<"The size of Float_var is: "<< sizeof(Float_var)<<endl;
   cout<<"The size of Double_var is: "<< sizeof(Double_var)<<endl;
   cout<<"The size of Char_var is: "<< sizeof(Char_var)<<endl;
   cout<<"The size of flag is: "<< sizeof(flag)<<endl;
return 0;
}
/*  OUTPUT
The size of Integer_var is: 4
The size of Float_var is: 4
The size of Double_var is: 8
The size of Char_var is: 1
The size of flag is: 1
*/

/*  PRN:22070123115
    Experiment no:2(c)
*/
#include <iostream>
using namespace std;

int main() {
   int Integer_var;
   float Float_var;
   double Double_var;
   char Char_var;
   bool flag;
   const float pi = 3.14; // Constant is used to fix the value of any variable --> Cannot be changed by the user
   
   cout<< "Enter any integer value: ";
   cin >> Integer_var;
   cout<< "Enter any floating point value: ";
   cin >>Float_var ;
   cout<< "Enter any double floating point value: ";
   cin >> Double_var;
   cout<< "Enter any Character value: ";
   cin >> Char_var;
   cout<< "Enter any boolean value: ";
   cin >> flag;
   
   cout<<"Value of Integer_var is: "<< Integer_var<<endl;
   cout<<"Value of Float_var is: "<< Float_var<<endl;
   cout<<"Value of Double_var is: "<< Double_var<<endl;
   cout<<"Value of Char_var is: "<< Char_var<<endl;
   cout<<"Value of flag is: "<< flag<<endl;
   cout<<"Value of pi is: "<<pi;
return 0;
}
/*  OUTPUT
Enter any integer value: 7
Enter any floating point value: 8.90
Enter any double floating point value: 76.45632773
Enter any Character value: a
Enter any boolean value: false
Value of Integer_var is: 7
Value of Float_var is: 8.9
Value of Double_var is: 76.4563
Value of Char_var is: a
Value of flag is: 0
Value of pi is: 3.14
*/

/*  PRN:22070123115
    Experiment no:2(d)
*/
#include <iostream>
using namespace std;

int main() {
   bool imagecolor = true;
   if(imagecolor){ //Checks whether imagecolor is true or not, and if true it prints the below statement or else, prints the statement in the else part.
    cout<<"Image is colorfull";
   }else{
    cout<<"Image is not colorfull";
   }
return 0;
}
/*  OUTPUT
Image is colorfull
*/

/*  PRN:22070123115
    Experiment no:2(e)
*/
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>> a >> b;
    if(a>b){ //Checks whether a is greater than b or not, and if true it prints the below statement or else, prints the statement in the else part. --> GREATER THAN OPERATOR IS USED
        cout<<"a is greater than b";
    }else{
        cout<<"b is greater than a ";
    }
    return 0;
}
/*  OUTPUT
Enter two numbers: 2 3
b is greater than a 

Enter two numbers: 7 5
a is greater than b
*/

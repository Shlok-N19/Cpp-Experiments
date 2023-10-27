/*PRN: 22070123115
Experiment-no: 7(a)*/
#include <iostream>
using namespace std;

int main() {
    int a1[5]={19,10,8,45,32};
    for(int i=0; i<5; i++){
        cout<<a1[i]<<endl;
    }
return 0;
}

/*OUTPUT
19	10	8	45	32	
*/

/*PRN: 22070123115
Experiment-no: 7(b)*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a1[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements of the array: ";
        cin>>a1[i];
    }
    for(int i=0; i<n; i++){
        cout<<a1[i]<<"\t";
    }
return 0;
}
/*OUTPUT
Enter the elements of the array: 1
Enter the elements of the array: 2
Enter the elements of the array: 3
Enter the elements of the array: 4
Enter the elements of the array: 5
1	2	3	4	5	
*/

/*PRN: 22070123115
Experiment-no: 7(c)*/

#include <iostream>
using namespace std;
int main() {
    int a1[10]={1,100,73,26,78,92,34,12,1,45},a,count=0;
    cout<<"Enter the value to find in the array: ";
    cin>>a;
    for(int i=0; i<10; i++){
        if(a==a1[i]){
            cout<<a<<" is present in the array at position "<<i;
        }else{
            count++;
        }
    }
    if(count==10){
        cout<<"The number is not present in the array";
    }
return 0;
}

/*OUTPUT
Enter the value to find in the array: 100
100 is present in the array at position 1

Enter the value to find in the array: 67
The number is not present in the array
*/

/*PRN: 22070123115
Experiment-no: 7(d)*/
#include <iostream>
using namespace std;

int main() {
    int a1[10]={1,100,73,26,45,92,34,12,1,45},a,count=0;
    cout<<"Enter the value to find in the array: ";
    cin>>a;
    for(int i=0; i<10; i++){
        if(a==a1[i]){
            cout<<a<<" is present in the array at position "<<i+1<<endl;
        }else{
            count++;
        }
    }
    if(count==10){
        cout<<"The number is not present in the array";
    }
return 0;
}

/*OUTPUT
Enter the value to find in the array: 45
45 is present in the array at position 5
45 is present in the array at position 10

Enter the value to find in the array: 67
The number is not present in the array
*/

/*PRN: 22070123115
Experiment-no: 7(e)*/

#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    float avg;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a1[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements of the array: ";
        cin>>a1[i];
    }
    for(int i=0; i<n; i++){
        sum=sum+a1[i];
        avg=sum/n;
    }
    cout<<"The sum of elements is: "<<sum<<endl;
    cout<<"The average of elements is: "<<avg;
return 0;
}
/*OUTPUT
Enter the size of array: 5
Enter the elements of the array: 1
Enter the elements of the array: 2
Enter the elements of the array: 3
Enter the elements of the array: 4
Enter the elements of the array: 5
The sum of elements is: 15
The average of elements is: 3	
*/

/*PRN: 22070123115
Experiment-no: 7(f)*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a1[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements of the array: ";
        cin>>a1[i];
    }
    for(int i=0; i<n;i++){
        int Max=0,Min=0;
        for(int j=0;j<n;j++){
            if(a1[i]>=a1[j]){
                Max++;
            }
            if(a1[i]<=a1[j]){
                Min++;
            }
        }
        if(Max==n){
            cout<<"The Max value is: "<<a1[i]<<endl;
        }
        if(Min==n){
            cout<<"The Min value is: "<<a1[i]<<endl;
        }
    }
return 0;
}
/*OUTPUT
Enter the size of array: 5
Enter the elements of the array: 1
Enter the elements of the array: 2
Enter the elements of the array: 3
Enter the elements of the array: 4
Enter the elements of the array: 5
The Min value is: 1
The Max value is: 5	
*/

/*PRN: 22070123115
Experiment-no: 7(g)*/

#include <iostream>
using namespace std;

int main() {
    int n,temp=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a1[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the elements of the array: ";
        cin>>a1[i];
    }
    cout<<"The elements of the array before swaping: ";
    for(int i=0; i<n; i++){
        cout<<a1[i]<<"\t";
    }
    
    for(int i=0; i<n;i++){
        for(int j=0; j<i;j++){
            temp=a1[i];
            a1[i]=a1[j];
            a1[j]=temp;
        }
    }
    cout<<endl<<"The elements of the array after swaping: ";
    for(int i=0; i<n; i++){
        cout<<a1[i]<<"\t";
    }
return 0;
}
/*OUTPUT
Enter the size of array: 5
Enter the elements of the array: 1
Enter the elements of the array: 2
Enter the elements of the array: 3
Enter the elements of the array: 4
Enter the elements of the array: 5
The elements of the array before swaping: 1	2	3	4	5	
The elements of the array after swaping: 5	4	3	2	1		
*/

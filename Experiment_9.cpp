/*PRN: 22070123115
Experiment No: 9(a)*/

#include <iostream>
using namespace std;
int main(){
    int a[3][3],b[3][3];
    cout<<"Enter the elements of Matrix A: "<<endl;
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Matrix A is: "<<endl;
    for(int i=0; i<3;i++){
        for(int j=0; j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*OUPUT
Enter the elements of Matrix A: 
1 2 3 4 5 6 7 8 9
Matrix A is: 
1 2 3 
4 5 6 
7 8 9 
*/

/*PRN: 22070123115
Experiment No: 9(b)*/

#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the number of rows and column of the matrix: ";
    cin>>r>>c;
    int A[r][c],B[r][c],X[r][c];
    cout<<"Enter the elements of Matrix A: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cin>>A[i][j];
        }
    }
    
    cout<<"Enter the elements of Matrix B: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cin>>B[i][j];
        }
    }
    
    cout<<"The resultant Matric X is: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            X[i][j]=A[i][j] + B[i][j];
            cout<<X[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*OUPUT
Enter the number of rows and column of the matrix: 3 3 
Enter the elements of Matrix A: 
1 2 3 4 5 6 7 8 9
Enter the elements of Matrix B: 
9 8 7 6 5 4 3 2 1
The resultant Matric X is: 
10 10 10 
10 10 10 
10 10 10 
*/
/*PRN: 22070123115
Experiment No: 9(c)*/

#include <iostream>
using namespace std;
int main(){
    int r,c,sum=0,count=0;
    cout<<"Enter the number of rows and columns of the matrix: ";
    cin>>r>>c;
    int A[r][c];
    cout<<"Enter the elements of Matrix A: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            if(i==j){
                sum = sum+A[i][j];
            }else if(i+j==r-1){
                count= count+A[i][j];
            }
            
        }
    }
    cout<<"The sum of diagonal elements (from left to right) of Matrix A is: "<<sum<<endl;
    cout<<"The sum of diagonal elements (from right to left) of Matrix A is: "<<count;
    return 0;
}
/*OUPUT
Enter the number of rows and columns of the matrix: 3 3
Enter the elements of Matrix A: 
1 2 3 4 5 6 7 8 9
The sum of diagonal elements (from left to right) of Matrix A is: 15
The sum of diagonal elements (from right to left) of Matrix A is: 10
*/
/*PRN: 22070123115
Experiment No: 9(d)*/
#include <iostream>
using namespace std;
int main(){
    int r,c,sum=0;
    cout<<"Enter the number of rows and columns of the matrix: ";
    cin>>r>>c;
    int A[r][c];
    cout<<"Enter the elements of Matrix A: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cin>>A[i][j];
        }
    }
    cout<<"The original Matrix A is: "<<endl;
    for(int i=0; i<r;i++){
        for(int j=0; j<c;j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"The transpose of the Matrix A is: "<<endl;
    for(int i=0; i<c;i++){
        for(int j=0; j<r;j++){
            cout<<A[j][i]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
/*OUPUT
Enter the number of rows and columns of the matrix: 2 3
Enter the elements of Matrix A: 
1 2 3 4 5 6
The original Matrix A is: 
1	2	3	
4	5	6	
The transpose of the Matrix A is: 
1	4	
2	5	
3	6
*/

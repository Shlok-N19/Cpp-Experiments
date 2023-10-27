/*PRN: 22070123115
Experiment_11(a)
*/

#include<iostream>
using namespace std;
class cube{
        public:
        double ht,breadth,len;
};
int main(){
    cube volume;
    cout<<"Enter the height, breadth and lenght of the cube: ";
    cin>>volume.ht>>volume.breadth>>volume.len;
    cout<<endl<<"The volume of the cube is: "<<volume.ht*volume.breadth*volume.len;
    return 0;
}

/*OUTPUT
Enter the height, breadth and lenght of the cube: 2 3 4
The volume of the cube is: 24
*/

/*PRN: 22070123115
Experiment_11(b)
*/

#include<iostream>
using namespace std;
class cube{
        public:
        double ht,breadth,len;
        double vol_cube(){
            cout<<"Enter the height, breadth and lenght of the cube: ";
            cin>>ht>>breadth>>len;
            double volume1 = ht*breadth*len;
            return volume1;
        }
        void print(int vol){
             cout<<endl<<"The volume of the cube is: "<<vol;
        }
};
int main(){
    double x;
    cube volume;
    x=volume.vol_cube();
    volume.print(x);
    return 0;
}

/*OUTPUT
Enter the height, breadth and lenght of the cube: 4 5 6
The volume of the cube is: 120
*/

/*PRN: 22070123115
Experiment_11(c)
*/

#include<iostream>
using namespace std;
class cube{
        private:
        double ht,breadth,len;
        public:
        double vol_cube(){
            cout<<"Enter the height, breadth and lenght of the cube: ";
            cin>>ht>>breadth>>len;
            double volume1 = ht*breadth*len;
            return volume1;
        }
        void print(int vol){
             cout<<endl<<"The volume of the cube is: "<<vol;
        }
};
int main(){
    double x;
    cube volume;
    x=volume.vol_cube();
    volume.print(x);
    return 0;
}

/*OUTPUT
Enter the height, breadth and lenght of the cube: 10 6 4
The volume of the cube is: 240
*/

/*PRN: 22070123115
Experiment_11(d)
*/

#include<iostream>
#include<math.h>
using namespace std;
class area_figures{
        private:
        double ht,len,a,b,c,d,rad;
        public:
        double area_rect(){
            cout<<"Enter the height and lenght of the rectangle: ";
            cin>>ht>>len;
            double area1_rect = ht*len;
            double circumference_rect = 2*3.14*rad;
            return area1_rect,circumference_rect;
        }
        double circum_rect(){
            cout<<"Enter the height and lenght of the rectangle: ";
            cin>>ht>>len;
            double area1_rect = ht*len;
            double circumference_rect = 2*3.14*rad;
            return area1_rect,circumference_rect;
        }
        double area_sqr(){
            cout<<endl<<"Enter the side of square: ";
            cin>>a;
            double area1_sqr = a*a;
            double circumference_sqr = 2*3.14*rad;
            return area1_sqr,circumference_sqr;
        }
        double circum_sqr(){
            cout<<endl<<"Enter the side of square: ";
            cin>>a;
            double area1_sqr = a*a;
            double circumference_sqr = 2*3.14*rad;
            return area1_sqr,circumference_sqr;
        }
        double area_circle(){
            cout<<endl<<"Enter the radius of the circle: ";
            cin>>rad;
            double area1_circle = 3.14*rad*rad;
            double circumference_circle = 2*3.14*rad;
            return area1_circle,circumference_circle;
        }
        double circum_circle(){
            cout<<endl<<"Enter the radius of the circle: ";
            cin>>rad;
            double area1_circle = 3.14*rad*rad;
            double circumference_circle = 2*3.14*rad;
            return area1_circle,circumference_circle;
        }
        double area_tri(){
            float s;
            cout<<endl<<"Enter b,c,d of triangle: ";
            cin>>b>>c>>d;
            s=(b+c+d)/2;
            double area1_tri = sqrt(((s)*(s-b)*(s-c)*(s-d)));
            double circumference_tri = 2*3.14*rad;
            return area1_tri,circumference_triangle;
        }
        double circum_tri(){
            float s;
            cout<<endl<<"Enter b,c,d of triangle: ";
            cin>>b>>c>>d;
            s=(b+c+d)/2;
            double area1_tri = sqrt(((s)*(s-b)*(s-c)*(s-d)));
            double circumference_tri = 2*3.14*rad;
            return area1_tri,circumference_triangle;
        }
        void print(double x1,double y1,double z1,double w1,double x2,double y2,double z2,double w2){
             cout<<endl<<"The area of the rectangle is and its circumference: "<<x1<<x2<<endl;
             cout<<endl<<"The area of the square is and its circumference: "<<y1<<y2<<endl;
             cout<<endl<<"The area of the circle is and its circumference: "<<z1<<z2<<endl;
             cout<<endl<<"The area of the triangle is and its circumference: "<<w1<<w2<<endl;
    }
};
int main(){
    double x,y,z,q;
    area_figures area;
    x1=area.area_rect();
    y1=area.area_sqr();
    z1=area.area_circle();
    q1=area.area_tri();
    x2=circum.area_rect();
    y2=circum.area_sqr();
    z2=circum.area_circle();
    q2=circum.area_tri();
    area.print(x1,y1,z1,q1,x2,y2,z2,w2);
    return 0;
}

/*OUTPUT
Enter the height, breadth and lenght of the cube: 10 6 4
The volume of the cube is: 240
*/

/*PRN: 22070123115
Experiment_11(e)
*/
#include <iostream>
using namespace std;
int count =0;
class destruct{
    public:
    destruct(){
        count++;
        cout<<"No. of objects created: "<<count<<endl;
    }
    ~destruct(){
        count--;
        cout<<"No. of objects created: "<<count<<endl;
    }
    };
    
int main(){
    destruct aa,bb,cc;
    
    return 0;
}

/*OUTPUT
No. of objects created: 1
No. of objects created: 2
No. of objects created: 3
No. of objects created: 2
No. of objects created: 1
No. of objects created: 0
*/

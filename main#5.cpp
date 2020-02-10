#include <iostream>
#include <cmath>
using namespace std;
void getDim(double& radius);
void getDim(double& length,double& width);
void getDim(double& side1,double& side2,double& side3);
double area(double radius);
double area(double length,double width);
double area(double side1,double side2,double side3);
double perimeter(double radius);
double perimeter(double length,double width);
double perimeter(double side1,double side2,double side3);
void display(double areaVal,double perimeterVal);
const double PI=3.141592654;
int main()
{
    double radius,length,width,side1,side2,side3,areaVal,perimeterVal;
    int selection;
    bool tF=1;
    do{
        cout<<"AREA/PERIMETER CALCULATOR\n"
        <<"Select a shape:\n"
        <<"Circle (1) Rectangle (2) Triangle (3) Exit (4)\n"
        <<"Enter selection=>";
        cin>>selection;
        if(selection==1){
            getDim(radius);
            areaVal=area(radius);
            perimeterVal=perimeter(radius);
            cout<<"Circle area = ";
            display(areaVal,perimeterVal);
            cout<<endl;
        }
        else if(selection==2){
            getDim(length,width);
            areaVal=area(length,width);
            perimeterVal=perimeter(length,width);
            cout<<"Rectangle = ";
            display(areaVal,perimeterVal);
            cout<<endl;
        }
        else if(selection==3){
            getDim(side1,side2,side3);
            areaVal=area(side1,side2,side3);
            perimeterVal=perimeter(side1,side2,side3);
            cout<<"Triangle = ";
            display(areaVal,perimeterVal);
            cout<<endl;
        }
        else if(selection==4){
            cout<<"Bye...";
            tF=0;
            cout<<endl;
        }
        else{
            tF=0;
            cerr;
            cout<<endl;
        }
        cout<<endl;
    }while(tF==1);
    return 0;
}

void getDim(double& radius){
    cout<<"Enter circle radius:";
    cin>>radius;
}void getDim(double& length,double& width){
    cout<<"Enter rectangle length:";
    cin>>length;
    cout<<"Enter rectangle width:";
    cin>>width;
}
void getDim(double& side1,double& side2,double& side3){
    cout<<"Enter 1st side of triangle:";
    cin>>side1;
    cout<<"Enter 2nd side of triangle:";
    cin>>side2;
    cout<<"Enter 3rd side of triangle:";
    cin>>side3;
}
double area(double radius){
    return(PI*radius*radius);
}
double area(double length,double width){
    return(length*width);
}
double area(double side1,double side2,double side3){
    double s;
    s=(side1+side2+side3)/2.0;
    return(sqrt(s*(s-side1)*(s-side2)*(s-side3)));
}
double perimeter(double radius){
    return(2.0*PI*radius);
}
double perimeter(double length,double width){
    return(2.0*length+2.0*width);
}
double perimeter(double side1,double side2,double side3){
    return(side1+side2+side3);
}
void display(double areaVal,double perimeterVal){
    cout<<areaVal<<" and perimeter = "<<perimeterVal;
}

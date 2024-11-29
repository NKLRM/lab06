#include <iostream>
#include <cmath>
double pi = 2* acos(0.0);
using namespace std;

double deg2rad(double deg){
    double y=pi/180.0*deg;
    return y;
}

double rad2deg(double rad){
    double y=180.0/pi*rad;
    return y;
}

double findXComponent(double l1,double l2,double a1,double a2){
    double y=l1*cos(a1)+l2*cos(a2);
    return y;
}

double findYComponent(double l1,double l2,double a1,double a2){
    double y=l1*sin(a1)+l2*sin(a2);
    return y;
}

double pythagoras(double xcomp,double ycomp){
    double y=sqrt(pow(xcomp,2)+pow(ycomp,2));
    return y;
}

void showResult(double len,double direc){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << len << "\n";
    cout << "Direction of the resultant vector (deg) = " << direc << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}

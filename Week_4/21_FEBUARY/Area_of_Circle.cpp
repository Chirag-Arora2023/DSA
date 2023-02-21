#include<iostream>
using namespace std;

float areaCircle(float rad){
    float area = 3.14 * rad * rad;
    return area;
}

int main(){
    float rad;
    cout<<"Enter the radius "; cin>>rad;

    cout<<"The area of the circle is " << areaCircle(rad);

    return 0;
}
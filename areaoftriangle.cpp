#include <iostream>
using namespace std;
float area(int h, int b) {   
    float a;                
    a = (h * b) / 2.0;      
    return a;           
}
int main() {
    float h, b;
    cout<<"Enter height: ";
    cin>>h;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"Area of triangle = "<< area(h,b);
     return 0;
}
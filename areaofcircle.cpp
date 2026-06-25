#include <iostream>
using namespace std;
float circle(float r) {  
    float pi = 3.14159;  
    float area;
    area = pi * r * r;   
    return area;         
}
int main() {
    float radius;
    cout<<"Enter radius: ";
    cin>>radius;
 cout<<"Area of circle = "<<circle(radius);
    return 0;
}
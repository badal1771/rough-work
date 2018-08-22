#include <iostream>
using namespace std;
int main()
{
float a,area;
//enter side length of equilateral triangle 
cout<<"enter the side length of equilateral traingle" << "\n";
//store the value in 1a
cin >> a ;
//calculate the value of area with the help of side of equilateral traingle 
area = (a*a*sqrt(3)/4);
//print the terminal
cout <<"area of equilateral traigle" << area <<"\n";
return 0;
}

Q4. WAP for finding the volume of the cylinder by taking radius and height as input.
ANS
#include<iostream>
using namespace std;
int main() {
   int r,h;
   cout<<"Enter radius and height of cyliner";
   cin>>r>>h;
   float vol=3.14*r*h;
   cout<<"Volume of cylinder = "<<vol;
return 0;
}
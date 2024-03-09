Q5. WAP to find the difference between ASCII of two characters ,take them as input .

ANS
#include<iostream>
using namespace std;
int main() {
   char r,h;
   cout<<"Enter 2 characters ";
   cin>>r>>h;
   int x=(int)r;
   int y=(int)h;
   int diff;
   if(x>y) diff=x-y;
   else diff=y-x;
   cout<<diff;
return 0;
}
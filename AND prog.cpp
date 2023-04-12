#include <iostream>
using namespace std;
int main(){
   int num;
   cout<<"Enter an integer number starts from 1 and between  10000: ";
   cin>>num;
   if(num <100 && num>=1) {
      cout<<"Its a two digit number";
   }
   else if(num <1000 && num>=100) {
      cout<<"Its a three digit number";
   }
   else if(num <10000 && num>=1000) {
      cout<<"Its a four digit number";
   }
  
   else {
      cout<<"number is not between 1 & 99999";
   }
   return 0;
}

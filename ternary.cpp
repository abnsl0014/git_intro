#include<iostream>
#include<conio.h>
using namespace std;
int countBits(int n){
      //set bits count
      int cnt=0;
      while(n>0)
      {
          cnt+=(n&1);
          n=n>>1;
      }
      return cnt;
  }
int main()
{
  int n=20;
 
  //n%7==0? "yes":"no
  cout<<countBits(n);
   //this is the final vanishing part , we are going to include in master branch
  ///left shift , right shift
  //n&1 //gives last digit
   (n&1)? cout<<"yes":cout<<"no";
}

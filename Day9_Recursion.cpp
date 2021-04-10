#include<iostream>
using namespace std;

int factorial(int n)
{
 if(n>1)
 {
   return n*factorial(n-1);
 }
  else
  {
    return 1;
  }
}

int main()
{
  int num,result=0;
  cin>>num;
  result = factorial(num);
  cout<<result;
  return 0;
}

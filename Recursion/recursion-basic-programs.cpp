#include <iostream>
using namespace std;

void printcount(int n){
  if(n==0)return ;
  printcount(n-1);
  cout<<n<<" ";
}
int fact(int n ){
  if(n==1) return 1;
  int ans =  n * fact(n-1);
  return ans;
}

int fib(int n){
  if(n==1)return 0;
  if(n==2)return 1;

  return fib(n-1) + fib(n-2);
}

int power(int n){
  if(n==0) return 1;
  return 2*power(n-1);
}

int climb(int n){
  if(n==0)return 1;
  if(n==1)return 1;
  return climb(n-1) + climb(n-2);
}

int main() {
   int n=5;
   cout<<"Printing counting: ";
  printcount(n);
  cout<<endl;
  cout<<"printing Factorial: "<<fact(n)<<endl;
  cout<<"Printing fibonacci: "<<fib(n)<<endl;
  cout<<"Printing 2^n: "<<power(n)<<endl;
  cout<<"no. of ways to climb stairs: "<<climb(n)<<endl;

  return 0;
}
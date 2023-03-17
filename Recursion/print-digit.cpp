#include <iostream>
using namespace std;

void printDigit(int num){
    if(num<=0)return ;
    int digit=num%10;
    printDigit(num/10);
    cout<<digit<<" ";
}

int main() {
    int num=283249820;
    printDigit(num);
  return 0;
}
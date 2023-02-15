#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age : ";  cin>>age;
    if(age<18)
    cout<<"You are a student, you shuld focus on studies ";

    else if(age>=18  &&  age<30)
    cout<<"You are young and at a very critical age, your actions are a double edged sword , so learn to wield it.";
    
    else cout<<"You are a mature and experienced person who has seen the world";

return 0;
}
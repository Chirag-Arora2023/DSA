#include<iostream>
using namespace std;

int main(){
    int screentime;
    cout<<"Enter your daily screentime in hours:"<<endl;
    cin>>screentime;

    switch (screentime)
    {
    case 0:
        cout<<"You are one of a kind or you are lying.";
        break;
    case 2:
        cout<<"You have a healthy lifestyle";
        break;
    case 3:
        cout<<"You have a healthy lifestyle";
        break;
    case 4:
        cout<<"You need to focus on a healthy lifestyle";
        break;
    case 5:
        cout<<"You need to focus on a healthy lifestyle";
        break;
    case 6:
        cout<<"You need to focus on a healthy lifestyle";
        break;
    case 7:
        cout<<"You need to focus on a healthy lifestyle";
        break;
    
    default: cout<<"You should introspect";
        break;
    }
}
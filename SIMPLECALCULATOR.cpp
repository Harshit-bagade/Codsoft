/*SIMPLE CALCULATOR*/
#include<iostream>
using namespace std;
int main()
{
    char ch;
    double a,b;
    // cout<<"Enter the value of number 1 and number 2"<<endl;
    cout<<"Enter the value of number 1"<<endl;
    cin>>a;
    cout<<"Enter the value of number 2"<<endl;
    cin>>b;
    cout<<"Enter an operator:'+','-','*','/'"<<endl;
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<< a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    
    // when operator is not correct
    default:
        cout<<"Error! operator is not correct"<<endl;
    }
     return 0;
}
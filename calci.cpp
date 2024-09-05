#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,choice;
    cout<<"Enter two integers"<<endl;
    cin>>a;
    cin>>b;
    choice=0;
    cout<<"1. Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulus\n";
    cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<a+b<<endl;
        break;
        case 2:
        cout<<a-b<<endl;
        break;
        case 3:
        cout<<a*b<<endl;
        break;
        case 4:
        cout<<a/b<<endl;
        break;
        case 5:
        cout<<a%b<<endl;
        break;
    
    default:
    cout<<"Error"<<endl;
        break;
    }


    return 0;

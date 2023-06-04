#include<iostream>
using namespace std;
void max(int a , int b);

int main()
{ int m,n;
cout<<"enter first number";
cin>>m;
cout<<"enter second number";
cin>>n;
max(m,n);
    return 0;
}
void max (int a , int b)
{
if (a>b)
cout<<"a is greater";
else
cout<<"b is greater";
}

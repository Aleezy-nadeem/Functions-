#include<iostream>
using namespace std;
void table(int a);

int main()
{ int m;
cout<<"enter the number";
cin>>m;

table (m);
return 0;
}
void table (int a)
{
for (int b=1; b<=10; b++)
{ cout<<a<<"*"<<b<<"="<<a*b<<endl;
}
}
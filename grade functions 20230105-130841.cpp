#include<iostream>
using namespace std;
char grade(int a);

int main()
{
int marks;
char g;
cout<<"enter the marks";
cin>>marks;
g=grade(marks);
cout<<g;
return 0;
}
  char grade (int a)
{
if(a>=85)
return 'A';
else if(a>=70)
return 'B';
else if(a>=60)
return'C';
else if(a>=50)
return'D';
else
return 'F';
}
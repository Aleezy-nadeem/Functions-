#include<iostream>
using namespace std;
int fic(int n, int f);

int main()
{ int b,a;
cout<<"enter the number";
cin>>b;
fic(b, a);
return 0 ;
}
int fic (int n , int f)
{
 for(int c=1; c<=n; c++)
{
f=f*c;
}
cout<<"fictorial of this="<<f;
return f ;

}



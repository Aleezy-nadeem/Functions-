#include<iostream>
using namespace std;
void sign (int a, char ch);
int main()
{
    int x;
    char y;
    cout<<"enter the number";
    cin>>x;
    cout<<"enter the character";
    cin>>y;
    sign (x,y);
    return 0 ;
}
void sign (int a, char ch)
{
    for(int d=1; d<=a; d++)
    {
        for(int g=1; g<=a; g++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}

#include<iostream>
using namespace std;
void swap(int &a,int &b,int &c)
{
    int temp;
    temp=a;
    a=b;
    b=c;
    c=temp;
}
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers"<<endl;
    cout<<"a"<<endl;
    cout<<"b"<<endl;
    cout<<"c"<<endl;
    cin>>a>>b>>c;
    swap(a,b,c);
    cout<<"Down is swapped!"<<endl;
    cout<<a<<b<<c;
    return 0;
}
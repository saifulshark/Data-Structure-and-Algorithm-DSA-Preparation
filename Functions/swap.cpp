// There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it without using Function
#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int b=9;
    int c=11;
    int x;
    int k=100;
    int l=200;
    swap(k,l);
    cout<<k<<l<<endl;
    x=a;
    a=b;
    b=c;
    c=x;
    cout<<a<<b<<c;
    return 0;
}
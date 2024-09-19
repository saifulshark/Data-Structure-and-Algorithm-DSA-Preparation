#include<iostream>
using namespace std;
int fact(int x)
{
    int fact=1;
    for(int i=x;i>=1;i--)
    fact*=i;
    return fact;
}
int combination(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n,r;
    cout<<"Enter the value of nCr:n,r?"<<endl;
    cin>>n>>r;
    cout<<"The result of nCr is:"<<combination(n,r);
    return 0;
}
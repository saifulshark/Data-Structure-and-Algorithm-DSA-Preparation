#include<iostream>
using namespace std;
int cube(int a)
{
    return a*a*a;
}
int main()
{
    int x;
    cout<<"Enter the Number to cal. cube:"<<endl;
    cin>>x;
    cout<<"Answer of Cube is:"<<cube(x);
    return 0;
}
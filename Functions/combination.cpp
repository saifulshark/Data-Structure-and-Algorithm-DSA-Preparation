// #include<iostream>
// using namespace std;
// int combination(int n,int r)
// {
//     return n
// }
// int main()
// {
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"Enter a num for factorial!:";
    cin>>n;
    for(int i=n;i>=1;i--)
    {  
        fact*=i;
    }
    cout<<fact;
    return 0;
}
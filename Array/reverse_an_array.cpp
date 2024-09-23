//reversing an array using a temporary variable
#include<iostream>
using namespace std;
int main()
{   int j=0;
    int arr[6]={8,9,0,8,15,21};
    int temp[6];
    for(int i=5;i>=0;i--)
    {
        temp[j]=arr[i];
        j++;

    }
    for(int i=0;i<=5;i++)
    cout<<temp[i]<<" ";
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int arr[7]={122,43,-1,+0,-0,8,3};
    for(int i=0;i<6;i++)
    {
        int index=i;
        for(int j=i+1;j<7;j++)
        {
            if(arr[j]>arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
void fun(int a[],int n)
{
    cout<<sizeof(a)<<endl;//From 8GB ram, //here may be used 4GB(as per settings of processing)// architechture of processor has two type:-
    //32-bit(4*8-bit=4byte of memory alloc) and 64-bit(8*8-bit=8byte of memory alloc);
    //here my processor's memory alloc is 4byte(32-bit)
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int arr[10]={12,14,15,17,19,1,3,5,9,10};
    cout<<sizeof(arr)<<endl;//size of array will be determine by number of arrays(10)*size of an array(4;for int)=40;
    fun(arr,15);
    return 0;
}
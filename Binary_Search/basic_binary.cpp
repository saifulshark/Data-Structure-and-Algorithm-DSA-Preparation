//howdy?
#include <iostream>
#include <array>
using namespace std;
int main(){
    int arr[]={2,3,5,10,15};
    int key=2;
    int mid,start=0,end=(sizeof(arr)/sizeof(arr[0])-1);

    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        {
            cout<<"Got it the number is:"<<arr[mid]<<"\nand index is:"<<mid;
            break;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        start=mid+1;
    
    if(start>end)
    {
        cout<<"Key is not in the Array!";
    }
    }
    return 0;
}
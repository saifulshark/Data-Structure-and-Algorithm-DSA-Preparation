//fibonacci number determining via array;enter the position of an fibonacci series's then my program calculate the answer.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of position of fibonacci series:"<<endl;
    cin>>n;
    int arr[100];
    /*for fixed mannner of the program here is first two numbers are: 
    first number=0;
    second number=1;
    */
   arr[0]=0;
   arr[1]=1;
   for (int i = 2; i <=n-1; i++)
   {
    arr[i]=arr[i-1]+arr[i-2];
   }
   cout<<arr[n-1]<<" "<<endl;
    return 0;
}
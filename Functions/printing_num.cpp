#include<iostream>
using namespace std;
void printing(int n){
    for(int i=0;i<=n;i++)
    {
        cout<<i<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number 'n':";
    cin>>n;
    printing(n);
    return 0;
}
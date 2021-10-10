#include <iostream>
using namespace std;
int main()
{
    int n,i,size,key,j,k,flag=0;
    cout<<"enter the number of test cases ";
    cin>>n;
    for(i=0;i<n;i++)
    {
       cout<<"enter the size of the array ";
       cin>>size;
       int a[size];
       cout<<"enter array elements ";
       for(j=0;j<size;j++)
        cin>>a[j];
       cout<<"enter the key element ";
       cin>>key;
       for(j=0;j<size-1;j++)
       {
           for(k=j;k<size;k++)
           {
               if(a[j]+a[k]==key)
               {
                cout<<a[j]<<" "<<a[k]<<","<<" ";
                flag=1;
               }
           }
       }
       if(flag==0)
        cout<<"no such pair exists";
    }
}
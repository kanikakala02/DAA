#include <iostream>
using namespace std;
int main()
{
    int n,i,k,flag=0,c=0;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key element"<<endl;
    cin>>k;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
         cout<<"element found";
         flag=1;
         break;
        }
        else
            c++;
    }
    if(flag==0)
        cout<<"element not found";
    cout<<"total comparisons "<<c;
}

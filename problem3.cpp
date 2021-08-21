#include <iostream>
using namespace std;
void sorting(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n,i,j,flag=0,size;
    cout<<"enter the number of test cases ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the size of array ";
        cin>>size;
        int a[size];
        cout<<"enter the array elements ";
        for( j=0;j<size;j++)
         cin>>a[j];
        sorting(a,size);
        for( j=0;j<size;j++)
        {
            if(a[j]==a[j+1])
            {
                flag=1;
                cout<<"YES";
                break;
            }
        }
    }
    if(flag==0)
     cout<<"NO";
}
#include <iostream>
using namespace std;
int partition(int *a,int l,int r)
{
    int pivot=a[r];
    int i=l-1;
    for(int j=l;j<=r-1;j++)
    {
        if(a[j]<pivot)
         {
             i++;
             int temp=a[j];
             a[j]=a[i];
             a[i]=temp;
         }
    }
   int  temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    return (i+1);
}
void ksort(int *a,int l,int r,int k)
{
    if(l<r)
    {
    int p=partition(a,l,r);
    if(k<p)
     ksort(a,l,p-1,k);
    else
     ksort(a,p+1,r,k);
    }
}
int main()
{
    int n,i,size,j,k;
    cout<<"enter the number of test cases ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the size of the array ";
        cin>>size;
        int a[size];
        cout<<"enter the array elements ";
        for(j=0;j<size;j++)
         cin>>a[j];
        cout<<"enter the value of k ";
        cin>>k;
        ksort(a,0,size-1,k-1);
          cout<<a[k-1]<<" ";
    }
}

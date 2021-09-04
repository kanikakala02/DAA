#include <iostream>
using namespace std;
int partition(int a[],int l,int r)
{
    int x=rand()%(r-l+1)+l;
    int temp=a[x];
    a[x]=a[r];
    a[r]=temp;
    int pivot=a[r];
    int i=l-1;
    for(int j=l;j<=r-1;j++)
    {
        if(a[j]<pivot)
         {
             i++;
             temp=a[j];
             a[j]=a[i];
             a[i]=temp;
         }
    }
    temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
    return (i+1);
}
void quicksort(int a[],int l,int r)
{
    if(l<r)
    {
        int p=partition(a,l,r);
        quicksort(a,l,p-1);
        quicksort(a,p+1,r);
    }
}
void print(int a[],int size)
{
  for(int i=0;i<size;i++)
   cout<<a[i]<<" ";
}
int main()
{
  int n,i,j,size;
  cout<<"enter the test cases ";
  cin>>n;
  for(i=0;i<n;i++)
  {
     cout<<"enter the size of array ";
     cin>>size;
     int a[size];
     cout<<"enter array elements ";
     for(j=0;j<size;j++)
      cin>>a[j];
    quicksort(a,0,size-1);
    print(a,size);
  }
}
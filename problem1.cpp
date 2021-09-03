#include <iostream>
using namespace std;
void mergesort(int a[],int l,int mid,int r)
{
  int n1=mid-l+1;
  int n2=r-mid;
  int left[n1],right[n2];
  int i,j;
  for(i=0;i<n1;i++)
   left[i]=a[l+i];
  for(j=0;j<n2;j++)
   right[j]=a[mid+1+j];
  i=0,j=0;
  int k=l;
  while(i<n1 && j<n2)
  {
    if(left[i]<=right[j])
    {
      a[k]=left[i];
      k++;
      i++;
    }
    else
    {
      a[k]=right[j];
      k++;
      j++;
    }
  }
  while(i<n1)
  {
    a[k]=left[i];
    k++;
    i++;
  }
  while(j<n2)
  {
    a[k]=right[j];
    k++;
    j++;
  }
}
void merge(int a[],int l,int r)
{
  if(l<r)
  {
    int mid=(l+r)/2;
    merge(a,l,mid);
    merge(a,mid+1,r);
    mergesort(a,l,mid,r);
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
    merge(a,0,size-1);
    print(a,size);
  }
}
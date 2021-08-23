#include <iostream>
using namespace std;
void insertsort(int a[],int n)
{
    int i,j,t,c=0,flag=0,s=0;
    for(i=1;i<n;i++)
    {
        j=i-1;
        t=a[i];
        flag=0;
        while(j>=0 && a[j]>t)
        {
            s++;
            flag=1;
            a[j+1]=a[j];
            j=j-1;
            c++;
        }
        if(flag==1)
        {
          a[j+1]=t;
          c++;
        }
    }
    for(i=0;i<n;i++)
     cout<<a[i]<<" ";
    cout<<endl<<"no of shifts "<<c;
    cout<<endl<<"no of comparisons "<<s;
}
int main()
{
    int n,i,j,size;
    cout<<"enter the  umber of test cases ";
    cin>>n;
    for(i=0;i<n;i++)
    {
       cout<<"enter the size of array ";
       cin>>size;
       int a[size];
       cout<<"enter array elements ";
       for(j=0;j<size;j++)
         cin>>a[j];
       insertsort(a,size);
    }
}
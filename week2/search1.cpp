#include <iostream>
using namespace std;
int search1(int a[], int high,int key)
{
    int low=0,mid,n=high,c=0,i,prev_mid,l,f,k=0;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            cout<<a[mid]<<" ";
            i=mid;
            while(a[i-1]==key)
            {
                c=1;
                i--;
                f=i;
            }
            i=mid;
            while(a[i+1]==key)
            {
                k=1;
                i++;
                l=i;
            }
            if(c==1&&k==1)
             return (l-f+1);
            else if(c==0&&k==1)
             return(l-mid+1);
            else if(c==1&&k==0)
             return(mid-f+1);
        }
        if(key>a[mid])
         low=mid+1;
        if(key<a[mid])
         high=mid-1;
        prev_mid=mid;
    }

    return c;
}
int main()
{
   int n,i,key,high,j;
   cout<<"enter the number of test cases ";
   cin>>n;
   for(i=0;i<n;i++)
   {
     cout<<"enter size of array ";
     cin>>high;
     int a[high];
     cout<<"enter array elements ";
     for(j=0;j<high;j++)
      cin>>a[j];
     cout<<"enter the key element ";
     cin>>key;
     int p=search1(a,high,key);
     cout<<p;
   }
}
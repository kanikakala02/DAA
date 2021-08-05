#include <iostream>
using namespace std;
void binarySearch(int a[],int key,int len)
{
    int l=0,r=len-1,i,c=0,mid;
    while(l<r)
    {
        c++;
        mid=l+(r-l)/2;
        if(a[mid]==key)
        {
            cout<<"present "<<c<<endl;
            break;
        }

        if(a[mid]<key)
            l=mid+1;
        if(a[mid]>key)
            r=mid+1;
    }
}
int  main()
{
    int n,key,len,i,j;
    cout<<"enter the number of test cases ";
    cin>>n;
    for(i=0;i<n;i++)
    {
      cout<<"enter the key ";
      cin>>key;
      cout<<"enter the array size ";
      cin>>len;
      int a[len];
      cout<<"enter the array elements ";
      for(j=0;j<len;j++)
         cin>>a[j];
      binarySearch(a,key,len);
    }
}

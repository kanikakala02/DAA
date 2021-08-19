#include <iostream>
using namespace std;
void diff(int a[],int n,int key)
{
   int i,j,k,flag=0,c=0;
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
          if(a[i]-a[j]==key || a[j]-a[i]==key)
          {
              flag=1;
              c++;
          }
       }
   }
   if(flag==1)
   cout<<c;
   if(flag==0)
   cout<<"no pair found";
   return;
}
int main()
{
    int n,i,size,j,key;
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
        cout<<"enter the key element ";
        cin>>key;
        diff(a,size,key);
    }
}
#include <iostream>
using namespace std;
void index(int a[],int n)
{
   int i,j,k,flag=0;
   for(i=0;i<n-2;i++)
   {
       for(j=i+1;j<n-1;j++)
       {
           for(k=j+1;k<n;k++)
           {
               if(a[i]+a[j]==a[k])
               {
               cout<<i+1<<" "<<j+1<<" "<<k+1;
               flag=1;
               return;
               }
           }
       }
   }
   if(flag==0)
   cout<<"no sequence found";
   return;
}
int main()
{
    int n,i,size,j;
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
        index(a,size);
    }
}
#include <iostream>
using namespace std;
int main()
{
    int p,n,m,j,i,k;
    cout<<"enter the number of test cases ";
    cin>>p;
    for(i=0;i<p;i++)
    {
      cout<<"enter the size of first array ";
      cin>>n;
      int a1[n];
      cout<<"enter the array elements in sorted order ";
      for(j=0;j<n;j++)
       cin>>a1[j];
      cout<<"enter the size of second array ";
      cin>>m;
      int a2[m];
      cout<<"enter the array elements in sorted order ";
      for(j=0;j<m;j++)
       cin>>a2[j];
       j=0,k=0;
      while(k<n || j<m)
      {
          if(a1[k]==a2[j])
          {
              cout<<a1[k]<<" ";
              k++;
              j++;
          }
          if(a1[k]<a2[j])
           k++;
          if(a2[j]<a1[k])
           j++;
      }
    }
}
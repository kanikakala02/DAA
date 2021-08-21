#include <iostream>
using namespace std;
void selectsort(int a[],int n)
{
    int i,j,temp,c=0,k=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            k++;
            if(a[i]>a[j])
            {
              c++;
              temp=a[i];
              a[i]=a[j];
              a[j]=temp; 
     
            }
        }
    }
    for(i=0;i<n;i++)
     cout<<a[i]<<" ";
    cout<<endl<<"comparisons "<<k;
    cout<<endl<<"swaps "<<c;
}
int main()
{
    int n,i,size,j;
    cout<<"enter the number of test cases ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the size of array ";
        cin>>size;
        int a[size];
        cout<<"enter the array elements ";
        for(j=0;j<size;j++)
         cin>>a[j];
        selectsort(a,size);
    }
}
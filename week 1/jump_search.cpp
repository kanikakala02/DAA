#include<iostream>
#include<cmath>
using namespace std;
void jumpSearch(int a[],int len,int key)
{
    int jump= sqrt(len);
    int prev=0,c=0,i,flag=0;
    for(i=0;i<len;i++)
    {
        c++;
        if(a[jump]<key)
        {
            prev=jump;
            jump=jump+sqrt(len);
        }
        else
            break;
    }
    if(jump==len)
        jump=jump-1;
    cout<<jump<<" "<<prev;

    for(i=prev;i<=jump;i++)
    {
        c++;
        if(a[i]==key)
        {
            cout<<a[i]<<endl;
            flag=1;
            cout<<"present "<<c;
            break;
        }
    }
    if(flag==0)
        cout<<"not present "<<c;
}
int main()
{
    int n,i,key,j,len;
    cout<<"enter the number of test cases ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the size of array ";
        cin>>len;
        int a[len];
        cout<<"enter the key element ";
        cin>>key;
        cout<<"enter the array elements ";
        for(j=0;j<len;j++)
            cin>>a[j];
        jumpSearch(a,len,key);
    }
}

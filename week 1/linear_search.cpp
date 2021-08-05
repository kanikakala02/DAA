#include <iostream>
using namespace std;
void linearSearch(int a[],int len,int key)
{
    int i,c=0;
    for(i=0;i<len;i++)
    {
        c++;
        if(a[i]==key)
        {
            cout<<"present";
            break;
        }
    }
    cout<<c;
}
int main()
{
    int n,i,key,len,j;
    cout<<"enter the number of test cases ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter the key element ";
        cin>>key;
        cout<<"enter the array size ";
        cin>>len;
        int a[len];
        cout<<"enter the array elements ";
        for(j=0;j<len;j++)
            cin>>a[j];
        linearSearch(a,len,key);
    }
}

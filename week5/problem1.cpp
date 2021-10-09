#include <iostream>
using namespace std;

int main()
{
    int n, i, size, j, c = 0,k,index;
    cout << "enter the number of test cases ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "enter the size of character array ";
        cin >> size;
        char a[size + 1];
        int b[26];
        cout << "enter the characters ";
        cin >> a;
        for (j = 0; j < 26; j++)
            b[j] = 0;
        for (j = 0; j < size; j++)
        {
            int q = int(a[j]);
            if (b[q - 97] == 0)
            {
                c = 0;
                for (k = 0; k < size; k++)
                {
                    if (a[k] == a[j])
                        c++;
                }

                b[q - 97] = c;
            }
        }
        int max = b[0];
        for (j = 0; j < 26; j++)
        {
            if (b[j] > max)
            {
                max = b[j];
                index = j;
            }
        }
        if(max==1)
            cout<<"no duplicates present";
        else
        cout <<char(97+index)<<" "<< max;
    }
}
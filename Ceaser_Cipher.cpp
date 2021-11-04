#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char arr[n];
    cin >> arr;

    int shift;
    cin >> shift;

    char upper[26];
    char lower[26];

    for(int i=0;i<26;i++)
    {
        upper[i]=65+i;
        lower[i]=97+i;
    }

    for(int i=0;i<n;i++)
    {
        if(isupper(arr[i]))
        {
            int temp = arr[i] -65;
            temp = (temp + shift) %26;

            cout << "For arr[i] = " << arr[i] << " the value of temp is : " << temp << endl;
            if(temp==0)
            {
                arr[i] = upper[25];
            }
            else
            {
                arr[i] = upper[temp];
            }
        }
        else if(islower(arr[i]))
        {
            int temp = arr[i] - 97;
            temp = (temp + shift) %26;

            cout << "For arr[i] = " << arr[i] << " the value of temp is : " << temp << endl;
            if(temp==0)
            {
                arr[i] = lower[25];
            }
            else
            {
                arr[i] = lower[temp];
            }
        }
    }

    cout << arr;
}

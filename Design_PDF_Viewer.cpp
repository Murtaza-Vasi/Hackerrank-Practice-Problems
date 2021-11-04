#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int arr[26];
    string str;
    int max_height;

    for(int i=0;i<26;i++)
        cin >> arr[i];

    cin >> str;

    max_height = arr[str[0]-97];

    for(int i=1;i<str.length();i++)
    {
        if(max_height < arr[str[i]-97])
            max_height= arr[str[i]-97];
    }

    cout << max_height * (str.length());
}

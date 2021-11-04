#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    long counter=1;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
            counter++;
    }

    cout << counter;
}

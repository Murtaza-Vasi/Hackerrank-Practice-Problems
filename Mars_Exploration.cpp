#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cin >> str;

    string msg = "SOS";
    int counter=0;

    for(int i=0;i<str.length();i++)
    {
        if(str[i] != msg[i%3])
            counter++;
    }

    cout << counter;
}

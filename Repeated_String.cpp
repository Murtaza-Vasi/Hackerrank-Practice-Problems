#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    long int n,counter=0;
    cin >> s;
    cin >> n;

    for(int i=0;i<=s.length();i++)
    {
        if(s[i]=='a')
        {
            counter++;
        }
    }

    if(n%s.length()==0)
    {
        counter = counter *(n/s.length());
    }
    else
    {
        int temp,ans=0;
        temp = n%s.length();
        for(int j=0;j<temp;j++)
        {
            if(s[j]=='a')
            {
                ans++;
            }
        }

        counter = counter * (n/s.length()) + ans;
    }

    cout << counter;
}

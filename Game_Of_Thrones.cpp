#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    cout << "The length of the string is: " << s.length() << endl;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << "The string after sorting is : " << s << endl;

    if(s.length() % 2==0)
    {
        int counter=0;
        int flag=0;

        for(int i=0;i+1<s.length();i++)
        {

            cout << "Comparing s[i] : " << s[i] << " and s[i+1] " << s[i+1] << endl;
            if(s[i] == s[i+1])
            {
                i++;
                counter+=2;
            }
            else
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        int counter=0;
        int flag=0;
        for(int i=0;i+1<s.length();i++)
        {
            cout << "Comparing s[i] : " << s[i] << " and s[i+1] " << s[i+1] << endl;
            if(s[i] == s[i+1])
            {
                i++;
                counter+=2;
            }
            else if(flag!=1)
            {
                flag=1;
            }
            else
            {
                flag=2;
                break;
            }
        }

        if(flag==0)
        {
            cout  << "YES";
        }
        else if(flag==1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

    }
}

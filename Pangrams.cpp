#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int counter=0;

    if(s.length()>=26)
    {
        for(int i=0;i<s.length();i++)
        {
            if(isupper(s[i]))
            {
                s[i] = s[i] + 32;
            }
        }

        for(int i=0;i<s.length();i++)
        {
            for(int j=i+1;j<s.length();j++)
            {
                if(s[i]>s[j])
                {
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }

        int temp,j;
        char compare ='a';
        for(int i=0;i<s.length();i++)
        {
            while(isspace(s[i]))
                i++;

            if(isalpha(s[i]))
            {
                if(s[i] == compare)
                {
                    counter++;
                    while(s[i] == s[i+1])
                    {
                        i++;
                    }
                }
                compare++;
            }
        }

        if(counter==26)
        {
            cout << "pangram";
        }
        else
        {
            cout << "not pangram";
        }
    }
    else
    {
        cout << "not pangram" << endl;
    }
}

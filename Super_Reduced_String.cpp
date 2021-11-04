#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    int i,j;

    for(int j=0;j<2;j++)
    {
        for(i=0;i<len;i++)
        {
            if(s[i] == s[i+1])
            {
                s.erase(i,2);
                i--;
            }
            cout << s << endl;
        }
    }

    if(s.length()!=0)
    {
        cout << s;
    }
    else
    {
        cout << "Empty String";
    }
}

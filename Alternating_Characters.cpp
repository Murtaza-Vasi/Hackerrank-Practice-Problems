#include<iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;

    string s;
    int deletions;
    for(int i=0;i<q;i++)
    {
        cin >> s;
        deletions=0;

        for(int j=0;j+1<s.length();j++)
        {
            if(s[j] == s[j+1])
            {
                deletions++;
            }
        }

        cout << deletions << endl;
    }
}

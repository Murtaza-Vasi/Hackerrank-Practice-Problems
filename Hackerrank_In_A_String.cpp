#include<iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;

    string s;
    string compare = "hackerrank";
    for(int i=0;i<q;i++)
    {
        cin >> s;
        int k=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j] == compare[k])
            {
                k++;
            }
        }

        if(k == compare.length())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

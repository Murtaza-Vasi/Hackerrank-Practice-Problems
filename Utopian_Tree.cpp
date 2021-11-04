#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin >> t;

    for(int i=0;i<t;i++)
    {
        cin >> n;
        int ans=0;
        for(int i=0;i<=n;i++)
        {
            if(i%2==0)
            {
                ans+=1;
            }
            else
            {
                ans*=2;
            }
        }
        cout << ans << endl;
    }

}

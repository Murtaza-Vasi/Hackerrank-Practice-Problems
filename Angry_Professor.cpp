#include<iostream>
using namespace std;

int main()
{
    int t,n,threshold;
    cin >> t ;

    for(int j=0;j<t;j++)
    {
        cin >> n >> threshold;

        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];

        int count=0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]<=0)
                count++;
        }

        if(count>=threshold)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}

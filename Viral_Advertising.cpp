#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cumalative =0;
    int liked;
    int recepiants=5;

    for(int i=1;i<=n;i++)
    {
        liked = recepiants/2;
        cumalative += liked;
        recepiants = (recepiants/2) *3 ;
    }

    cout << cumalative ;
}

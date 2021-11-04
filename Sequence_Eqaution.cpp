#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int i,j;
    for(int i=0;i<n;i++)
        cin >> arr[i];

    for(int key=1;key<=n;key++)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
                break;
            }
        }

        for(j=0;j<n;j++)
        {
            if(i+1==arr[j])
            {
                break;
            }
        }

        cout << j+1 << endl;
    }
}

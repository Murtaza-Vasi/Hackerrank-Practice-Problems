#include<iostream>
using namespace std;

int main()
{
    long int n;
    cin >> n;

    long int arr[n];
    for(long int i=0;i<n;i++)
        cin >> arr[i];

    for(long int i=0;i<n-i;i++)
    {
        for(long int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
                swap(arr[i],arr[j]);
        }
    }

    cout << arr[n/2];
}

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] >  arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    int max = 0;
    for(int i=0;i<n;i++)
    {
        int temp=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                temp++;
            }
            else
                break;
        }

        if(max < temp)
            max=temp;

    }
        cout << n-max;
}

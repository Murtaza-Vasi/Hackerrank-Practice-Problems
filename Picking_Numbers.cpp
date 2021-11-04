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
            if(arr[i] > arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }

    int counter=1;
    int max =0 ;
    for(int i=0;i<n;i++)
    {
        counter = 1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j] || arr[j] == arr[i] + 1)
            {
                counter++;
            }
            else if(counter!=0)
                break;
        }

        if(max < counter)
        {
            max = counter;
        }
    }

    cout << max ;
}

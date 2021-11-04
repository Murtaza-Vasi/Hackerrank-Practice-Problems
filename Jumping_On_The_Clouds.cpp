#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int number_of_steps=0;

    for(int i=0;i<n;i++)
        cin >> arr[i];

    for(int i=0;i<n;i++)
    {
        if(arr[i+2]==0)
        {
            number_of_steps++;
            i++;
            continue;
        }
        else
        {
            number_of_steps++;
            continue;
        }

    }

    cout << number_of_steps-1;
}

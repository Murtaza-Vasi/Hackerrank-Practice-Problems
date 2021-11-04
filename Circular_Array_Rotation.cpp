#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,rotations,no_of_query;
    int temp,i;
    cin >> n >> rotations >> no_of_query;

    vector <int> vec;
    for(i=0;i<n;i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }

    for(i=0;i<no_of_query;i++)
    {
        cin >> temp;
        cout << vec[(temp - (rotations %n) + n)%n] << endl;
    }
}

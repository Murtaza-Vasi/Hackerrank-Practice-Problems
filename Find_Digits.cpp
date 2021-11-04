#include<iostream>
using namespace std;

int main()
{
    long long int t,i;
    long long int no_of_prisoners;
    long long int no_of_candy;
    long long int num;

    cin >> t ;

    for(long long int j=0;j<t;j++)
    {
        cin >> no_of_prisoners >> no_of_candy >> num ;

        num = num + no_of_candy - 1;

        if(num%no_of_prisoners==0)
            cout << num/no_of_prisoners << endl;
        else
            cout << num%no_of_prisoners << endl;
    }
}

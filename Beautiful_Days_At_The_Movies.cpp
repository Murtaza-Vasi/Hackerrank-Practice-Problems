#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int starting_day,ending_day,divisor;
    cin >> starting_day >> ending_day >> divisor;

    int temp=0,n,digits=0,count=0;
    for(int i=starting_day;i<=ending_day;i++)
    {
        //finding out the number of digits in the selected number
        n=i;
        temp=0;
        for(int j=0;n>0;j++)
        {
            n/=10;
            digits++;
        }

        //finding out the reverse of the number
        n=i;
        for(int j=0;digits>0;j++,digits--)
        {
            int rem = n%10;
            temp += rem * pow(10,digits-1);
            n/=10;
        }

        //checking if the number is evenly divisible by divisor
        if((abs(i-temp)%divisor)==0)
        {
            count++;
        }
    }

    cout << count;
}

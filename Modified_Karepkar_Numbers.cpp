#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long int lower,upper;
    cin >> lower >> upper;

    long int digits=0;
    long int n1 = lower;
    long int right=0,left=0;



    for(long int i=lower;i<=upper;i++)
    {
        digits=0;
        for(long int k=i,n1=k;n1>0;digits++)
        {
            n1=n1/10;
        }

        //cout << "The number of digits are: " << digits << endl;

        long int square = i*i;
        //cout << "Square : " <<square << endl;
        right = 0;
        for(long int j=0;j<digits;j++)
        {
            long int rem = square%10;
            //cout << "rem : " << rem << endl;
            right = right + (pow(10,j) * rem);
            square/=10;
            //cout << "square/=10 : " << square <<endl;
        }
        left = square;
        //cout << "Left : " << left << " Right : " << right << endl;
        if(left + right == i)
        {
            cout << i << " ";
        }
    }

}

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    long int start,end,forward,reverse;
    for(int i=0;i<t;i++)
    {
        cin >> start >> end ;
        forward =0;
        reverse =0;
        for(long int j=start ; j <= end ; j++)
        {
            long int temp = sqrt(j);

            if(temp*temp == j)
            {
                forward = temp;
                break;
            }
        }

        for(int m=end;m>=start;m--)
        {
            long int temp = sqrt(m);
            if(temp*temp == m)
            {
                reverse = temp;
                break;
            }
        }
        if(reverse == 0 && forward == 0)
            cout << "0" << endl;
        else if (reverse == forward)
            cout << "1"<< endl;
        else
            cout << reverse - forward + 1  << endl;
    }
}

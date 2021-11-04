#include<iostream>
using namespace std;

int main()
{
    int no_of_steps;
    cin >> no_of_steps;

    char s[no_of_steps];
    for(int i=0;i<no_of_steps;i++)
        cin >> s[i];

    int counter=0,sum=0;
    for(int i=0;i<no_of_steps;i++)
    {
        if(s[i]=='U')
        {
            sum++;
        }
        else
        {
            counter++;
            sum--;
        }

        while(sum!=0)
        {
            i++;
            if(s[i]=='U')
                sum++;
            else
                sum--;
        }
    }

    cout << counter;
}

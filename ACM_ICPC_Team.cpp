#include<iostream>
using namespace std;

int main()
{
    int no_of_attendees,no_of_topics;
    cin >> no_of_attendees >> no_of_topics;

    int arr[no_of_attendees][no_of_topics];

    for(int i=0;i<no_of_attendees;i++)
    {
        for(int j=0;j<no_of_topics;j++)
            cin >> arr[i][j];
    }

    int max=0,counter=0,temp=0;

    for(int i=0;i<no_of_attendees;i++)
    {
        for(int j=i+1;j<no_of_attendees;j++)
        {
            temp=0;
            for(int k=0;k<no_of_topics;k++)
            {
                if(arr[i][k] || arr[j][k])
                {
                    temp++;
                }
            }

            if(max<temp)
                max=temp;
        }
    }

    for(int i=0;i<no_of_attendees;i++)
    {
        for(int j=i+1;j<no_of_attendees;j++)
        {
            temp=0;
            for(int k=0;k<no_of_topics;k++)
            {
                if(arr[i][k] || arr[j][k])
                {
                    temp++;
                }
            }

            cout << "Max = " << max << "Temp = " << temp << endl;

            if(max == temp)
                counter++;
        }
    }

    cout << max << endl << counter ;
}

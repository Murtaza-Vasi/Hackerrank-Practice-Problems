#include<iostream>
using namespace std;

int main()
{
    int no_of_width,t;
    cin >> no_of_width >> t;
    int width[no_of_width];

    for(int j=0;j<no_of_width;j++)
    cin >> width[j];

    int start,end;

    for(int i=0;i<t;i++)
    {
        cin >> start >> end;

        int min = width[start];
        for(int m=start+1;m<=end;m++)
        {
            if(min > width[m])
                min = width[m];
        }

        cout << min << endl;
        min=0;
    }
}

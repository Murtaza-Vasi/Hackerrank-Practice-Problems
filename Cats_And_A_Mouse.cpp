#include<iostream>
using namespace std;

int main()
{
    int query;
    cin >> query;

    int catA;
    int catB;
    int mouseC;

    for(int i=0;i<query;i++)
    {
        cin >> catA >> catB >> mouseC;

        int distA = abs(catA - mouseC);
        int distB = abs(catB - mouseC);

        if(distA < distB)
            cout << "Cat A" << endl;
        else if(distB < distA)
            cout << "Cat B" << endl;
        else
            cout << "Mouse C" << endl;
    }
    return 0;
}

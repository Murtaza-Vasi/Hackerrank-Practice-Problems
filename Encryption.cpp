#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int floor_value,ceil_value;
    float length;

    length = sqrt(s.length());
    floor_value = length;
    ceil_value = ceil(length);

    for(int i=0;floor_value * ceil_value <s.length();i++)
    {
        if(floor_value < ceil_value)
            floor_value ++;
        else
            ceil_value ++;
    }

    char matrix[floor_value][ceil_value];
    int temp=0;

    for(int i=0;i<floor_value;i++)
    {
        for(int j=0;j<ceil_value;j++,temp++)
        {
            if(temp < s.length())
                matrix[i][j] = s[temp];
            else
                matrix[i][j] = ' ';
        }
    }

    for(int i=0;i<ceil_value;i++)
    {
        for(int j=0;j<floor_value;j++)
        {
            if(!isspace(matrix[j][i]))
                cout << matrix[j][i];
        }
        cout << " ";
    }
}

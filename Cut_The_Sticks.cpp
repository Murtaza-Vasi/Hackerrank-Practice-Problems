#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,minimum;
    cin >> n;
    vector<int> vec;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    for(int i=0;i<vec.size();i++)
    {
        for(int j=i+1;j<vec.size();j++)
        {
            if(vec[i] > vec[j])
                swap(vec[i],vec[j]);
        }
    }

    for(int i=0;vec.size()>0;i++)
    {
        minimum = vec[0];
        int counter=0;

        for(int j=0;j<vec.size();j++)
        {
            if(minimum == vec[j])
                counter++;
            else
                break;
        }

        int m=0;
        for(int j=0;j<vec.size();j++)
        {
            vec[j] = vec[j] - minimum;
            m++;
        }

        cout << m << endl;

        /*cout << "Before erasing : " << endl;
        for(int k=0;k<vec.size();k++)
            cout << vec[k] << " ";
        cout << endl;*/

        vec.erase(vec.begin(),vec.begin()+counter);

        /*cout << "After erasing : " << endl;
        for(int k=0;k<vec.size();k++)
            cout << vec[k] << " ";
        cout << endl;*/
    }
}

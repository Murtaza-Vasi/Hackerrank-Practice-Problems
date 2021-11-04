#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int no_of_inputs;
  cin >> no_of_inputs;

  char direction[no_of_inputs];
  int magnitude[no_of_inputs];

  for(int i=0;i<no_of_inputs;i++)
  {
    cin >> direction[i] >> magnitude[i];
  }

  int index,curr_pos=0,length;
  vector <char> vec;

  length = s.length();

  for(int i=0;i<no_of_inputs;i++)
  {
    if(direction[i] == 'L')
    {
        index = (magnitude[i] - (magnitude[i] % length) + length) %length;
      	//cout << "Index = " <<index << endl;
      	char temp = s[abs(index)];
      	vec.push_back(temp);
      	curr_pos = abs(index);
    }
    else if(direction[i] == 'R')
    {
      	index = (magnitude[i] - (magnitude[i] % length) + length) %length;
      	char temp = s[abs(index)];
      	vec.push_back(temp);
      	curr_pos = abs(index);
    }
  }

  //checking if the obtained vector of characters is an anagram of the original string

  int size=vec.size();

  for(int i=0;i<size;i++)
  {
      cout << vec[i] ;
  }
  cout << endl;

  if(size == length)
  {
    sort(vec.begin(),vec.end());
    for(int i=0;i<size;i++)
    {
      for(int j=i+1;j<size;j++)
      {
        if(s[i] > s[j])
          swap(s[i],s[j]);
      }
    }

    int flag=0;
    for(int i=0;i<size;i++)
    {
      if(s[i] != vec[i])
      {
        flag=1;
        break;
      }
    }


    if(flag==0)
      cout << "YES" ;
    else
      cout << "NO" ;
  }
  else
  {
    cout << "NO";
  }
}

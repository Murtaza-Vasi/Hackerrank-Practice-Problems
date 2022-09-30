#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    int q;
    int queries[q][2];
    
    cin >> n >> q;
    cout << "n= " << n << " q= " << q << endl;
    
    vector<vector<int>> a(n);
    
    for (int i=0; i<n; i++) {
        
        int k;
        cin >> k;
        
        for (int j=0; j<k; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i=0; i<a.size(); i++) {
        for (int j=0; j<a[i].size(); j++) {
            cout << a[i][j];
        }
    }
    
    for (int i=0; i<q; i++) {
        cout << a[queries[i][0]][queries[i][1]] << endl;
    }
    
    return 0;
}
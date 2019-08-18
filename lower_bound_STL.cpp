#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
   int t, q;
   cin >> t;
   vector<int> vec;
   for (int i=0; i<t; i++){
       cin >> q;
       vec.push_back(q);
   }
   int t1, w;
   cin >> t1;
   for (int i=0; i<t1; i++){
       cin >> w;
       vector<int>::iterator low = lower_bound(vec.begin(), vec.end(), w);
       if (vec[low - vec.begin()] == w)cout << "Yes " << (low - vec.begin()+1) << endl;
       else cout << "No " << (low - vec.begin()+1) << endl;
   }
    return 0;
}

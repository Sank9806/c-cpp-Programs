#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() 
{
    int q;
    set<int>s;
    cin>>q;
    while(q--){
        int y,x;
        cin>>y>>x;
        switch(y){
            case 1:{
                s.insert(x);
                break;
            }
            case 2:{
                s.erase(x);
                break;
            }
            case 3:{
                set<int>::iterator itr=s.find(x);
                if(itr==s.end())
                   cout<<"No"<<endl;
                else
                   cout<<"Yes"<<endl;
                break;
            }
        }
    }
    return 0;
}

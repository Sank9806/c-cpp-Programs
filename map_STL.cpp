#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    map<string,int>m;
    int t;
    cin>>t;
    while(t--){
           int t1,n;
           cin>>t1;
           switch(t1){
                case 1:{
                    string name;
                    int marks;
                    cin>>name>>marks;
                    map<string,int>::iterator itr=m.find(name);
                    if(itr==m.end())
                    m.insert(make_pair(name,marks));
                    else
                    itr->second+=marks;
                    break;
                }
                case 2:{
                    string name;
                    cin>>name;
                    m.erase(name);
                    break;
                }
                case 3:{
                    string name;
                    cin>>name;
                    map<string,int>::iterator itr=m.find(name);
                    if(itr==m.end()) cout<<"0"<<endl;
                    else cout<<itr->second<<endl;
                    break;
                }
            }
        }
    return 0;

}

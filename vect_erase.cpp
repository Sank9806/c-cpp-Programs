#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,a,b,c;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    cin>>c;
    vec.erase(vec.begin()+(c-1));
    cin>>a>>b;
    vec.erase(vec.begin()+(a-1),vec.begin()+(b-1));
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";
}

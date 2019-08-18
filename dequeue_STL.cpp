#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	deque<int> que;
    for(int i = 0; i < n; i++)
    {
        for(;!que.empty() && arr[i] > que.back();)que.pop_back();  
        que.push_back(arr[i]);  
        if(i >= k && que.front() == arr[i-k]) que.pop_front();  
        if(i >= k-1) cout<<que.front()<<" ";
    }
    cout<<""<<endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t--) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	
  	}
  	return 0;
}

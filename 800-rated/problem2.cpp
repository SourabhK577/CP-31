// line trip 
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    
    vector<int> arr;
    
    arr.push_back(0);
    
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }
    
    arr.push_back(x);
    
    int max_dist = 0;
    
    for(int i = 0; i<n+1 ; i++){
        int dist = abs(arr[i] - arr[i+1]);
        
        if(dist > max_dist){
            max_dist = dist;
        }
    }
    
    int last_trip = 2*abs(arr[n] - arr[n+1]);
    
    if(last_trip > max_dist){
        cout<<last_trip<<endl;
    }
    else{
        cout<<max_dist<<endl;
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	cin>>t;
	
	while(t--){
	    solve();
	}

}
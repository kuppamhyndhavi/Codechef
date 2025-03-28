#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	     
        vector<int> characteristics(n);
        for (int i = 0; i < n; ++i) {
            cin >> characteristics[i];
        }
        
        int count = 0; 
        for (int i = 0; i < n; ++i) {
            if ((characteristics[i] + k) % 7 == 0) {
                ++count;
            }
        }
        
        cout << count << endl; 
    }
    
	

}

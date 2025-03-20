#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int ages[n];
	    for(int i=0;i<n;i++){
	        cin>>ages[i];
	    }
	    
        int ec = 0;
        for (int age : ages) {
            if (age >= x) {
                ec++; 
            }
        }

        cout << ec << endl; 
    
	}
	return 0;
}

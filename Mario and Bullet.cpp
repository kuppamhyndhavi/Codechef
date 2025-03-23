#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	     int timeToHit = y / x; 

        if (timeToHit >= z) {
            cout << 0 << endl;
        } else {
            cout << z - timeToHit << endl;  
        }
    }
    return 0;
	    
	
}

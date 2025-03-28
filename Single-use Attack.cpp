#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int h,x,y;
	    cin>>h>>x>>y;
	     int normal_attacks = (h + x - 1) / x; 
        
        
        int special_attack_remaining_health = max(0, h - y);
        int normal_attacks_after_special = (special_attack_remaining_health + x - 1) / x;
        int total_with_special = 1 + normal_attacks_after_special; 
        cout << min(normal_attacks, total_with_special) << endl;
    }
	    
	

}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int r,o,c;
	cin>>r>>o>>c;
	int max_possible_runs=(20-o)*6*6;
	if(c+max_possible_runs>r){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	
	

}

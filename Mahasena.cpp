#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int lc=0;
	int ulc=0;
	for(int i=0;i<n;i++){
	    int w;
	    cin>>w;
	    if(w%2==0){
	            lc++;
	        }
	        else{
	            ulc++;
	        }
	    }
	    if(lc>ulc){
	        cout<<"READY FOR BATTLE"<<endl;
	    }
	    else{
	        cout<<"NOT READY"<<endl;
	    
	}
	return 0;

}

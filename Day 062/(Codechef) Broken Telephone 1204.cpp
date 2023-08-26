#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
		vector<bool> k(n,false);
		
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    


	    for(int i=0;i<n-1;i++){
			if(a[i]!=a[i+1]){
				k[i]=true;
				k[i+1]=true;
			}
	    }

        int c = 0;

		for(auto i: k){
			if(i){
			    c++;
			}
		}

        cout<<c<<endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string pairs;
    int contains = 0;
    while(getline(cin,pairs)){
    	//cout << pairs << '\n';
    	int n = pairs.size(); 
    	// for(int i = 0; i < n; i++) {
    	// 	cout << "i =  " << i << " == " << pairs[i] <<'\n';
    	// }cout<<'\n';

    	string a1 ;
    	// first value
    	int index = -1;
    	for(int i = 0; i < n; i++){
    		if(pairs[i] != '-'){
    			a1.push_back(pairs[i]);
    		}else{
    			index = i;
    			break;
    		}
    	}
    	int first = stoi(a1);

    	string a2;
    	for(int i = index + 1; i < n; i++){
    		if(pairs[i] != ','){
    			a2.push_back(pairs[i]);
    		}else{
    			index = i;
    			break;
    		}
    	}
    	int second = stoi(a2);

    	string b1;
    	for(int i = index + 1; i < n; i++){
    	    if(pairs[i] != '-'){
    			b1.push_back(pairs[i]);
    		}else{
    			index = i;
    			break;
    		}
    	}

    	int third = stoi(b1);

    	string b2;
    	for(int i = index + 1; i < n; i++){
    		if(pairs[i] != ','){
    			b2.push_back(pairs[i]);
    		}else{
    			index = i;
    			break;
    		}
    	}
    	int fourth = stoi(b2);

    	// cout << first << '\n';
    	//  cout << second <<'\n';
    	//   cout << third <<'\n';
    	//    cout << fourth <<'\n';

    
    	if(first <= third and fourth <= second){
    		contains++;
    	}else if(third <= first and second <= fourth){
    		contains++;
    	}else{
    		// nothing
    	}
    } 
    cout << contains << '\n';
    return 0;
}		
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string pairs;
    int contains = 0;
    while(getline(cin,pairs)){

    	int n = pairs.size(); ;
    	string a1 ;
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

    	if(second >= third and first <= third ){
    		contains++;
        }else if(fourth >= first and third <= second){
            contains++;
        }
    	else{
    		// nothing
    	}
    } 
    cout << contains << '\n';
    return 0;
}		
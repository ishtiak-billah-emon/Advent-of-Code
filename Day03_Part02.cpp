#include <bits/stdc++.h>
using namespace std;
const int N = 55;
int freq[N];
void set_position(char ch){

        int position = -1;
        if(ch >= 'a' and ch <= 'z'){

                position  = ch - 96;
                freq[position]++;

            }else if(ch >= 'A' and ch  <= 'Z'){
                position = ch - 38; 
                freq[position]++; 
            }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int sum = 0;
    int count = 0;
    while(getline(cin,str)){

        set <char> distinct;
        int size = str.size();
        for(int i = 0; i < size; i++){
            distinct.insert(str[i]);
        }

        for(auto ch : distinct){
             set_position(ch);
        }
        distinct.clear();
        count ++;

        if(count % 3 == 0){
            
            for(int i = 1; i <= 52; i++){
               // cout <<"index : " << i << " " << freq[i] <<endl; 

                if( freq[i] == 3){
                    sum += i;
                }
            }

           // reset the frequency array
             for(int i = 1; i <= 52; i++){
                freq[i] = 0;
            }
        }
    }cout << sum <<endl;
 }

 
    


     
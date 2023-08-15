#include <bits/stdc++.h>
using namespace std;

int find_position(char ch){

        int position = -1;
        if(ch >= 'a' and ch <= 'z'){

                position  = ch - 96;

            }else if(ch >= 'A' and ch  <= 'Z'){
               
               position = ch - 38; // -38 because the Question said Capital 'A' starting from 27; 
            }
    return position;
}

int is_common(string s, int n){
        set < char > st;
        for(int i = 0; i < n / 2; i++){
            for(int j = n / 2; j < n; j++){
                if(s[i] == s[j]){
                    // if matched then store in set
                    st.insert(s[j]);               
                }
            }
        }

        // reason behind taking char set
        /*
            in 2nd test case we found multiple L 
            so the the sum is counting for every L.
            but we need to count for every distinct match.
            thats why I use set to get distinct element
        */
        int sum = 0;
        for(auto ch : st){
            int position = find_position(ch);
            sum += position;
        }


        return sum;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string rucksack;
    int ans =  0;
    while(cin >> rucksack){

        int size = rucksack.size();
        int sum = is_common(rucksack,size);
        ans += sum;
    }
    cout << ans<<'\n';

    return 0;
}        

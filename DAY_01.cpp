
/*
	Learninng:
		1) How to  take input and count blank line 

*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int calorie[N];

int main(){

		string str;
		int index = 1;
		int sum = 0;

		while(getline(cin, str)){
			
			if( str.empty()){ 

				//checking for blank line
				calorie[index] = sum;
				index++;
				sum = 0;

			}else{
				
				sum += stoi(str);
			}
		}

		// last elf's calorie
		calorie[index]  = sum;


		int maximum_calorie = -1;
		for(int i = 1; calorie[i] > 0; i++){
			
			if(calorie[i] > maximum_calorie){
				maximum_calorie = calorie[i];
			}
		}
		cout<< maximum_calorie <<'\n';
		




    return 0;
}		
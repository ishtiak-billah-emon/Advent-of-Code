// Day 2: Rock Paper Scissors

#include <bits/stdc++.h>
using namespace std;

int main(){

	string player;
	int points = 0;
	while( getline(cin,player)){
		
		/* A  - > Rock
		   B  - > Paper
		   C  -> Scissors
			
		   X  -> LOSE
		   Y  -> DRAW
		   Z  -> WIN   
		 */

		if(player[0] == 'A' and player[2] == 'X'){

			
			points += 3; // 0 for loosing and 3 for scissors

		}else if( player[0] == 'A' and player[2] == 'Y'){
			// draw
			points += 4;

		}else if(player[0] == 'A' and player[2] == 'Z'){
			
			// win
			points += 8;
		}else if(player[0] == 'B' and player[2] == 'X'){
			
			points += 1;
		}else if(player[0] == 'B' and player[2] == 'Y'){
		
			points += 5;
		}else if(player[0] == 'B' and player[2] == 'Z'){
			
			points += 9;
		}else if(player[0] == 'C' and player[2] == 'X'){
			points += 2;
		}else if(player[0] == 'C' and player[2] == 'Y'){
			points += 6;
		}else if(player[0] == 'C' and player[2] == 'Z'){
			points += 7;
		}
		

	}

	cout<<"Total points : " << points << '\n';
    

    return 0;
}		
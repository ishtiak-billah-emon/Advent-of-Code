// Day 2: Rock Paper Scissors

#include <bits/stdc++.h>
using namespace std;

int main(){

	string player;
	int points = 0;
	while( getline(cin,player)){
		
		/* A , X - > Rock
		   B , Y - > Paper
		   C , Z  -> Scissors*/

		if(player[0] == 'A' and player[2] == 'X'){

			// Draw
			points += 4;

		}else if( player[0] == 'A' and player[2] == 'Y'){
			// win for me
			points += 8;

		}else if(player[0] == 'A' and player[2] == 'Z'){
			// I lose the game
			points += 3;
		}else if(player[0] == 'B' and player[2] == 'X'){
			// I lose the game
			points += 1;
		}else if(player[0] == 'B' and player[2] == 'Y'){
			// Draw
			points += 5;
		}else if(player[0] == 'B' and player[2] == 'Z'){
			// Win for me
			points += 9;
		}else if(player[0] == 'C' and player[2] == 'X'){
			points += 7;
		}else if(player[0] == 'C' and player[2] == 'Y'){
			points += 2;
		}else if(player[0] == 'C' and player[2] == 'Z'){
			points += 6;
		}
		

	}

	cout<<"Total points : " << points << '\n';
    

    return 0;
}		
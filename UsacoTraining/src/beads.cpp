/*
 * beads.cpp
 *
 *  Created on: Feb 21, 2018
 *      Author: Sumayya Syeda
 */
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int length = 29;
	string necklace = "wwwbbrwrbrbrrbrbrwrwwrbwrwrrb";
	int highestCount = 0;

	/*
	 * between each letter, make cut
	 * count left, count right
	 * if w first until not w, keep adding, once not w, save letter found, until diff letter, keep counting
	 * if not w first, keep cpunting until diff letter, if w found, count as well
	 *
	 * loop continues until meeting letter before. ex: cut 4, loop around till cut 5
	 * 		if 0, loop to last letter
	 * 		if last letter, loop to 0
	 *
	 * compare current count to highest count, if higher, highest count = current count
	 *
	 */
	for(int i = 0 ; i < length; i++){
		//count right
		int count = 0;

		for(int l = i; l < length; l++){
			if(l+1 > length-1) l -= length; //takes care of looping around
			if(l == i && necklace[l] == 'w'){
				while(necklace[l] == 'w'){
					count++;
					l++;
				}
				l++;
			}
			char sectionLetter = necklace[l];
			if(necklace[l] == sectionLetter || necklace[l] == 'w') count++;
			else break;


		}


	}


}



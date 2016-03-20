/*

Use Strings2 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.s

Objectives of C-Strings-2 Lesson:

->Using malloc to create new strings
->New ways of Handling Strings

*/
#include "FunctionHeadersStrings2.h"
#include<stdio.h>

int main(){
	
	int si, sc=7, temp_c=0;
	//Test Consonants_Vowels

	//Test getFrequencyofWord

	//Test getSubstring

	//Test getLastWord
	char sentences[][100] = { "abababa", "he he", "ab cd ab cd", "    ", "1234 aaaaaaa", "asd324", "yzqwer 23425", "a" };
	char words[][100] = { "ab", "he", "ab cd", " ", "aa", "asd324", "x", "a" };
	for (si = 0; si < sc; si++){
		int temp_c = count_word_in_str_way_1(sentences[si], words[si]);
		printf("%d  ", temp_c);
	}
	return 0;
}
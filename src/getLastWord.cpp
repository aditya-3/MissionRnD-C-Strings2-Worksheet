/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<stdio.h>
#include<string.h>

char * get_last_word(char * str){
	char *result;
	
	if (str == NULL)
		return NULL;
	else
	{
		int i = 0, k = 0, startPosition = 0, endPosition = 0;
		while (str[i] != '\0')
				i++;
		result = (char *)malloc(50 * sizeof(char));
		i--;
		while (i >= 0)
		{
				if (str[i] != ' ')
				break;
			i--;

		}
		if (i == -1)
			return "";
		else
		{
			endPosition = i;
			while (i >= 0)
			{
				if (str[i] == ' ')
					break;
				i--;
			}
			startPosition = i + 1;
			result = (char *)realloc(result, (endPosition - startPosition + 2)*sizeof(char));
			while (startPosition <= endPosition)
				result[k++] = str[startPosition++];
			result[k] = '\0';
			return result;
		}
			
	}
}

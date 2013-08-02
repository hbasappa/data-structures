/**
 * problem:
 *      implement atoi() in C/C++
 * examples:
 *       123   => '123'
 *       0123  => '123'
 *      -123  => '-123' (handle -ve sign)
 * complexity:
 *      time = O(N) 
 *      space = O(1)
**/

#include "test.h"

void reverse(char s[])
{
	int c, i, j;
	for(j = 0; s[j] != 0; j++)
		;

	for(i=0, j = j - 1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

void my_itoa(char s[], int n) {

	int i, sign;

	if((sign = n) < 0)
		n = -n;
	i=0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if(sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}


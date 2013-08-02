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

int my_strncmp(const char *s1, const char *s2, int n) {

	signed char res = 0;
	while (n) {
		res = *s1 - *s2;
		if (res != 0)
			return res;
		if (*s1 == '\0')
			return 0;
		++s1, ++s2;
		--n;
	}
	return res;
}


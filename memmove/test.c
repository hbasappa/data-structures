#include "test.h"
#include "stdlib.h"

#define MAXLINE 100
#define DELIMITERS " \n\t"

int main(void) {
    char str[MAXLINE], *token, *token1, *token2;
	int cnt = 0, n = 0;
	
    while (fgets(str, MAXLINE, stdin) != NULL) {
        for (token = strtok(str, DELIMITERS);
             token != NULL;
             token = strtok(NULL, DELIMITERS))
        {	
	    if(cnt == 0)  token1 = token;
	    if(cnt == 1)  token2 = token;
	    if(cnt == 2)  n = atoi(token); 	
	    cnt++;
        }
	printf("%s %s %d %d", token1, token2, n, my_strncmp(token1, token2, n));
        printf("\n");
	cnt = 0;
    }
}

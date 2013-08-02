#include "test.h"
#include "stdlib.h"

#define MAXLINE 100
#define DELIMITERS " \n\t"

int main(void) {
    char str[MAXLINE], *token;
    char ascii_str[MAXLINE];	
    int temp;
	
    while (fgets(str, MAXLINE, stdin) != NULL) {
        for (token = strtok(str, DELIMITERS);
             token != NULL;
             token = strtok(NULL, DELIMITERS))
        {	
	    temp = atoi(token);
	    my_itoa(ascii_str, temp);
            printf("%s", ascii_str);
        }
        printf("\n");
    }
}

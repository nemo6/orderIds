#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <fcntl.h>

char ** r_char(int n){

	char **orderIds;

	orderIds = malloc(n * sizeof(char*));
	
	for (int i = 0; i < n; i++){

	    orderIds[i] = malloc( (5+1) * sizeof(char) );
		printf("Enter a string: ");
	    scanf("%s",orderIds[i]);
	}

	// free(orderIds);

	return orderIds;
}

int getSize(char ** ch){

	int tmp=0;
	int i=0;

	while (i<3) {
		// printf("%s\n",ch[i]);
		i++;
		tmp++;
	}

	return tmp;
}

int main (int argc,char **argv){

	int n;

	printf("Enter the number of integers: ");
	scanf("%d",&n);

	char ** orderIds = r_char(n);

	for (int i = 0; i < n; i++){
	printf("%s %d\n",orderIds[i],strlen(orderIds[i]));
	}

	free(orderIds);
	
	return 0;
}

/*char **array;
int    lines;   
int    i;   

while (scanf("%d", &lines) != 1);

array = malloc(lines * sizeof(char *));
if (array != NULL)
{
    for (i = 0 ; i < lines ; ++i)
    {
        int numberOfLetters;

        while (scanf("%d", &numberOfLetters) != 1);
        array[i] = malloc(numberOfLetters);
    }
}*/

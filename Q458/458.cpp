#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char str[9999];
	while(fgets(str,sizeof(str),stdin)){
		for(int i=0;i<strlen(str)-1;i++)
			printf("%c",str[i]-7);
		printf("\n");
	}
	return 0;
}

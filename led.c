#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	int set=0;


	while(set<10){
		if((fp = fopen("/dev/myled0","w"))==NULL){
			printf("miss!\n");
			exit(EXIT_FAILURE);
		}
		fprintf(fp, "1\n");
		printf("%d\n",++set);	
		fclose(fp);
	}
}



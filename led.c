/*
Copyright (C) 2017  ShimdaS
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

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



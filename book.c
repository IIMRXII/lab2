#include <stdio.h>
#include <stdlib.h>
#include "book.h"
void create(book ** arr, int * n){
	printf("n = ");
	scanf("%d", n);
	if (*n <= 0)
		return;
	*arr = (book *)calloc(*n, sizeof(book));
	for (int i = 0; i < * n; i++){
		printf("name = ");
		scanf("%s", (*arr)[i].name);
		printf("type = ");
		scanf("%s", (*arr)[i].type);
		printf("number = ");
		scanf("%d", &(*arr)[i].number);
	}
}
void read(book ** arr, int *n){
	FILE * fp = fopen("file.txt", "r");
	if (!fp)
		return;
	if(fscanf(fp, "%d", n) != 1){
		fclose(fp);
		return;
	}
	if(*n <= 0){
		fclose(fp);
		return;
	}
	*arr = (book *)calloc(*n, sizeof(book));
	for(int i = 0; i < *n; i++){
		if (fscanf(fp, "%s %s %d", (*arr)[i].name, (*arr)[i].type, &(*arr)[i].number) != 3)
			break;
	}
	fclose(fp);
}
void write(book * arr, int n){
	if(n <= 0)
		return;
	FILE * fp = fopen("file.txt", "w");
	if(!fp)
		return;
	fprintf(fp, "%d \n", n);
	for(int i = 0; i < n; i++)
		fprintf(fp, "%s %s %d \n", arr[i].name, arr[i].type, arr[i].number);
fclose(fp);
}			

#include <stdio.h>
#include <stdlib.h>
#include "book.h"
int main(){
	book * arr = NULL;
	int n = 0;
	int stop = 0;
	while(stop != 1){
		int key;
		printf("1 - load db, 2 - print, 3 - search \n");
		scanf("%d", &key);
		switch(key){
			case 1:{
				int key2;
				printf("1 - create, 2 - read\n");
				scanf("%d", &key2);
			if(key2 == 1){
				create(&arr, &n);
				if(!arr)
					printf("create error \n");
				else
					printf("created %d elem \n", n);
				write(arr, n);
			}
			else{
				read(&arr, &n);
				if(!arr)
					printf("read error \n");
				else
					printf("loaded %d elem \n", n);
			}
				break;
			}
			case 3:{
				search(arr, n);
				break;
			}
			case 2:	
				for(int i = 0; i < n; i++)
					printf("%s %s %d \n", arr[i].name, arr[i].type, arr[i].number);
				break;
			default:
				stop = 1;
				break;
		}
	}
	if(arr)
		free(arr);
	return 0;
}

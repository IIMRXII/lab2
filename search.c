#include "book.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void search(book *arr, int n)
{
	int digit;
	
	printf("Search:\n|1. Name\n|2. Type\n|3. Number\n");
	
	scanf("%d", &digit);
	
	switch(digit)
	{
		case 1:{
			char tag[40];
			int found = 0;
			printf("Enter a name: ");
			
			scanf("%s",tag);
			
			for(int i = 0; i<n; i++)
			{
				if(!strcmp(arr[i].name,tag))
				{
					printf("A match found: %s %s %d\n", arr[i].name, arr[i].type, arr[i].number);
					found = 1;
				}
			}
			if (!found) printf("Couldn't find any matches\n\n");
			break;
		}
		case 2:{
			char tag[40];
			int found = 0;
			printf("Enter a type: ");
			
			scanf("%s",tag);
			
			for(int i = 0; i<n; i++)
			{
				if(!strcmp(arr[i].type, tag))
				{
					printf("A match found: %s %s %d\n", arr[i].name, arr[i].type, arr[i].number);
					found = 1;
				}
			}
			if (!found) printf("Couldn't find any matches\n\n");
			break;
		}
		case 3:{
			int tag;
			int found = 0;
			printf("Enter a number: ");
			
			scanf("%d",&tag);
			
			for(int i = 0; i<n; i++)
			{
				if(arr[i].number==tag)
				{
					printf("A match found: %s %s %d\n", arr[i].name, arr[i].type, arr[i].number);
					found = 1;
				}
			}
			if (!found) printf("Couldn't find any matches\n\n");
			break;
		}
		default:
			break;
	}
	printf("%c",'\n');
}

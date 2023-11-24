typedef struct book{
	char name[40];
	char type[40];
	int number;
}book;
void create(book ** arr, int * n);
void read(book ** arr, int * n);
void write(book * arr, int n);
void search(book * arr, int n);

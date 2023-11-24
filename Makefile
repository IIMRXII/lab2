all: bookstore
bookstore: main.o book.o search.o
	gcc main.o book.o search.o -o bookstore 
main.o: main.c
	gcc -c -o main.o main.c
book.o: book.c
	gcc -c -o book.o book.c
search.o: search.c
	gcc -c -o search.o search.c
clean:
	rm -rf *.o bookstore

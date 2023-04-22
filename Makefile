CFLAGS = -c -g -Wall

sudoku: bin/sudoku.o bin/affichage.o bin/fonctions.o
	gcc -o $@ $^

bin/%.o: src/%.c
	gcc $(CFLAGS) -o $@ -c $<


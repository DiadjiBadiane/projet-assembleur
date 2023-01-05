# Modèle de fichier Makefile, à adapter pour le TP

# options de compilation
CC = gcc	
CCFLAGS = -Wall

# fichiers du projet
SRC = jeu.c main.c plateau.c case.c
OBJ = $(SRC:.c=.o)
EXEC = run.out


# règle initiale
all: $(EXEC)

# dépendance des .h
main.o: main.c 
jeu.o: jeu.c jeu.h
plateau.o: plateau.c plateau.h	
case.o: case.c case.h

# règles de compilation
%.o: %.c
	$(CC) $(CCFLAGS) -o $@ -c $<
	
# règles d'édition de liens
$(EXEC): $(OBJ)
	$(CC) $(CCFLAGS) -o $@ $^ 

# règles supplémentaires
clean:
	rm -f *.o
mproper:
	rm -f $(EXEC) *.o
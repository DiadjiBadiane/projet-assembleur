#include <stdio.h>
#include <stdlib.h>
#include "plateau.h"

typedef enum {Vide, Rouge, Jaune} t_case;

void case_plateau(t_case t_plateau[X - 1][Y], int plateau[X][Y]);
void affiche_case(t_case t_plateau[X - 1][Y]);
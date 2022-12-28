#include <stdio.h>
#include <stdlib.h>
#include "plateau.h"

/*fonction init_plateau.
*Construit le plateau du jeu.
*paramètres: tableau de taille X Y où X = 7 et Y = 7
*On choisit X = 7 au lieu de 6 car la dernière ligne sert à compter le nombre de jetons qu' il y a dans la colonne correspondante.*/
void init_plateau(int plateau[X][Y]){
    for(int ligne=0; ligne< X; ligne ++){
        for(int colonne =0; colonne<Y; colonne ++){
            plateau[ligne][colonne]=0;
        }
    }
}

/*fonction affiche_plateau.
Elle affiche le plateau du jeu.
paramètres: tableau de taille X Y.*/
void affiche_plateau(int plateau[X][Y]){
    for (int ligne=0; ligne<X; ligne ++){
        for(int colonne=0; colonne<Y; colonne ++){
            printf("%d ", plateau[ligne][colonne]);
        }
        printf("\n");
    }
}



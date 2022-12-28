#include <stdio.h>
#include <stdlib.h>
#include "case.h"
#include "plateau.h"

/*fonction case_plateau.
*Remplit un tableau d' enum avec le statut de chaque case.
*Soit la case est vide. Soit la case contient un jeton rouge.Soit la case contient un jeton jaune.
*paramètres: tableau d' enum de taille X - 1 Y et le tableau du jeu.
*le tableau d' enum contient X - 1 lignes car on ne compte pas la dernière ligne du tableau du jeu*/
void case_plateau(t_case t_plateau[X - 1][Y], int plateau[X][Y]){
    for(int ligne = 0; ligne < X - 1; ligne ++){
        for(int colonne = 0; colonne < Y; colonne ++){
            if (plateau[ligne][colonne] == 0){
                t_plateau[ligne][colonne] = Vide;
            }
            //Si la valeur de la case vaut 0, elle est vide.//

            else if (plateau[ligne][colonne] == 1){
                t_plateau[ligne][colonne] = Rouge;
            }
            //Si la valeur de la case vaut 1, Il y' a un jeton rouge.//

            else{
                t_plateau[ligne][colonne] = Jaune;
            }
             //Si la valeur de la case vaut 2, Il y' a un jeton jaune.//
        }
    }
}

/*fonction affiche_case.
*Affiche le tableau d' enum.
*paramètres: tableau d' enum*/
void affiche_case(t_case t_plateau[X - 1][Y]){
    for(int ligne = 0; ligne < X -1; ligne ++){
        for (int colonne = 0; colonne < Y; colonne ++){
            if (t_plateau[ligne][colonne] == Vide){
                printf("|_| ");
            }
            else if (t_plateau[ligne][colonne] == Rouge){
                printf("|X| ");
            } 
            else{
                printf("|O| ");
            }
            //On affiche un symbole en fonction du statut de chaque case.//
        }
        printf("\n");
    }
}




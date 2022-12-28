#include<stdio.h>
#include<stdlib.h>
#include "jeu.h"
#include "case.h"

/*fonction partie
*Permet de jouer un coup.
*paramètres: -la colonne sur laquelle on veut mettre un jeton:
             -le tableau du jeu.
             -un int qui correspond à la valeur du jeton (1 ou 2).*/
int partie(int colonne, int plateau[X][Y], int pion){
    if (plateau[X - 1][colonne] == 6){ //colonne = 6, le nombre max de jetons dans la colnne est atteint.//
        printf("vous ne pouvez pas jouer ici\n");
        return -1; //Si la colonne est déjà remplie, on ne peut pas poser de jetons.//
    }
    plateau[X - 2 - plateau[X - 1][colonne]][colonne] = pion;
    /*plateau[X - 1][colonne] = nb de jetons dans la colonne
    *L' avant dernière ligne (X - 2) -  le nb de jetons donne la case où le jeton va attérir.*/    
    plateau[X - 1][colonne] ++;//+1 au compteur de jetons//
    return 0;
}

int fin_jeu(int colonne, int plateau[X][Y], int pion){
    int ligne = X - 2 - plateau[X - 1][colonne] + 1;
    if (ligne + 3 <= X-2){
        if (plateau[ligne + 1][colonne] == pion && plateau[ligne + 2][colonne] == pion && plateau[ligne + 3][colonne] == pion){  
            return 0;
        }
    }

    for(int colonne_k = 0; colonne_k <= 3; colonne_k ++){
        if (plateau[ligne][colonne_k] == pion && plateau[ligne][colonne_k + 1] == pion && plateau[ligne][colonne_k + 2] == pion && plateau[ligne][colonne_k + 3] == pion){
            return 0;
        }
    }

    for (int diag = 0; diag <= 3; diag ++){
        if (ligne >= colonne){
            if (plateau[ligne - colonne + diag][diag] == pion && plateau[ligne - colonne + diag + 1][diag + 1] == pion && plateau[ligne - colonne + diag + 2][diag + 2] == pion && plateau[ligne - colonne + diag + 3][diag + 3] == pion){
                return 0;
            }
        }
        else{
            if (plateau[diag][colonne - ligne + diag] == pion && plateau[diag + 1][colonne - ligne + diag + 1] == pion && plateau[diag + 2][colonne - ligne + diag + 2] == pion && plateau[diag + 3][colonne - ligne + diag + 3] == pion){
                return 0;    
            }
        }
    }
    return 1;
}





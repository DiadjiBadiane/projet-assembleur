#include <stdio.h>
#include <stdlib.h>

#include "plateau.h"
#include "case.h"
#include "jeu.h"

//utilisation de case_plateau et affiche_plateau pour mettre à jour et afficher le plateau à chaque fois.//
int main(){
    int plateau[X][Y];
    t_case t_plateau[X - 1][Y];
    init_plateau(plateau);
    case_plateau(t_plateau, plateau);
    affiche_case(t_plateau);//Construction et affichage du plateau//
    int pion;//Vaut 1 ou 2 selon le joueur qui joue//
    int colonne;
    for(int tour = 1; tour <= 42; tour ++){//Si aucun gagnant, fin du jeu qd les 42 jetons sont mis//

        if (tour % 2 == 0){
            pion = 2; //Aux tours pairs, le joueur 2 joue//
        }
        else{
            pion = 1; //Aux tours impairs, le joueur 1 joue//
        }

        printf("choississez une colonne");
        scanf("%d", &colonne);
        
        while (partie(colonne, plateau, pion) == -1){//Jeton placée dans une case remplie.// 
            case_plateau(t_plateau, plateau);
            affiche_case(t_plateau);
            printf("choississez une colonne");
            scanf("%d", &colonne);  
        }//Si colonne remplie, le joueur doit jouer autre part.//

        if (fin_jeu(colonne, plateau, pion) == 0){//Si un joueur gagne.//
            case_plateau(t_plateau, plateau);
            affiche_case(t_plateau);
            printf("gagné\n");
            return 0;
            }

        case_plateau(t_plateau, plateau);
        affiche_case(t_plateau);
        }

        printf("égalité\n");
        return 0;
    }

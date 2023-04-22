#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#include "affichage.h"


int main(){matrice_t m[SIZE][SIZE];
    print_start();
    jump_ligne(2);
    get_matrice(m);
    puts("");
    printf("Voici votre Sudoku:\n");
    print_matrice(m);
    solve(m);
    jump_ligne(2);
    puts("Voici une solution de votre Sudoku: ");
    print_matrice(m);
    jump_ligne(1);
    puts("Merci d'avoir utilise cette application.");
    int s;
    scanf("%d", &s);
    puts("Fermeture de l'application");

    return 0;
}
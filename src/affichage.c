#include "affichage.h"
#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void get_matrice(matrice_t m[SIZE][SIZE]){
    printf("\nEntrer les valeurs du Sudoku ligne par ligne, en inserant des '0' pour les cases vides.\n");
    char s[20];
    for (int i = 0; i < SIZE; i++){
        printf("Ligne %d: ", i+1);
        scanf("%s", s);
        for (int j = 0; j < SIZE; j++){
            m[i][j] = (int) s[j] - '0';
        }
    }
    return;
}

void print_start(){
    int i;
    for (i = 0; i < 120; i ++){
        printf("*");
    }
    printf("\n*");
    for (i = 0; i < 118; i ++){
        printf(" ");
    }
    printf("*\n");

    printf("*");
    for (i = 0; i < 52; i ++){
        printf(" ");
    }
    printf("Solveur sudoku");
    for (i = 0; i < 52; i ++){
        printf(" ");
    }
    printf("*\n");

    printf("*");
    for (i = 0; i < 118; i ++){
        printf(" ");
    }
    printf("*\n");

    for (i = 0; i < 120; i ++){
        printf("*");
    }
    printf("\nProgramme cree par MARTIN Hugo\n");

    return;
}


void print_matrice(matrice_t m[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE ; j++){
            printf("%d ", m[i][j]);
            if(j == 2 || j == 5) printf("| ");
        }
        puts("");
        if(i == 2 || i == 5) puts("------+-------+------");
    }
    return;
}

void jump_ligne(int nb_ligne){
    for(int i = 0; i < nb_ligne; i++) puts("");
    return;
}
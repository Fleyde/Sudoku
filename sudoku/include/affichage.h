#ifndef affichage_h
#define affichage_h

#include "fonctions.h"

//Récupération d'un tableau écrit par l'utilisateur
void get_matrice(matrice_t m[SIZE][SIZE]);

//Affichage en début de programme
void print_start(); 

//Affichage d'un tableau de Sudoku
void print_matrice(matrice_t m[SIZE][SIZE]);

//Saut de ligne dans le terminal
void jump_ligne(int nb_ligne);


#endif
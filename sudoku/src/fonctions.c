#include "fonctions.h"



int test_ligne_colonne(matrice_t m[SIZE][SIZE], point_t p, int value){
    int i;
    for (i = 0; i < SIZE; i++){
        if ((m[p.ligne][i] == value) || (m[i][p.colonne] == value)){
            return 0;
        }
    }
    return 1;
}


point_t next_zero(matrice_t m[SIZE][SIZE]){ point_t p;
    int i,j;
    for (i = 0; i < SIZE; i++){
        for (j = 0; j < SIZE; j++){
            if (m[i][j] == 0){
                p.colonne = j;
                p.ligne = i;
                return p;
            }
        }
    }
    p.colonne = 10;
    p.ligne = 10;
    return p;
}


int test_square(matrice_t m[SIZE][SIZE], point_t p, int value){ int inf_lig =  (p.ligne/3)*3, inf_col = (p.colonne/3)*3;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (m[inf_lig + i][inf_col + j] == value){
                return 0;
            }
        }
    }
    return 1;
}


int global_test(matrice_t m[SIZE][SIZE], point_t p, int value){
    return test_square(m, p, value) && test_ligne_colonne(m, p, value);
}


int solve(matrice_t m[SIZE][SIZE]){
    point_t p = next_zero(m);
    if (p.colonne == 10) return 1;

    int value;
    for (value = 1; value < 10; value++){
        if (global_test(m, p, value)){
            m[p.ligne][p.colonne] = value;

            if (solve(m)) return 1;

                m[p.ligne][p.colonne] = 0;

        }
    }

    return 0;
}

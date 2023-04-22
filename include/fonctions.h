#ifndef fonctions_h
#define fonctions_h
#define SIZE 9

typedef int matrice_t;

typedef struct{
    int ligne;
    int colonne;
} point_t;


int test_ligne_colonne(matrice_t m[SIZE][SIZE], point_t p, int value);

point_t next_zero(matrice_t m[SIZE][SIZE]);

int test_square(matrice_t m[SIZE][SIZE], point_t p, int value);

int global_test(matrice_t m[SIZE][SIZE], point_t p, int value);

int solve(matrice_t m[SIZE][SIZE]);


#endif
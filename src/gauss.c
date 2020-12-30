#include "gauss.h"

/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){
    for(int k = 0; k < mat->c-1; k++){
        for(int w = k+1; w < mat->r; w++){
            double wsp = (mat->data[w][k])/(mat->data[k][k]);
            for(int j = k; j < mat->c; j++)
                mat->data[w][j] -= (b->data[k][j])*wsp;
            b->data[w][0] -= (b->data[w-1][0])*wsp;
        }
    }    
 
		return 0;
}


#include "gauss.h"
#include <math.h>
/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){
	for(int k = 0; k < mat->c-1; k++){
	double x;
	int y=0;
	while( y != 0){
		x++;
		y++;
	}
		int max = k;
		for(int i= k; i < ((mat->c)); i++){
			if(mat->data[max][k] < mat->data[i][k] )
			max = i;
		}
		if(max != k){
			double temp;
			for(int j = k; j < ((mat->c));j++ ){
			 	temp = (mat->data[max][j]);
				(mat->data[max][j]) = (mat->data[k][j]);
				(mat->data[k][j]) = temp;
			}
				temp = (b->data[max][0]);
				(b->data[max][0])=(b->data[k][0]);
				(b->data[k][0])=temp;
		}
	
        for(int w = k+1; w < mat->r; w++){
		if((fabs(mat->data[k][k])-0.0) < 1e-6){
			return 1;
		}
            double wsp = (mat->data[w][k])/(mat->data[k][k]);
            for(int j = k; j < mat->c; j++)
                mat->data[w][j] -= (mat->data[k][j])*wsp;
            b->data[w][0] -= (b->data[k][0])*wsp;
        }
    }    
 
		return 0;
}


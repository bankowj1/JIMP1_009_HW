#include "backsubst.h"
/**
 * Zwraca 0 - wsteczne podstawienie zakonczone sukcesem
 * Zwraca 1 - błąd dzielenia przez 0 (element na diagonali = 0)
 * Zwraca 2 - błąd nieprawidłowych rozmiarów macierzy
 */
int  backsubst(Matrix *x, Matrix *mat, Matrix *b) {
	int ir=(mat->r);
	int ic=(mat->c);
	double rwn;
	double rwnpb;
	if(ic > ir)
	return 2;
	for(ir ; ir > 0 ;ir--)
	{	
		for(int j = 1 ; j < (mat->c) ;j++)
		{
			rwnpb+=(mat->data[ir][ic+j]) * (x->data[ir+j][0]);	
		}
		rwn= b->data[ir][0] - rwnpb;
			if((mat->data[ir][ic]-0)>=1e-6)
			{	return 1;}
		x->data[ir][0]=(rwn/(mat->data[ir][ic]));	
		ic--;
	}/**
				 * Tutaj należy umieścić właściwą implemntację.
				 */

				/* To ponizej jest przepisaniem b do x. Nalezy to poprawic! */
/*
				int i;
				for (i =0; i < x->r; i++) {
								x->data[i][0] = b->data[i][0];
				}
*/
				return 0;
}



/*
    MILTON CARLOS MEDINA MURILLO   MATR: 372976
    DESCRIP: MENU VECT + MATR + LIB.FUNCIONES
    fecha: 7 ABRIL 2024
    MCMM_ACT9.cpp
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"

#define N 15

int main ()
{
    int op,vect[15],mat[4][4];

    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            fillvect(vect,N);
            break;
        case 2:
            fillmat(mat);
            break;
        case 3:
            printvect(vect,N,"V E C T O R  1");
            break;
        case 4:
            printmat(mat,"M A T R I Z  1");
            break;
        case 5:
            ordervect(vect,N);
            break;
        case 6:
            searchnum(vect,N);
            break;
        }
    } while (op != 0);

    return 0;
}
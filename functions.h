/*
    MILTON CARLOS MEDINA MURILLO   MATR: 372976
    DESCRIP: LIB.FUNCIONES
    fecha: 7 ABRIL 2024
    MCMM_ACT9.cpp
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int menu ();
void fillvect (int,int);
void fillmat (int);
void printvect (int,int,char);
void printmat (int,char);
void ordervect (int,int);
void searchnum (int,int,int);

int menu ()
{
    int op;
    system("CLS");
    printf("MENU\n");
    printf("1.-Llenar Vector\n");
    printf("2.-Llenar Matriz\n");
    printf("3.-Imprimir Vector\n");
    printf("4.-Imprimir Matriz\n");
    printf("5.-Ordenar Vector\n");
    printf("6.-Buscar Numero en Vector\n");
    printf("0.-Salir\n");
    printf("Escoge una opcion: ");
    scanf("%d",&op);
    return op;
}

void fillvect (int vect[],int m)
{
    int i,numalt,numocp[16] = {0};

    for(i=0;i<m;i++)
    {
        do 
        {
            numalt = rand() % 101 + 100;
        } while (numocp[numalt-1] != 0);

        vect[i] = numalt;
        numocp[numalt-1] = 1;
    }
}

void fillmat(int mat[4][4]) 
{
    int i,j,numalt,numocp[16] = {0};

    for (i = 0; i < 4; ++i) 
    {
        for (j = 0; j < 4; ++j) 
        {
            do 
            {
                numalt = rand() % 16 + 1;
            } while (numocp[numalt-1] != 0);

            mat[i][j] = numalt;
            numocp[numalt - 1] = 1;
        }
    }
}

void printvect(int vect[],int m,char name[])
{
    int i;

    system("CLS");
    printf("%s\n",name);

    for(i=0;i<m;i++)
    {
        printf("%d -----> [ %d ]\n",i+1 ,vect[i]);  
    }
    system("PAUSE");
}

void printmat(int mat[4][4],char name[]) 
{
    int i,j;

    system("CLS");
    printf("%s\n",name);

    for(i=0;i<4;++i) 
    {
        for(j=0;j<4;++j) 
        {
            printf("Fila %d| Columna %d-----> [ %d ]\n",i+1,j+1,mat[i][j]);
        }

        printf("\n");
    }

    system("PAUSE");
}

void ordervect(int vect[], int m) 
{
    int i,j,band,temp;

    for (i=0;i<m-1;i++) 
    {
        for (j=0;j<m-i-1;j++) 
        {
            if (vect[j]>vect[j+1]) 
            {
                temp = vect[j];
                vect[j] = vect[j+1];
                vect[j+1] = temp;

                band = 1;
            }
        }
        
        if (band==0) 
        {
            break;
        }
    }
}

void searchnum(int vect[],int m) 
{
    int i,numbus,find;

    system("CLS");
    printf("Ingresa el numero que deseas buscar: ");
    scanf("%d",&numbus);

    for (i=0;i<m;++i) 
    {
        if (vect[i]==numbus) 
        {
            find = i;
            break;
        }
        else
        {
            find = -1;
        }
    }

    if (find != -1) 
    {
        printf("\nEl valor %d se encuentra en la posicion %d del vector.\n",numbus,find+1);
    } 
    else
    {
        printf("\nEl numero %d no se encuentra en el vector.\n",numbus);
    }

    system("PAUSE");
}

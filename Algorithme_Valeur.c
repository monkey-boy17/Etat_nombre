#include<stdio.h>
#include<stdlib.h>



int main()
{
    int Positif = 0;
    int Negatif = 0;
    int Nombre;
    int i;


    for(i = 0; i < 11; i++){

        printf("taper un nombre\n");
        scanf("%d",&Nombre);

            if (Nombre > 0){

            Positif++;

            }else{

            Negatif++;

        }
    }
        printf ("valeurs Positif: %d\n",Positif);
        printf ("valeurs Negatif: %d\n",Negatif);
    return 0;
}

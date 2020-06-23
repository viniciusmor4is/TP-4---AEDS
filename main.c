#include <stdio.h>
#include <stdlib.h>

int main()
{  int Q; //numero de questoes
   scanf("%d", &Q);
   int nota(char *gabarito, char *respostas);
    int i, questoesCertas=0;
    int A, B, C, D, E;
    char *gabarito = {A,B,C,D,E};
    char r;
    for (i=0; i<Q; i++)
     {  scanf("%s", &r);
        if (gabarito[i]==r) questoesCertas++;
         printf ("%d\n", questoesCertas);

     }





    return 0;
}

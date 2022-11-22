#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int somme = 0;
    int i = 0;
    int erreur = 0;

    if(argc <= 2) {
            printf("Erreur : au moins deux arguments doivent etre rentres");
            erreur = 1;
        }
    while(i<argc && !erreur) {
            if(atoi( argv[i] ) == 0) {
                printf("Erreur: les arguments rentres ne sont pas des entiers");
                erreur = 1;
            }
            somme += atoi( argv[i] );
            i++;
        }
    if (!erreur) {
        printf( "La somme des valeurs saisies est de %d.\n", somme );
    }
    return 0;
}

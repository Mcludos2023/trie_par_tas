#include <stdio.h>
#include "tri_tas.h"

// Exemple d'utilisation
int main() {
    int arr[] = {20, 40, 16, 50, 2, 12,51,70,30,4,9,31,27,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\n");
   
    printf("Tableau d'origine :\n");
    afficher_element(arr, n);

   printf("\n");
   printf("\n");

    tri(arr, n);

    printf("Tableau finale :\n");
    afficher_element(arr, n);

    return 0;
}
#include <stdio.h>
#include "tri_tas.h"

// Fonction pour échanger deux éléments d'un tableau
void echange(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


// Fonction pour reconstruire le tas à partir d'un nœud donné
void construction(int arr[], int n, int i) {
    int largest = i; // Initialiser le nœud le plus grand comme racine
    int left = 2 * i + 1; // Indice du fils gauche
    int right = 2 * i + 2; // Indice fils droit

    // Si le fils gauche est plus grand que la racine
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Si le fils droit est plus grand que la racine
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Si le nœud le plus grand n'est pas la racine
    if (largest != i) {
        echange(&arr[i], &arr[largest]);

        // Récursivement reconstruire le sous-arbre affecté
        construction(arr, n, largest);
    }
}


// Fonction principale pour trier un tableau en utilisant le tri par tas
void tri(int arr[], int n) {
    // Construire le tas (réarranger le tableau)
    for (int i = n / 2 - 1; i >= 0; i--)
        construction(arr, n, i);

    // Extraire les éléments un par un du tas
    for (int i = n - 1; i > 0; i--) {
        echange(&arr[0], &arr[i]); // Déplacer la racine actuelle à la fin

        // Appeler heapify sur le réduit heap
        construction(arr, i, 0);
    }
}



// Fonction utilitaire pour afficher un tableau donné
void afficher_element(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
#ifndef __TRI_TAS__H
#define __TRI_TAS__H


// Fonction pour échanger deux éléments d'un tableau
void echange(int* a, int* b);

// Fonction pour reconstruire le tas à partir d'un nœud donné
void construction(int arr[], int n, int i); 

// Fonction principale pour trier un tableau en utilisant le tri par tas
void tri(int arr[], int n);

// Fonction utilitaire pour afficher un tableau donné
void afficher_element(int arr[], int n);

#endif
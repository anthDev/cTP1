/************************************

		Tableaux !
		
	implantation en C !

************************************/


/*
*	
*	
*	le but est de :
*	- implanter les différentes allocations ;
*	- implanter la recherche (minimum et maximum);
*	- implanter le tri de tableau (sélection et quicksort) ;
*	
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <string.h>

#define SIZE 50

#define MAX_VAL 500


//tableau global

/* mettre votre code ici */


/*
	fonction d'affichage
*/

void affiche_tableau(int *tab, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("Affichage du tableau ci-dessous : \n");
        printf("%d", tab[i]);
    }

}

/*
	fonction d'initialisation
*/

int init_tableau(int *tab, int size) {
    //tab = malloc(size * sizeof(*tab));// initialliser un tableau en allouant la memoire.
    int i;
    for (int i = 0; i < size; ++i) {
        tab[i] = rand(); // I just added random number

    }
}


/*
	fonctions de recherche
*/

int min_tab(int *tab, int size) {
    int i, small;
    small = tab[0];
    for (int i = 0; i < size; ++i) {
        if (tab[i] < small)
            small = tab[i];
    }
    printf("%d\n", small);
}

int max_tab(int *tab, int size) { //this is the same philosophy than min_tab but for big values.
    int i, big;
    big = tab[0];
    for (int i = 0; i < size; ++i) {
        if (tab[i]>big)
            big = tab[i];
    }
    printf("%d\n",big);
}

/*
	procédure d'échange dans un tableau entre deux éléments
*/

void swap(int *tab, int elt1, int elt2) {
int temp = tab[elt1]; // variable de stockage temporaire
    tab[elt1] = tab[elt2]; // on swap
    tab[elt2] = temp; // on swap le temporaire

}


/*
	procédure de tri
*/

/*void selection_sort(int *tab, int size) {
    int i, j, min_idx;
    for (i = 0; i < size-1; i++){
        min_idx=i;
        if (tab[j] < tab[min_idx])
            min_idx = j;
        //swap(*tab, size);// On swap pour procéder au tri

        // j'ai pas fini
    }
}*/

int quick_sort(int *tab, int size) {
    /* mettre votre code ici */
    return 0;
}

//Prototypes//
unsigned long int rec_factorial(int n);
unsigned long int factorial(int n);
unsigned long int fibonacci(int n);
unsigned long int rec_fibonacci(int n);
//Prototypes//

int main() {


    //srand(time(NULL)); je l'utiliserai pas car je fais des tests sur toutes les fonctions avec un chiffre simple.

    int a = 4; // val de test, parametre des fonctions suivantes
    int b, c, d, e; // print les returns de fonctions
    b = factorial(a);
    printf("Le factorielle de %d est : %d\n", a, b); //result
    c = rec_factorial(a);
    printf("Le factorielle de %d est : %d\n", a, c); //result
    d = fibonacci(a);
    printf("sont les termes de la suite du nombre : %d \n", a); //result
    e = rec_fibonacci(a); // déjà un result dans la fct
    return 0;
}


unsigned long int factorial(int n) {
    int i;
    int j = 1;
    //printf("%d\n", n);
    for (i = 1; i < n + 1; i++) {
        //printf("%d\n", i);
        j = j * i;
    }
    return j;
}

unsigned long int rec_factorial(int n) {
    {
        if (n == 1)
            return 1;
        else
            return (n * rec_factorial(n - 1));
    }

}


unsigned long int fibonacci(int n) {
    int var1 = 0;
    int var2 = 1;
    int next, i;

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = var1 + var2;
            var1 = var2;
            var2 = next;
        }
        printf(" %d ", next);
    }

    return next;
}


unsigned long int rec_fibonacci(int n) {
    if (n == 2 || n == 1)
        return n;
    else
        return (rec_fibonacci(n - 1) + rec_fibonacci(n - 2));
}






/*Écrire un programme qui permet de saisir trois matrices A(n  x m), B(n x m) et C(n x o),
 puis calcul la matrice Somme S = A + B et la matrice Produit P = A*C ? */
#include<stdio.h>
#include<stdlib.h>
int main() {
      int n,m;
      int **A,**B,**S;
      int **PAi,**PBi,**PSi;
   
    do{
       printf("Entrer la valeur de n:");
       scanf("%d",&n);
     }while(n<1);

    do{
       printf("Entrer la valeur de m:");
       scanf("%d",&m);
     }while(m<1);

     A=(int**)malloc(n*sizeof(int*));
     B=(int**)malloc(n*sizeof(int*));
     S=(int**)malloc(n*sizeof(int*));

     for(PAi=A;PAi< A+n;PAi++)
     *PAi=(int*)malloc(m*sizeof(int));

     for(PBi=A;PBi< B+n;PBi++)
     *PBi=(int*)malloc(m*sizeof(int));

     for(PSi=A;PSi< S+n;PSi++)
     *PSi=(int*)malloc(m*sizeof(int));
    
    for(PAi=A;PAi< A+n;PAi++){
      for(PAj=*PAj;PAj< *PAj+m;PAj++){
        printf("Entrer l'élément(%d,%d) de A:", );
      }
    }
return 0;
 }
/*Exercice 3 :
Soit deux tableaux T1 (de taille N1) et T2 (de taille N2) à
déclarer et à remplir. Écrire un programme qui permet de :
Q 1. Lire les deux ensembles T1 et T2.
Q 2. Vérifier si l’ensemble T1 est inclus dans T2 ou pas ?
Exemple :
Si T1 = {1, 4, 6} et T2 = {1, 3, 6, 8} : T1 n’est pas inclus dans T2
Si T1 = {1, 4, 6} et T2 = {1, 4, 5, 6} : T1 est inclus dans T2
Q 3. Créer un nouveau tableau T soit l’union de T1 et T2. On
dit qu’un tableau Test l’union de T1 et T2 si T est un
"tableau de taille N trié" composé de tous les éléments de
T1 en plus de tous les éléments de T2.
Exemple : Si T1 = {2, 14, 28, 75} et T2 = {1, 6, 14, 28}
Alors, T = {1, 2, 6, 14, 28, 75}.*/
#include<stdio.h>
#include<stdlib.h>
 int main(){
int N1,N2;
int *T1,*T2,*P1,*P2;
int C;
int ok;
//Question.1
         do{
        printf("Donner la taille de la tableau T1:");
        scanf("%d",&N1);
         }while(N1<1);
        do{
        printf("Donner la taille de la tableau T2:");
        scanf("%d",&N2);
         }while(N2<1);
       T1=(int *)malloc(N1*sizeof(int));
       T2=(int *)malloc(N2*sizeof(int));

         for(P1=T1;P1<T1+N1;P1++){
            printf("Donner l'élément %ld:",P1-T1+1);
              scanf("%d",P1);    
                  } 
         for(P2=T2;P2<T2+N2;P2++){
            printf("Donner l'élément %ld:",P2-T2+1);
              scanf("%d",P2);    
                  }   
                  printf("\n Tableau T1:");
                    for(P1=T1;P1<T1+N1;P1++){
                        printf("\n L'élément %ld est:%d",P1-T1+1,*P1);
                                    } 
                               printf("\n Tableau T2:");
                    for(P2=T2;P2<T2+N2;P2++){
                        printf("\n L'élément %ld est:%d",P2-T2+1,*P2);
                                    } 
  //Question.2
 if(N1>N2){
printf("\n Erreur:T1 n'est pas inclus dans T2:");
} 
else{
      if(*P1==*P2){
          for(C=0,P1=T1;P1<T1+N1;P1++){
              ok=0;
          for(P2=T2;P2<T2+N2 && ok==0;P2++){
              C++;
              ok=1;
               break;
 }
          }
       }

} 
if(C==N1)
printf("\n \t T1 est inclus dans T2");
 else 
 printf("\n  \t T1 n'est inclus dans T2");
   
     } 
   //Question.3

   T=(int *)malloc(N*sizeof(int));
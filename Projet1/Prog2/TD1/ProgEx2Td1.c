/*Exercice 2 :
On appellera "Ensemble de taille N", tout tableau de N,
(N>0), entiers strictement positifs et tous différents. Ce
tableau sera noté :

T= {T[0], T[1], ..., T[N-1]}.

Soit un tableau T (de taille N) à déclarer et à remplir avec N
entiers strictement positifs.
Ecrire un programme qui permet de :
Q.1 Lire les éléments du tableau T (de taille N à saisir)
Q.2 Vérifier si T est un "Ensemble de taille N".
Q.3 Lire la valeur d’un entier X, puis afficher le message :
" X existe dans T " si X est un élément du tableau T,
sinon il affiche "X n existe pas a T".
Q.4 Trier dans l’ordre croissant du tableau T.*/
#include<stdio.h>
#include<stdlib.h>
 int main(){
     int N,X,tmp;
     int *T,*P,*Q;
     int OK;
     //Exercice2
       //Question.1
       do{
        printf("Donner la taille de la tableau T:");
        scanf("%d",&N);
         }while(N<1);
     T=(int *)malloc(N*sizeof(int));
for(P=T;P<T+N;P++){
            printf("Donner l'élément %ld:",P-T+1);
              scanf("%d",P);    
         } 
       //Question.2
for(P=T;P<T+N && OK==1;P++){
   if(*P<=0)
   OK=0;
   else{
     for(Q=P+1;Q<T+N && OK==1;Q++){
         if(*P==*Q)
         OK=0;
      }
    }
}   
    if(OK==1)
    printf("\n Tableau est un ensemble.");
    else 
    printf("\n Tableau n'est un ensemble.");
       //Question.3
printf("\n Donner la valeur de X:");
scanf("%d",&X);
OK=0;
for(P=T;P<T+N && OK==0;P++){
  if(X==*P)
  OK=1;
  if(OK==1)
  printf("\n %d  existe dans le tableau",X);
  else 
  printf("\n %d  n'existe pas dans le tableau",X);
 } 

        //Question.4
for(P=T;P<T+N;P++){
        for(Q=P+1;Q<T+N;Q++){
            if(*P>*Q){
              tmp=*P;
              *P=*Q;
             *Q=tmp;
                     }
         printf("\n Le tableau trié par ordre croissante:\n");
          for(P=T;P<T+N;P++){
            printf("%d \t",*P);
          }
       }
 }
    }
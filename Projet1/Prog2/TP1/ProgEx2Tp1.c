#include<stdio.h>
#include<stdlib.h>
 int main(){
    int N1,N2;
    int *T1,*T2,*P1,*P2;
    int OK,C;
//Question.1
    do{
    printf("Donner la taille de Tableau T1:\n");
    scanf("%d",&N1);
    }while(N1<1);

    do{
    printf("Donner la taille de Tableau T2:\n");
    scanf("%d",&N2);
    }while(N2<1);

    T1=(int*)malloc(N1*sizeof(int));
    T2=(int*)malloc(N2*sizeof(int));

printf("Saisir les éléments de T1 \n");
  for(P1=T1;P1<T1+N1;P1++){
   printf("Donner la valeur d'élément %ld de T1 :\n",P1-T1+1);
   scanf("%d",P1);
  }
printf("Saisir les éléments de T2 \n");
   for(P2=T2;P2<T2+N2;P2++){
   printf("Donner la valeur d'élément %ld de T2 :\n",P2-T2+1);
   scanf("%d",P2);
  }
    printf("\n Tableau T1:\n");
      for(P1=T1;P1<T1+N1;P1++){
         printf("L'élément %ld :%d \n",P1-T1+1,*P1);
      } 
    printf("\n Tableau T2:\n");
      for(P2=T2;P2<T2+N2;P2++){
         printf("L'élément %ld :%d \n",P2-T2+1,*P2);
      }  
//Question.2
  if(N1>N2)
    printf("Erreur:T1 n'est pas inclus dans T2\n");
    else{
     for(C=0,P1=T1;P1<T1+N1;P1++){
             OK=0;
          for(P2=T2;P2<T2+N2 && OK==0;P2++){
             if(*P1==*P2){
               C++;
               OK=1;
              }
          }
      }
      if(C==N1)
      printf("T1 est inclus dans T2 \n");
      else 
      printf("T1 n'est pas inclus dans T2 \n");
    }
//Question.3
        N=N1;
   T=(int*)malloc(N*sizeof(int));
      for(P=T,P1=T1;P<T+N;P1++,P++){
          *P=*P1;


      }


 }


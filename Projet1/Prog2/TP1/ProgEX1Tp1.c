#include<stdio.h>
#include<stdlib.h>
 int main(){
    int N,X,tmp;
    int OK;
    int *P,*Q,*T;
    do{
    printf("Donner la taille de Tableau:");
    scanf("%d",&N);
    }while(N<1);
    T=(int*)malloc(N*sizeof(int));
//Question.1
        for(P=T;P<T+N;P++){
        printf("Entrer la valeur d'élément %ld ",P-T+1);
        scanf("%d",P);
    }
//Question.2
    OK=1;
 for(P=T;P<T+N && OK==1;P++){
       if(*P<1)
       OK=0;
       else{
           for(Q=P+1;Q<T+N && OK==1;Q++){
               if(*P==*Q)
               OK=0;
           }
       }  
  }
  if(OK==1)
  printf("T est un ensemble");
  else
  printf("T n'est pas un ensemble");
//Question.3
   printf("\n Entrer la valeur de X:");
   scanf("%d",&X);
   OK=0;
   for(P=T;P<T+N && OK==0;P++){
      if(X==*P)
       OK=1;
   }
   if(OK==1)
  printf("\n %d appartient a T \n",X);
  else
  printf("\n %d appartient pas a T \n ",X);
//Question.4
for(P=T;P<T+N;P++){
    for(Q=P+1;Q<T+N;Q++){
           if(*P>*Q){
             tmp=*P;
             *P =*Q;
             *Q=tmp;
           } 
    }
    printf(" %d \t",*P);
}
return 0;
}








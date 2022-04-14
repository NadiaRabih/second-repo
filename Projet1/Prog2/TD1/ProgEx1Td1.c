 /*Exercice 1 :
Écrire un programme qui permet de gérer les notes du module
«Programmation2» de la filière SMI-S4, pour N étudiants:
1. Saisir les notes, sachant que la note est comprise entre 0
et 20 ;
2. Calculer la moyenne de la classe ;
3. Trier les notes dans un sens décroissant.*/
#include<stdio.h>
#include<stdlib.h>
 int main(){ 
     int nbr;
     float *P,*Note,*Q;
     float S,tmp;
//Exercice1 
    //Question.1   
    printf("Entrer le nombre des étudiantes:");
    scanf("%d",&nbr);
    Note=(float*)malloc(nbr*sizeof(float));
    for(P=Note;P<Note+nbr;P++){
           do{
              printf("Donner la note d'étudiant %ld:",P-Note+1);
              scanf("%f",Note);
             }while(*Note<1 || *Note>20);
           
                               }
    
    //Question.2
   
    for( S=0,P=Note;P<Note+nbr;P++){
       S += *P;
        }

        printf("\n \n ->La moyenne de la classe est:%.2f \n ",(float)S /nbr);
         
    //Question.3
     for(P=Note;P<Note+nbr;P++){
        for(Q=P+1;Q<Note+nbr;Q++){
            if(*P<*Q){
              tmp=*P;
              *P=*Q;
             *Q=tmp;
                     }
        }
                         printf("\n La liste des notes trié par ordre décroissante:\n");
                          for(P=Note;P<Note+nbr;P++){
                            printf("%.2f \t",*P);

                          }
     }   

return 0;

     } 
     


 


 
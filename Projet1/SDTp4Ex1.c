#include<stdio.h>
#include<stdlib.h>
//Question.1
typedef struct {
    int jj, mm, aa ;
}date ;

typedef struct {
    int numero ;
    char titre[30] ;
    date production ;
}MP3 ;

typedef struct LI{
     MP3 elm;   
    ListeMP3 *suiv;
}ListeMP3;
//Question.2
int NbTotal(ListeMP3 *FP){
    int cmp=0;
     while(FP!=NULL){
            FP=FP->suiv;
            cmp++;
    }                              
    return cmp;
}
//Question.3
ListeMP3 * Upload(ListeMP3 *FP, ListeMP3 nouv){
    ListeMP3 *tmp=FP;
    if(FP==NULL)
         FP=&nouv;
    else{
         while(tmp!=NULL){
            tmp=tmp->suiv;
         }
      tmp ->suiv=&nouv;
    }  
 }
 //Question.4
 typedef struct {
     
      ListeT *suiv;

 }ListeT;



 
 //Question.5
ListeT * Download(ListeMP3 *FP, ListeMP3 Tch, ListeT *T){



}

   int main(){
      








      }
#include <stdio.h>
#include <stdlib.h>

void fifo(int tab[4], int a){
     tab[0]=tab[1];
     tab[1]=tab[2];
     tab[2]=tab[3];
     tab[3]=a;
}

void lifo(int tab[4], int a){
     tab[3]=tab[2];
     tab[2]=tab[1];
     tab[1]=tab[0];
     tab[0]=a;
}
    
int main(int argc, char *argv[])
{
  int tab[]={1,2,3,4};
  int a=0,i=0;
  printf("Podaj a:\t");
  scanf("%i",&a);
  fifo(tab,a);
  printf("Tablica:\t");
  for(i=0;i<4;i++){
                   printf("%i\t",tab[i]);
                   }
  printf("\n");
  
  system("PAUSE");	
  return 0;
}

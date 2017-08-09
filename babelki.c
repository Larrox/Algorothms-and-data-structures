#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int tab[]={4,2,9,5,8,7,8};
  int tab2[]={0,0,0,0,0,0,0};
  int i=0,j=0;
  for(i=2;i<7;i++){
                   for(j=7;j>=i;j--){
                                    if (tab[j-1]>tab[j]){
                                                       tab2[j]=tab[j-1];
                                                       tab[j-1]=tab[j];
                                                       tab[j]=tab2[j];
                                                       }
                                                       }
                         }
  for(i=0;i<7;i++){
                   printf("%i", tab[i]);
                   }                                  
  system("PAUSE");	
  return 0;
}

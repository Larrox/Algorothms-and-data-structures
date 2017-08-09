#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int tab[]={1,5,3,8,7,2,4,6};
  int i=0,j=0;
  for(i=2;i<8;i++){
                   tab[0]=tab[i];
                   j=i-1;
                   while (tab[0]<tab[j]){
                                     tab[j+1]=tab[j];
                                     j=j-1;
                                     }
                   tab[j+1]=tab[0];
                   }
  printf("Your tab is like this:\t");
  for(i=1;i<8;i++){
                   printf("%i", tab[i]);
                   }
  printf("\n");
  system("PAUSE");	
  return 0;
}

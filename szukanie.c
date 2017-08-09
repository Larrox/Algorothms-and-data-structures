#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
  int tab[8]={2,4,6,9,12,34,45,67};
  int l=0,p=8,x=0,i=0,k=0;
  printf("Enter Your x:\t");
  scanf("%i", &x);
  for(i=0;;i++){
                k=((l+p)/2);
                if (x>tab[k]){
                              l=k+1;}
                              else p=k-1;
                if (x==tab[k]){
                                printf("Your x: %i was detected on the %i. place in table.\n", x,k+1);
                                break;}
                if (l>p){
                     printf("There is no x: %i in table.\n",x);
                     break;}
                }
  system("PAUSE");
  return 0;
}

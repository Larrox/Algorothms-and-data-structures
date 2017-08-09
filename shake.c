#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int tab[]={4,2,9,5,8,7,8};
  int tab2[]={0,0,0,0,0,0,0};
  int l=1,r=6,k=6,j=0,s=0,p=0;
  do{
      for(j=r;j>=l;j--){
                         if(tab[j-1]>tab[j]){
                                             p=tab[j-1];
                                             tab[j-1]=tab[j];
                                             tab[j]=p;
                                             k=j;
                                                       }}
      l=k+1;
      s++;
      for(j=l;j<=r;j++){
                        if(tab[j-1]>tab[j]){
                                             p=tab[j-1];
                                             tab[j-1]=tab[j];
                                             tab[j]=p;
                                             k=j;
                                                       }}
      r=k-1;
      s++;
      }while (l<r);
  int i=0;                                                                 
  for(i=0;i<7;i++){
                   printf("%i", tab[i]);
                   }
  printf("\nIlosc krokow:\t%i\n",s);
  system("PAUSE");	
  return 0;
}

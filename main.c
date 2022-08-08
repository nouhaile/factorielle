#include <stdio.h>
#include <stdlib.h>
int factorielle(int n){
   int i,f=1 ;


    for (i = 1; i <= n; i++){
     f = f * i;

}
    return f;
}
int main()
{

 int N, i, f = 1;

  printf("Entrez un nombre pour calculer sa factorielle\n");
  scanf("%d", &N);

  for (i = 1; i <= N; i++)
    f = f * i;

  printf("Factorielle de %d = %d\n", N, f);


printf("la factorielle est %d",factorielle(N));





    return 0;
}

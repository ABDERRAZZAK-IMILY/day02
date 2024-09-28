#include <stdio.h>
#include <stdlib.h>

  int somme(int x , int y){

     return x + y;


  }
int main()
{
     int a ,b;
     printf("entre le deux noubre :");
     scanf("%d %d" , &a ,&b);

     printf("le somme de les deux noumbre est : %d" , somme(a ,b));

    return 0;

}

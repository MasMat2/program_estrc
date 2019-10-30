#include<stdio.h>
#include<stdlib.h>

int main(){
  int A[' '][' '];
  int i, j, n;
  int *ap;
  int suma=0;

  printf("Ingresa la dimension de la matriz cuadrada: ");
  scanf("%d", &n);
  ap = A[0];
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("A[%d][%d] = ", i+1, j+1);
      scanf("%d", ap);
      ap++;
    }
  }

  //Rutina para sumar los elementos de la diagonal secundaria
  ap = A[0];
  for(i=0;i<n;i++){
    ap+=n-1;
    suma += *ap;
    printf("\n%d", *ap);
  }

  printf("\nMatriz ingresada:");
  ap = A[0];
  for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<n;j++){
      printf("\t%d", *ap);
      ap++;
    }
  }
  printf("\n\nLa suma de los elementos de la diagonal secundaria es: %d", suma);
  printf("\n\n\n\n");
  getchar();
  return 0;
}

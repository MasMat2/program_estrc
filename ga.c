#include<stdio.h>
#include<stdlib.h>

int main(){
  int A[' '][' '];
  int S[' '];
  int i, j, n;
  int *ap, *sp;

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

  //Obtener la sumatoria de las hileras y almacenar el resultado en S
  ap = A[0];
  sp = S;
  for(i=0;i<n;i++){
    *sp=0;
    for(j=0;j<n;j++){
      *sp+=*ap;
      ap++;
    }
    sp++;
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

  printf("\nLa sumatoria de las hileras es: ");
  sp = S;
  printf("\n");
  for(i=0;i<n;i++){
    printf("\t%d", *sp);
    sp++;
  }
  printf("\n\n\n\n");
  getchar();
  return 0;
}

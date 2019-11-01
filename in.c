#include<stdio.h>
#include<stdlib.h>

void escritura(char arreglo, int n, int *ap);

int main(){
  int A[' '], B[' '], C[' '];
  int *p, *p1, *p2;
  int i, n;
  printf("Ingresa el numero elementos de los vectores A y B: ");
  scanf("%d", &n);
  printf("\nArreglo A:\n");
  escritura('A', n, A);
  printf("\nArreglo B:\n");
  escritura('B', n, B);
  p = A;
  p1 = B;
  p2 = C;
  for(i=0;i<n*2;i++){
    if(i%2){
      *p2 = *p1;
      p1++;
    }else{
      *p2 = *p;
      p++;
    }
    p2++;
  }

  printf("\nArreglo intercalado:\n");
  p2 = C;
  for(i=0;i<n*2;i++){
    printf("\t%d", *p2);
    p2++;
  }

  printf("\n\n\n\n");
  getchar();
  return 0;
}

void escritura(char arreglo, int n, int *ap){
  int i;
  for(i=0;i<n;i++){
    printf("%c[%d] = ", arreglo, i+1);
    scanf("%d", ap);
    ap++;
  }
}

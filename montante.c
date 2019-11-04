#include<stdio.h>
#include<stdlib.h>


void show_matrix(int n, int *mat);

int main(){
  int A[' '][' '];
  int i, j, k, n;
  printf("Ingresa el numero de variables del sistema: ");
  scanf("%d", &n);
  for(i=0;i<n;i++){
    printf("\nEcuacion %d:", i+1);
    printf("\n");
    for(j=0;j<n;j++){
      printf("Coeficiente de la variable %d: ", j+1);
      scanf("%d", &A[i][j]);
    }
    printf("Constante de la ecuacion: ");
    scanf("%d", &A[i][n]);
  }

  show_matrix(n, A[0]);
  //Metodo montante
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      for(k=i+1;k<n+1;k++){
        if(i!=0){
        if(j!=i)
        A[j][k] = (A[i][i]*A[j][k]-A[j][i]*A[i][k])/A[i-1][i-1];
      }else{
        if(j!=i)
        A[j][k] = (A[i][i]*A[j][k]-A[j][i]*A[i][k]);
      }
      }
    }
  }

  printf("\nSolucion del sistema:");
  for(i=0;i<n;i++){
    printf("\nValor de la variable %d: %.2f", i+1, (float) A[i][n]/A[n-1][n-1]);
  }
  printf("\n\n\n\n");
  getchar();
  return 0;
}

void show_matrix(int n, int *mat){
  int i, j;
  int *first;
  first = mat;
  for(i=0;i<n;i++){
    printf("\n");
    mat = first+i*32;
    for(j=0;j<n+1;j++){
      printf("\t%d", *mat);
      mat++;
    }
  }
}

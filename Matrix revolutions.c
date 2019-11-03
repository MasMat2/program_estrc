#include<stdio.h>

int main(){
  int i, j, k, n;
  float A[' '][' '], A1[' '][' '], A_[' '][' '];
  float mult;

  printf("Ingresa la dimesnion de la matriz cuadrada: ");
  scanf("%d", &n);


  //Poblar matriz identidad
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(i==j){
        A1[i][j] = 1;
      }else{
        A1[i][j] = 0;
      }
    }
  }

  //Poblar matriz con entrada del usuario
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("Ingrese el valor de A[%d][%d]: ", i, j);
      scanf("%f", &A[i][j]);
      A_[i][j] = A[i][j];
    }
  }

  //Crear la forma rectangular superior
  for(i=0;i<n;i++){
    for(k=i+1;k<n;k++){
      mult = (float)-A[k][i]/A[i][i];
      for(j=0;j<n;j++){
        A[k][j] += A[i][j]*mult;
        A1[k][j] += A1[i][j]*mult;
      }
    }
  }

  //Eliminar elementos que esten arriba de la diagonal principal
  for(i=n-1;i>=0;i--){
    for(k=i-1;k>=0;k--){
      mult = -A[k][i]/A[i][i];
      for(j=0;j<n;j++){
        A[k][j] += A[i][j]*mult;
        A1[k][j] += A1[i][j]*mult;
      }
    }
  }

  //Converir a uno los elementos de la diagonal principal dividiento entre A[i][i] cada elemento de la hilera
  for(i=0; i<n; i++){
    mult = A[i][i];
    for(j=0; j<n; j++){
      A[i][j] = A[i][j]/mult;
      A1[i][j] = A1[i][j]/mult;
    }
  }

  printf("\nLa matriz original es");
  for(i=0;i<n;i++){
    printf("\n  ");
    for(j=0;j<n;j++){
      printf("%-8.2f", A_[i][j]);
    }
  }
  printf("\nLa matriz inversa es");
  for(i=0;i<n;i++){
    printf("\n  ");
    for(j=0;j<n;j++){
      printf("%-8.2f", A1[i][j]);
    }
  }
  printf("\n\n\n\n");
  fflush(stdin);
  getchar();
  return 0;
}

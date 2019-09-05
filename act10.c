#include <stdio.h>

int unid_cent(char unidades[20], int index);
int decen(char decenas[20]);

int main(){
  char centenas[20], decenas[20], unidades[10], y[2];
  int centenas_n, decenas_n, unidades_n;
  printf("Ingresa un numero cardinal (e.j. ciento veintiocho): ");
  scanf("%s", centenas);
  centenas_n = unid_cent(centenas, 0);
  scanf("%s", decenas);
  decenas_n = decen(decenas);
  if (decenas_n<10){
    scanf("%s", y);
    scanf("%s", unidades);
    unidades_n = unid_cent(unidades, 0);
    printf("%d%d%d\n\n", centenas_n, decenas_n, unidades_n);
  }
  else{
    printf("%d%d\n\n", centenas_n, decenas_n);
  }
  fflush(stdin);
  getchar();
  return 0;
}


int unid_cent(char unidades[20], int index){
  int unidades_n;
  switch (unidades[index]){
    case ('c'):
      switch(unidades[index+1]){
        case('e'):
          unidades_n = 0;
          break;
        case ('u'):
          unidades_n = 4;
          break;
        case ('i'):
          switch(unidades[index+2]){
            case 'e':
              unidades_n = 1;
              break;
            case 'n':
              unidades_n = 5;
              break;
          }
          break;
      }
      break;

    case ('u'):
      unidades_n = 1;
      break;

    case ('d'):
      unidades_n = 2;
      break;

    case ('t'):
      unidades_n = 3;
      break;

    case ('s'):
      switch(unidades[index+1]){
        case ('e'):
          switch(unidades[index+2]){
            case 't':
              unidades_n = 7;
              break;
            case 'i':
              unidades_n = 6;
              break;
        }
        break;
        case ('i'):
          unidades_n = 7;
          break;
      }
      break;

    case ('o'):
      unidades_n = 8;
      break;

    case ('n'):
      unidades_n = 9;
      break;
    case('q'):
      unidades_n = 5;
      break;
  }
  return unidades_n;
}

int decen(char decenas[20]){
  int decenas_n=0;
  switch(decenas[0]){
    case 'd':
      switch(decenas[3]){
        case 'z':
          decenas_n = 10;
          break;
        case 'e':
          decenas_n = 12;
          break;
        case 'c':
          switch (decenas[6]){
            case 'e':
              decenas_n = 16;
              break;
            case 'i':
              decenas_n = 17;
              break;
            case 'c':
              decenas_n = 18;
              break;
            case 'u':
              decenas_n = 19;
              break;
          }
          break;
      }
      break;
    case 'o':
      switch(decenas[1]){
        case 'n':
          decenas_n = 11;
          break;
        case 'c':
          decenas_n = 8;
          break;
      }
      break;
    case 't':
      switch(decenas[3]){
        case 'c':
          decenas_n = 13;
          break;
        case 'i':
          decenas_n = 3;
          break;
      }
      break;
    case 'c':
      switch(decenas[1]){
        case 'a':
          decenas_n = 14;
          break;
        case 'u':
          decenas_n = 4;
          break;
        case 'i':
          decenas_n = 5;
          break;
      }
      break;
    case 'q':
      decenas_n = 15;
      break;
    case 'v':
      switch(decenas[5]){
        case 'e':
          decenas_n = 20;
          break;
        case 'i':
          decenas_n = 20+unid_cent(decenas, 6);
          break;

      }
      break;
    case 's':
      switch(decenas[2]){
        case 's':
          decenas_n = 6;
          break;
        case 't':
          decenas_n = 7;
          break;
      }
      break;
    case 'n':
      decenas_n = 9;
      break;
  }
  return decenas_n;
}

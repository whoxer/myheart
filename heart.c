#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void print(char message[60]); 
int show_my_heart(int *size);

int main() {
    int *size = (int *) malloc(21 * sizeof(int));
    
    print("insira o tamanho do seu coração: ");
    scanf("%d", size);
    
    print("\n");
    show_my_heart(size);
    
    free(size);
    
    print("\nesse é o tamanho do meu coração pra você ellenzinha <3\n");
    return 0;
}

int show_my_heart(int *size) {
  int i, j;
  
  for (i = *size / 2; i <= *size; i += 2) {
  
      for (j = 1; j < *size - i; j += 2) {
          print(" ");
      }
      
      for (j = 1; j <= i; j++) {
          print("e");
      }
      
      for (j = 1; j <= *size - i; j++) {
          print(" ");
      } 
      
      for (j = 1; j <= i; j++) {
          print("e");
      }
      
      print("\n");
    }
    
  for (i = *size; i >= 1; i--) {
      
    for (j = i; j < *size; j++) {
          print(" ");
    }
      
    for (j = 1; j <= (i * 2) - 1; j++) {
          print("e");
    }
    
    print("\n");
  }
 
  return 1;
}
void print(char message[60]) {
    printf("%s", message);
}

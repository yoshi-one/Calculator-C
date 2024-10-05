#include <stdio.h>

int main() {

  char op;
  double first, second;

printf("Pilih Operator (+, -, *, /): ");
 scanf("%c", &op);

printf("Bilangan Pertama: ");
  scanf("%lf", &first);

printf("Bilangan Kedua: ");
  scanf("%lf", &second);

  switch (op){
    
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
      
    default:
      printf("Operator Salah!");
  
  }

  return 0;


}

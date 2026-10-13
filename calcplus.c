#include <stdio.h>
void calculate(double num1, double num2, char opr1) {
		if(opr1 == '+') {
			printf("%f", num1 + num2);
		} else if(opr1 == '-') {
			printf("%f", num1 - num2);
		} else if(opr1 == 'x') {
			printf("%f", num1 * num2);
		} else {
			printf("No result");
		}
}


int main() {
	double num1;
	double num2;
	char opr1;
	printf("First number : ");
	scanf("%lf", &num1);
	printf("Operation : ");
	scanf(" %c", &opr1);  /*   space in order to skip the unscanned newline of ENTER [ scanf doesnt scan newline of ENTER ] */
	printf("Second number : ");
	scanf("%lf", &num2);
	
	calculate(num1, num2, opr1);
  return 0;

}




#include <stdio.h>

        int main()

        {

		printf("Enter 10 floating-point numbers:\n");

                double a;
                double max;
                double min;
                double sum;
                double product;

		for(int i = 1; i <= 10; i++) {

                	scanf("%lf", &a);

			if(i == 1) {
				max = a;
				min = a;
				sum = a;
				product = a;

			} else {

				sum = sum + a;
				product = product * a;

				if(a > max) {

					max = a;

				} else if(a < min) {

					min = a;

				}

			}

		}

		printf("Sum is %.5f \n", sum);
		printf("Min is %.5f \n", min);
		printf("Max is %.5f \n", max);
		printf("Product is %.5f \n", product);
}

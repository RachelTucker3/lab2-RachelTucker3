#include <stdio.h>

	int main()
	{

	int a, b, c, d, e, f;

                printf("Enter six integers: \n");

                for(int i = 1; i <= 6; i = i + 1) {

                        if(i == 1) {
                                scanf("%d", &a);
                        }else if(i == 2) {
                                scanf("%d", &b);
                        }else if(i == 3) {
                                scanf("%d", &c);
                        }else if(i == 4) {
                                scanf("%d", &d);
                        }else if(i == 5) {
                                scanf("%d", &e);
                        }else{
                                scanf("%d", &f);
                        }

                }

                printf("1234567890bb1234567890\n");
                printf("%10d  %10d\n", a, b);
                printf("%10d  %10d\n", c, d);
                printf("%10d  %10d\n", e, f);

	}

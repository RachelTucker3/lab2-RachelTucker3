
#include <stdio.h>

        int main()

        {
                int n;

                printf("Enter a number from 1 to 20:\n");
                scanf("%d", &n);
                if(n > 20) {
                        printf("Number is not in the range from 1 to 20\n");
                }else if(n < 1) {
                        printf("Number is not in the range from 1 to 20\n");
                } else {
                        printf("Here are the first ");
                        printf("%d", n);
                        printf(" ordinal numbers:\n");
                        for(int i = 1; i <= n; i = i + 1) {
                                if(i == 1){ printf("1st\n");
                                }else if(i == 2){
                                        printf("2nd\n");
                                }else if(i == 3){
                                        printf("3rd\n");
                                }else{
                                        printf("%d", i);
                                        printf("th\n");
                                }
  }

                }
        }


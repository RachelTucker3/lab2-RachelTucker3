#include <stdio.h>

	int main()
	{

		int x;

		while(x != 0) {

			printf("Number ? \n");
			scanf("%d", &x);
			if(x == 0) {
			printf("Done\n");

			}else{

				if(((x*(x+1))/2) == (int)((x*(x+1))/2) ) {
					printf("%d is a triangular number\n", x);
				} else{
					printf("%d is not triangular,", x);

					int y = x;
					while(((y*(y+1))/2) != (int)((y*(y+1))/2)) {
						y = y - 1;
					}
					printf(" nearest trianglular number below %d is %d\n", x, y);
				}

			}
		}

	}

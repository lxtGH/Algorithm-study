
#include<stdio.h>

#include<math.h>

	int main(){

		int max;

		int N;

		char kirby;

		scanf("%d %c",&N,&kirby);

		int line = (int)sqrt((N + 1) / 2);

		max = line * 2 - 1;

		for (int i = 0;i < line;i++){

			for (int j = 0;j < max - i;j++){
				
				if (j < i){
					printf(" ");
				}else{
					printf("%c",kirby);
				}

			}

			printf("\n");

		}

		for (int i = line - 2;i >= 0;i--){

			for (int j = 0;j < max - i;j++){

				if (j < i){

					printf(" ");

				}else{

					printf("%c",kirby);

				}

			}

			printf("\n");

		}

		int left =  N - (pow(line,2) * 2 - 1);

		printf("%d",left);

		return 0;

	}

#include<stdio.h>

#include<string.h>

	int main(){

		int N;

		scanf("%d",&N);

		char zqd[N][11];

		char gr[N][11]; 

		int maxi = 0;

		int mini = 0;

		int kirby;

		int max = -1;

		int min = 101;

		for (int i = 0;i < N;i++){

			scanf("%s %s %d",zqd[i],gr[i],&kirby);

			if (kirby > max){

				max = kirby;

				maxi = i;

			}

			if (kirby < min){

				min = kirby;

				mini = i;

			}

		}

		printf("%s %s\n",zqd[maxi],gr[maxi]);

		printf("%s %s\n",zqd[mini],gr[mini]);

		return 0;

	}

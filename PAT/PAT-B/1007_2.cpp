
#include<stdio.h>//�д��Ľ�

	int main(){

		int n;

		scanf("%d",&n); 

		int kirby[n];

		for (int i = 0;i < n;i++){

			kirby[i] = 0;

		}

		kirby[0] = 3;

		int cnt = 1;

		int isprime = 1;

		int i = 3;

		while (i <= n){

			isprime = 1;

			for (int j = 1;j < cnt / 2;j++){//���ﲻ̫��������Ǹ��ſ컹�������죬��������//for (int j = 0;kirby[j] < sqrt(i) + 1&&j < cnt;j++){

				if (i % kirby[j] == 0){

					isprime = 0;

					break;

				}

			}

			if (isprime){

				kirby[cnt] = i;

				cnt++;

			}

			i += 2;

		}

		int cnt1 = 0; 

		for (int i = 0;i < n - 1;i++){

			if (kirby[i + 1] - kirby[i] == 2){

				cnt1++;

			}

		}

		printf("%d",cnt1);

		return 0;

}

#include<stdio.h>

#include<math.h>
/*
	source:https://github.com/ssccinng/PAT-B-solve
	�����߽ⷨ��һ��һ����ö������ 
*/
  int main(){

    int n,m;

    scanf("%d %d",&n,&m); 

    int kirby[m - 1];

    for (int i = 0;i < m;i++){

      kirby[i] = 0;

    }

    if (m == 1){

      printf("2");

      return 0;

    }

    kirby[0] = 2;

    int cnt = 1;

    int isprime = 1;

    int i = 3;

    while (1){

      isprime = 1;

      for (int j = 0;kirby[j] < sqrt(i) + 1&&j < cnt;j++){

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

      if (cnt == m){

        break;

      }

    }

    for (int i = n - 1;i < m;i++){

      if (i != m - 1&&(i - n + 2) % 10 != 0){

        printf("%d ",kirby[i]);

      }else{

        printf("%d\n",kirby[i]);

      }

    }

    return 0;

  } 

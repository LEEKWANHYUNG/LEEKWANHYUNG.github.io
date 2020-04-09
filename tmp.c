#include<stdio.h>
#define SIZE 10
int main(void)
{
	int graph[SIZE];
	int n;
	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &graph[i]);
		if (graph[i] == 0)
			break;
	}
	for (int j = SIZE; j>0; j--)
	{
		for (int k = 0; k < SIZE; k++)
		{
			if (j - graph[k] > 0) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}



//10개이하의 양의정수를 받는거 예외처리
//입력받은거중에 최대값을 찾아라 .
//프린트에프는 줄단위로 찍는다.
//가장 최대값을 찾아서 그 위에서부터 찍어서 내려가는 거임
//반복이 최대값 부터하는 거임 9, 8, 7, 6, 5
//9, 8, 7, 6, 5, 4, 3, 2 >> 공백을 찍어주면 되긴한다.
//
//9도 7보다 크거가 같을때 찍으면 돈다
//
//입력된 숫자만큼 반복을 하는 거임;
//
//9보다 크거나 같은 값이 있는지 확인하고
//공백 공백 별 별 이런느낌으로 계속해서 진행해준다.
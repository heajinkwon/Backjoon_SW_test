#include <stdio.h>
#include <stdbool.h>

/* 

문제
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
입력
첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 
다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
출력
주어진 수들 중 소수의 개수를 출력한다.
예제 입력 1 
4
1 3 5 7
예제 출력 1 
3

*/

bool is_prime(int n);

int main(){
	
	int count=0, n, i, j;
	int num[100] = {0};
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);	
		if(is_prime(num[i]) == 1) count++;
	}
	   
    printf("%d" ,count);
}

bool is_prime(int n)
{
	int i;
		for(i=2;i<=n/2;i++)
	{
		if(n%i==0)  return false;
	}
	
}

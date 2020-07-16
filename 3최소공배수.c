#include <stdio.h>

/*
입력
첫째 줄에 테스트 케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다. 둘째 줄부터 T개의 줄에 걸쳐서 A와 B가 주어진다. (1 ≤ A, B ≤ 45,000)
출력
첫째 줄부터 T개의 줄에 A와 B의 최소공배수를 입력받은 순서대로 한 줄에 하나씩 출력한다.
예제 입력 1 
3
1 45000
6 10
13 17
예제 출력 1 
45000
30
221
*/

int Gcd(int a, int b)
{
	if(a%b==0) return b;
	else return Gcd(b,a%b);	
}



int main(){
	
	int T,i,lcm,gcd,num1[1000],num2[1000];
	scanf("%d",&T);
	for(i = 0 ; i < T ; i ++)
	{
		scanf("%d %d",&num1[i],&num2[i]);
	}
	
	for(i=0; i < T ; i++)
	{
		if(num1[i]>num2[i]) gcd = Gcd(num1[i],num2[i]);
		else gcd = Gcd(num2[i],num1[i]);
		lcm = num1[i]*num2[i]/gcd;
		printf("%d\n",lcm);
		
		lcm=0;
		gcd=0;
	
	}
		
}

#include <stdio.h>

/*
�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 �� T �� 1,000)�� �־�����. ��° �ٺ��� T���� �ٿ� ���ļ� A�� B�� �־�����. (1 �� A, B �� 45,000)
���
ù° �ٺ��� T���� �ٿ� A�� B�� �ּҰ������ �Է¹��� ������� �� �ٿ� �ϳ��� ����Ѵ�.
���� �Է� 1 
3
1 45000
6 10
13 17
���� ��� 1 
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

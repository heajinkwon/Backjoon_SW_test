#include <stdio.h>
#include <stdbool.h>

/* 

����
�־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�
ù �ٿ� ���� ���� N�� �־�����. N�� 100�����̴�. 
�������� N���� ���� �־����µ� ���� 1,000 ������ �ڿ����̴�.
���
�־��� ���� �� �Ҽ��� ������ ����Ѵ�.
���� �Է� 1 
4
1 3 5 7
���� ��� 1 
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

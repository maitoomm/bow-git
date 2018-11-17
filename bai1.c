//s=1+2+3+...+n
#include<stdio.h>
void tongn(int n)
{
	do{
		printf("nhap n\n");
		scanf("%d", &n);
		if (n<1)
			printf("nhap lai\n");
    	else
    		break;
	}while (n<1);
	int s=0;
	for(int i=1;i<=n;i++)
	{
		s+=i;
	}
	printf("ket qua la :%d\n", s);
	
}
int main()
{
	int n;
	tongn(n);
}
thaí vinh hiển

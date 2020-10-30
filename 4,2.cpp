#include<stdio.h>
int main()
{
	int i,sumcift=0,sumtek=0,num,ciftsayaci=0,teksayaci=0;
	for(int i=1;i<6;i++)
	{
		printf("lutfen sayilari giriniz\n");
		scanf("%d",&num);
		
		if(num%2==0)
		{

		ciftsayaci=ciftsayaci+1;
		
		sumcift=sumcift+num;			
		}

		
		else if(num%2!=0)
		
		{
			
			teksayaci=teksayaci+1;
			sumtek=sumtek+num;
		}
	
	}
		printf("tek sayi degerleriniz:%d\n",teksayaci);
		printf("toplam sayi degerleriniz:%d\n",sumtek);
		printf("cift sayi degerleriniz:%d\n",ciftsayaci);
		printf("toplam sayi degerleriniz:%d\n",sumcift);
	
}

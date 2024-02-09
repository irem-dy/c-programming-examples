#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int dizi[50];
	int i,j,sayi;
	
srand(time(0));	
	
for(i=0;i<50;i++){
	dizi[i]=rand()%100;
	
}	
for(i=0;i<50;i++){
	printf("%d ",dizi[i]);
}	
printf("diziyi otelemek istediginiz sayiyi griniz:");
scanf("%d",&sayi);
int ilksay;
ilksay=dizi[0];
for(j=0; j<sayi; j++)
{
	ilksay=dizi[0];
	
	for(i=0; i<50; i++)
	{
		
		dizi[i]=dizi[i+1];
	}
	
	dizi[49]=ilksay;
	
	for(i=0; i<50; i++)
	{
		
		printf("%d ",dizi[i]);
	}
	
	printf("\n");
	
	
}


	
return 0;	
}

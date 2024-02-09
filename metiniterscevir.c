#include<stdio.h>
#include<stdlib.h>
void terscevir(char dizi[]){
	
int uzunluk,i,gecici;
uzunluk=strlen(dizi);
for(i=0; i<uzunluk/2; i++)
{
	gecici=dizi[i];
	dizi[i]=dizi[uzunluk-1-i];
	dizi[uzunluk-1-i]=gecici;
	
	
}
	
	
	return terscevir;	
	
	
	
}

int main(){
	
char text[100];
printf("lutfen bir metin giriniz:");
gets(text);
terscevir(text);
printf("%s",text);
	
	return 0;
}

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(){
//char metin[100+1];
//printf("lutfen bir metin giriniz:");
//gets(metin);
char kelime[6+1];
printf("lutfen bir kelime giriniz:");
gets(kelime);
int i,j;
int gecici;
//int sayac=0;
int uzunluk;
char kelime2[6+1];
uzunluk=strlen(kelime);
// int flag;

for(j=0; j<uzunluk/2; i++)
  {
  gecici=kelime[uzunluk-j-1];
  kelime[uzunluk-j-1]=kelime[j];
  kelime[j]=gecici;	 
  }
printf("girilen kelimenin tersi %s",kelime);


//for(i=0; i<strlen(metin); i++)
//{
//	
//	
//	if(metin[i]==kelime[0])
//	{
//		for(j=1; j<strlen(kelime); j++)
//		{
//			flag=1;
//			
//			if(metin[i + j]!=kelime[j])
//			{
//				flag=0;
//				break;
//			}
//		}
//		
//		if(flag == 1)
//		{
//			sayac++;
//		}
//	}
//}

//printf("%s den %d tane vardir.",kelime,sayac);		
	
	return 0;
}

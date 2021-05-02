#include <stdio.h>
#include <stdlib.h>




int sirala(int array[],int elemansayisi)
{
 int i,j,temp;
 
 for(i=0;i<elemansayisi;i++)
 {
 	for(j=0;j<i;j++)
 	{
 		if(array[i]>array[j])
 		{
 			temp=array[i];
 			array[i]=array[j];
 			array[j]=temp;
		}
	}
 }
	
	
		
			  
}

int esitlenirmi(int array[],int parametre,int eleman)
{
	int i,sonuc,s;

	for(i=0;i<eleman-1;i++)
		{
		  int islem = (array[0]-array[i+1]) % parametre;
			
			
		if(islem != 0)
			{
					
				//printf("%d \n\n",islem);
				printf("Esitlenmez !!");
				break;
			}
		else
			{
				s = bul(array,parametre,eleman);
				break;
			}
		 }
		
		return 0;
		
} 

int bul(int array[],int parametre,int eleman)
{
	int i,j=0,sayac=0,islem,depo=0;
	
	
	
	while(j<eleman-1){
	islem = (array[0]-array[j+1])/parametre;
	depo=depo+islem;
	j++;
	         	   }
	         	   
	printf("%d\n",depo)   ;      		
	         		
	return depo;

}

int main(int argc, char *argv[]) {
int x,k,i,sira,t;
printf("Artirtma sayisini giriniz :");
scanf("%d",&k);
printf("Dizi kac elemanli ? : ");
scanf("%d",&x);
printf("Dizi elemanlarini giriniz !!\n");

int dizi[x];


	for(i=0;i<x;i++)
		{
		printf("%d. elemani giriniz : ",i+1);
		scanf("%d",&dizi[i]);
		}
		
		sirala(dizi,x);
	
		esitlenirmi(dizi,k,x);
		
		
		
		
		
		

	
	return 0;
}

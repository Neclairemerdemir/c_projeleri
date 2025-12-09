// taþ-kaðýt-makas oyunu 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
	int kullanici_secimi , bilgisayar_secimi,i,a=0,b=0;
	char devam;
	 srand(time(0));
	   for (i=0;i<3;i++){
	 do{
	 	
	 printf(">>> TAÞ KAÐIT MAKAS OYUNU <<<\n");
	 printf("1.Tas \n 2.Kagýt \n 3.Makas\n");
	 printf("Seciminizi yapýn (1-3):");
	 scanf ("%d",&kullanici_secimi);
	
	 
	 // bilgisayar 1 ile 3 arasýnda rastgele seçim yapar.
	 
	 bilgisayar_secimi=rand()%3+1;
	 printf ("Bilgisayarýn seçimi:");
	  
	  switch( bilgisayar_secimi) {
	  	 
	  	 case 1:
		   printf("TAS\n");
	  	 break;
	  	 
	  	 case 2: 
	  	 printf("KAGIT\n");
	  	 break;
	  	 
	  	 case 3:
	  	 	printf("MAKAS\n");
	  	 	break;
	  	
	  }
	   
	   if (kullanici_secimi==bilgisayar_secimi){
	   	 
	   	 printf("BERABERE KALDINIZ :( \n ");
	   	 
	   }
	    else if (kullanici_secimi==1 && bilgisayar_secimi==3){
	    	printf ("TAS MAKASI KIRAR KAZANDINIZ :)");
	    	a=a+1;
	    printf("SKOR = siz: %d  --- bilgisayar: %d \n",a,b);
		}
		 else if (kullanici_secimi==3 && bilgisayar_secimi==2){
	    	printf (" MAKAS KAÐIDI KESER KAZANDINIZ :)");
	    	a=a+1;
	    	printf("SKOR = siz: %d  --- bilgisayar: %d \n",a ,b);
		}
			 else if (kullanici_secimi==2 && bilgisayar_secimi==1){
	    	printf (" KAÐIT TASI SARAR KAZANDINIZ :)");
	    	a=a+1;
	    	printf("SKOR = siz: %d  --- bilgisayar: %d \n",a ,b);
		}
		else {
			printf("KAYBETTÝNÝZ :((( ");
			b=b+1;
			printf("SKOR = siz: %d  --- bilgisayar: %d \n",a ,b);
		}

		  printf ("tekrar oynamak istermisiniz \n (evet ise 'e' hayýr ise 'h'yazýnýz ):\n");
		  scanf(" %c",&devam);
		    	} 
		     while (devam=='e'|| devam=='E');		
			  printf("oyunumuz bitti bir baþka oyunda görüþürüz !!!");   
		   	   
	}
		   	  return 0;
}

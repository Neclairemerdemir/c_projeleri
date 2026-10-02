//bu proje c dilinde struct node yapisini ögrenmek icin olusturuldu
#include<stdio.h>
//malloc - realloc - calloc - free gibi yapilari kullanmak icin asagidaki kutuphaneyi kullaniyoruz
#include<stdlib.h>

 
      struct node
	  {
		//oncelikle struct node yapisini tanimlamaliyiz ki dugumleri olusturabilelim
	   int data;
	   struct node* next;
};

	 // bu asagidaki yapi sayesinde de her olusturacagimiz bagli liste icin sifirdan
	 // olusturma yapmiyoruz bu sayede kisa bir fonk. ile kisaltiyoruz projemizi;

	 struct node* createNode(int x) {
		 // bu fonk.olusturacagimiz her dugumu olusturmak icin kullanacagız
		 //bir asagidaki kod satiri yeni isimli dugum icin bilgisayarin belleginde yer acar 
		 struct node* yeni= (struct node*)malloc(sizeof(struct node));
		 // yeni isimli dugumun veri bilgisi 'x'e baglandi
		 yeni->data = x;
		 // yeni isimli dugumun nexti (bir sonraki dugumu) NULL a bagladik
		 yeni->next = NULL;
		 //bu fonk. geri donus olarak yeni ye doner.
		 return yeni;
	
	 }

	 
	 void printList(struct node* head) {
		 struct node* tmp = head;
		 while (tmp != NULL) {
			 printf("%d\t", tmp->data);
			 tmp = tmp->next;
		 }
		 /*
		  1- tmp dugumun bas dugume bagladak
		  2- while ile tmp yi null olana kadar yani son dugume gelene kadar printf ile ekrana yazdirdik.
		  3- tmp nextle dugumler arasi ilerledik
		  */

	 }
	 

	 void arayaEkle(struct node* head, int c, int d) {
		 struct node* yeni = createNode(c);
		 struct node* tmp = head;

		 while (tmp -> data != d) {
			tmp = tmp->next;
		 }

		 yeni->next = tmp->next;

		 tmp->next = yeni;

		 /* bu fonk da iki dugum arasina bir eleman yani yeni bir dugum ekeyecegiz
		 bu fonk. adim adim ne yaptik 
		  1-'yeni' isimli bir dugum olusturduk bu 1.dugum 
		  2- 'tmp ' isimli dugumu bas dugume esitledik ki istedigimiz elemana ulasabilelim while ile
		  3-while de yine bas elemandan baslayarak arasina koymak istedigimiz elemana gelene kadar calistiriyoruz
		  calisan kod ise tmp dugumunu bir bir ilerletiyor
		  4- yeni dugumunun nextini tmpnin nextine bagliyoruz cunku tmpnin nexti bilgisayarin belleginde kaybolmasin 
		  5- tmp nin nextini ise yeni ye esitliyoruz ve bu sekilde tmp de yeni ye baglanmis oluyor 
		  6- butun bunlarin sonunda yeni tmp ile tmp nin nexti rasina baglanmis oluyor 
		 */


	 }


	 void basaEkle(struct node** head, int a) {
		 struct node* yeni = createNode(a);
		 // basa ekleme oldugu icin asagidaki satirda * kullaniyoruz *head seklinde 
		 yeni->next = *head;
		 *head = yeni;
		 /* bu fonk. adim adim ne yaptik
		 1- 'yeni' isimli  bir dugum olusturduk
		 2- yeni dugumunun bir sonraki dugumunu head yaptik
		 3-head yani bas dugumde artik yeni olan dugum oldu 
		 */
	 }


	 void sonaEkle(struct node* head , int b) {
		 struct node* yeni = createNode(b);
		 struct node* tmp = head;

		 while (tmp->next != NULL) { // tmp dugumunun Null a esit olmadigi surece calisiyor
			 tmp = tmp->next;
		 }
		 tmp ->next = yeni;

		 
		 /*
		 bu fonk. adim adim ne yaptik 
		  1- 'yeni' isimli bir dugum olusturduk.
		  2- tmp isimli bir dugum daha olusturduk ve bu dugumu bas dugume esitledik.
		  3- while dongusu ile tmpden baslayarak NUll degerine esit olmayana kadar her seferinde tmpden
		  bir sonraki dugume ilerledik yani sona ekledigimiz icin sona gelene kadar ilerlemis olduk.
		  4-"tmp->next = yeni;" satiri ise son dugumu yan aslinda while dongusu ile son dugume geldigimiz
		  i�in son dugum bizim icin yeni dugum oldu deriz.

		 */
	 }


 int main(){
	 // yeni1 isimli bir dugum olusturduk bu dugumun degeri 5
	 //kodumuzun kisa olmasi icin "createnode " diye bir fonk olusturmustuk 
	 // onun icine yazdigimiz deger dugumun degeridir
	 struct node* yeni1 = createNode(5);
	 struct node* yeni2 = createNode(15);
	 struct node* yeni3 = createNode(25);

	 yeni1->next = yeni2;
	 yeni2->next = yeni3;
	// yeni3->next = NULL;
	// ust satirdaki yorum kodu yazmamiza gerek yok 
	// cunku createNode fonk. da null a esitliyoruz hepsini

	 arayaEkle(yeni1, 10, yeni2);
	 basaEkle(&yeni1, 1);
	 printList(yeni1);
	 return 0;




 
 }

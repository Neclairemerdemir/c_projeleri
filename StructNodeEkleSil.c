// struct node yapisinda ekleme ve silme özelliklerini gösteren proje 
#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;

};
struct node* createNode(int x) {
	struct node* yeni = (struct node*)malloc(sizeof(struct node));
	yeni->next =  NULL;
	yeni->data=x;
	return yeni;
}
void basaEkle(struct node** head, int x) {
	struct node* yeni = createNode(x);
	struct node* tmp =  * head;
	while (tmp->next != *head) {
	 tmp =	tmp->next;
	}
	tmp->next = yeni;
	yeni->next = *head;
	*head = yeni;
}
void printList(struct node* head) {
	struct node* tmp = head;
	do {
		printf("%d \t ", tmp->data);
		tmp = tmp->next;
	} while (tmp != head);
}
void sondanSil(struct node* head) {
	struct node* tmp = head;
	while (tmp->next->next != head) {
		tmp = tmp->next;
}
	struct node* tmp2 = tmp->next;
	
	
     free(tmp2);
	 tmp->next = head;
}
void aradanSil(struct node* head, int x) {
	struct node* tmp = head;
	while (tmp->next->data != x) {
		tmp = tmp->next;
			}
	struct node* tmp2 = tmp->next;
	tmp->next = tmp->next->next;
	free(tmp2);
}
void arayaEkle(struct node* head, int x, int y) {
	struct node* tmp = head;
	while (tmp ->data != x) {
		tmp = tmp->next;
	}
	struct node* yeni = tmp->next;


}
int main() {
	struct node* yeni1 = createNode(5);
	struct node* yeni2 = createNode(15);
	struct node* yeni3 = createNode(25);
	
	yeni1->next = yeni2;
	yeni2->next = yeni3;
	yeni3->next = yeni1;
	
	printf("\n");
	basaEkle(&yeni1, 50);
	//sondanSil(yeni1);
	aradanSil(yeni1, 15);
	printList(yeni1);
}

#include <stdio.h>
#include <stdlib.h>




typedef struct node{
	char nama[30];
	char jurusan[3];
	struct node* next;
}NODE;

NODE *nodePtr;
NODE *head = NULL;
NODE *temp;

void createNode(){
	nodePtr = (NODE*) malloc (sizeof (NODE));
	printf ("===================\n");
	printf ("Masukkan Nama : ");
	scanf ("%s",&nodePtr->nama);
	printf("Masukkan Jurusan : ");
	scanf ("%s",&nodePtr->jurusan);
	nodePtr->next = NULL;
	if (head == NULL){
		head = nodePtr;
	}
	else{
		temp = head;
		while (temp->next!=NULL){
			temp = temp->next;
		}
		temp->next= nodePtr;	
	}
}

void insert(){
	int posisi;
	nodePtr=(NODE*)malloc (sizeof (NODE));
	printf("Masukkan Nama : ");
	scanf("%s",&nodePtr->nama);
	printf("Masukkan Jurusan : ");
	scanf("%s",&nodePtr->jurusan);
	printf ("===================\n");
	nodePtr->next=NULL;
	printf("Posisi = ");
	scanf("%d",&posisi);
	temp=head;
	for(int i=1;i<posisi-1;i++){
		temp=temp->next;
	}
	nodePtr->next=temp->next;
	head->next=nodePtr;	
}

void deleteAwal(){
	temp=head;
	head=temp->next;
	free(temp);
}

void displayData(){
	temp = head;
	while (temp!=NULL){
		printf ("===================\n");
		printf ("%s\n", temp->nama);
		printf("%s\n", temp->jurusan);
		printf ("===================\n");
		temp = temp->next;
	}
}

int main (){
	

	int pil;
	int jum;
	printf ("===================\n");
	printf("Masukkan Jumlah Data Mahasiwa = ");
	scanf("%d",&jum);
	for (int i=0;i<jum;i++){
		createNode();
	}
	do{
	printf("==========================\n");
	printf("1. Insert Data Mahasiswa\n");
	printf("2. Delete Data Mahasiswa pada posisi awal\n");
	printf("3. Menampilkan semua Data\n");
	printf("4. Exit\n");
	printf("==========================\n");
	printf("Pilihan Anda : ");
	scanf("%d",&pil);
		if (pil==1){
			insert();
		}
		else if (pil==2){
			deleteAwal();
		}
		else if (pil==3){
			displayData();
		}
		else if (pil>=5){
		printf("==================================================\n");
		printf("pilihan tidak ditemukkan, cari pilihan yang benar.\n");
		printf("==================================================\n");
		}
	}while(pil!=4);
	printf("Terima Kasih");
}

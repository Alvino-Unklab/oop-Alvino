#include <stdio.h>
#include <stdlib.h>




typedef struct node{
	int bil;
	struct node* next;
}NODE;

NODE *nodePtr;
NODE *head = NULL;
NODE *temp;

void createNode(){
	nodePtr = (NODE*) malloc (sizeof (NODE));
	printf ("Masukkan bilangan : ");
	scanf ("%d",&nodePtr->bil);
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

void allNode(int jum){
	temp = head;
	for (int i=0;i<jum;i++){
		printf ("%d\n",temp->bil);
		temp = temp->next;
	}
}

void fiveNode(int jum){
	temp = head;
	if (temp->bil %5==0){
		for (int i=0;i<jum;i++){
			printf("%d\n",temp->bil);
		}
	}	
}

void fivetenNode(int jum){
	temp = head;
	if (temp->bil >= 5 && temp->bil <= 10 ){
			printf ("%d\n",temp->bil);
	}
	else if (temp->bil < 5 && temp->bil > 10){
		printf(" ");	
	}	
}


int main (){
	
	int jum;
	int pil;
	printf("Masukkan jumlah bilangan : ");
	scanf("%d",&jum);
	for (int i=0;i<jum;i++){
		createNode();
	}
	do{
	printf("==========================\n");
	printf("1. Menampilkan semua node.\n");
	printf("2. Menampilkan semua bilangan kelipatan 5.\n");
	printf("3. Menampilkan semua bialngan antara 5-10.\n");
	printf("4. Exit\n");
	printf("==========================\n");
	printf("Pilihan Anda : ");
	scanf("%d",&pil);
		if (pil==1){		
			allNode(jum);
		}
		else if (pil==2){
			fiveNode(jum);
		}
		else if (pil==3){	
			fivetenNode(jum);
		}
		else if (pil>=5){
		printf("pilihan tidak ditemukkan, cari pilihan yang benar.\n");
		}
	}while(pil!=4);
	printf("Terima Kasih");
}

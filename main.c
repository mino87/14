#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct Book{
	int number;
	char title[10];
};

void main(void){
	struct Book*p;
	
	p = malloc(2*sizeof(struct Book));
	
    if(p == NULL){
		ptintf("메모리할당오류\n");
		return;
	}
	
	p->number = 1;
	strcpy(p->title,"C programming");
	
	(p+1)->number = 2;
	strcpy((p+1)->title,"Electronics");
	
	free(p);
	return;
}


#include <stdio.h>

int main(){
	
	int n, i;
	char curso[100];
	
	scanf("%i",&n);
	
	for(i=0;i<n;i++){
		scanf("%s",&curso);
		fflush(stdin);
	}
	printf("Ciencia da Computacao\n");
	
	return 0;
}

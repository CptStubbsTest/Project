/* Matrix test*/ 

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int matrx_test[2][2] = {{1,2},{3,4}};

	printf("%d\n",matrx_test[0][0]); 

	matrx_test[0][0] = 1337;

	printf("%d\n",matrx_test[0][0]); 
}
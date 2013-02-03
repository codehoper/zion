#include<stdio.h>
//sizeof operator vary according to type of cpu
//1.32-bit CPU
//2.64-bit CPU
//


struct matrix {
		int neo;
		char morpheus[10];
		float trinity[10];
		long agent[10];
		void* cypher;
		//void cypher;
	};
union union_matrix 
	{
		int neo;
		char morpheus[10];
		float trinity[10];
		long agent[10];
		void* cypher;
		//void cypher;
	};



int main() {
	printf("size of char :	%d\n",sizeof(char));	
	printf("size of int:	%d\n",sizeof(int));
	printf("size of float:	%d\n",sizeof(float));
	printf("size of long:	%d\n",sizeof(long));
	printf("size of char*:	%d\n",sizeof(char*));
	printf("size of int*:	%d\n",sizeof(int*));
	printf("size of long*:	%d\n",sizeof(long*));
	printf("size of void*:	%d\n",sizeof(void*));
	printf("size of void:	%d\n",sizeof(void));
	
	char c[10];
	char *c1[10];
	char **c2[10];
	char ***c3[10];
	printf("size of chr array :	%d\n",sizeof(c));
	printf("size of chr* array :	%d\n",sizeof(c1));
	printf("size of chr** array :	%d\n",sizeof(c2));
	printf("size of chr*** array :	%d\n",sizeof(c3));
	struct matrix m;
	struct matrix *m1;
	printf("size of matrix struct :	%d\n",sizeof(m));
	printf("size of matrix* struct : %d\n",sizeof(m1));
	union union_matrix um;
	union union_matrix *um1;
	printf("size of matrix union:	%d\n",sizeof(um));
	printf("size of matrix* union: %d\n",sizeof(um1));
	return 0;	
}

/**
* o/p of program sizes
*size of char :	1
*size of int:	4
*size of float:	4
*size of long:	4
*size of char*:	4
*size of int*:	4
*size of long*:	4
*size of void*:	4
*size of void:	1
*size of chr array :	10
*size of chr* array :	40
*size of chr** array :	40
*size of chr*** array :	40
*size of matrix struct :	100
*size of matrix* struct : 4
*size of matrix union:	40
*size of matrix* union: 4
**/

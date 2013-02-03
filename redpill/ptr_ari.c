#include<stdio.h>

void exchange(int *addr_expr,int r_value) {
	*addr_expr = r_value;	
}

int main() {
	//note expr and (*&expr) are equivalent
	int expr = 12;
	exchange(&expr,34);
	printf("the value after exchange = %d\n",expr);
	exchange(&*&expr,1234);
	printf("the value after exchange = %d\n",expr);
}

void expr() {
//	int E[] = {0,0,0,0,0,0,0,0,0,0};
	int i;
	int E[10];
	int j=0;
	E[0] = 12;
	E[i] = 12;
	j = &E[2] ;
	j = E+i-1 ;
	*(&E[i]+i) = 12;
	j = &E[i]-E ;
}

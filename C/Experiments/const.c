int main()
{
	int a = 10;
	int b = 20;
	const int *c3 = &a;//value cannot be altered
	int const *c4 = &b;// same as c3
	int *const c6 = &a;// ptr cannot be changed
//	const * int c8 = &b;//not legal : syntax error
	const int * const c7;// both ptr as well as value cannot be changed
	*c8 = 30;
	//c6 = &b;
	*c6 = 45;
//	c3 = &b;
	//(*c3) ++;
	c4 = &a;

	return 0;
}

// Factorial function definition
int factorial(int n)
{
	int  product=1;
	
	for(int i=n;i>=1;i--)
	{
		product=product*i;
	}
	
	return product;
}

// Power funciton definition
int power(int b, int e)
{
	int product=1,i=1;
	
	while(i<=e)
	{
		product = product * b;
		
		++i;
	}
	
	return product;
}

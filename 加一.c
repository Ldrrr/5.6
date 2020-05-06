int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	int i;
	for(i=digitsSize-1;i>=0;i--)
	{
		if(digits[i]<9)
		{
			digits[i]=digits[i]+1;
			*returnSize=digitsSize;
			return digits;
		}
		else
		{
			digits[i]=0;
		}
	}
	int *a=(int *)malloc(sizeof(int)*(digitsSize+1));
	a[0]=1;
	for(i=1;i<digitsSize+1;i++)
	{
		a[i]=0;
	}
	*returnSize=digitsSize+1;
	return a;
}

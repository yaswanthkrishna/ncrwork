extern int result;
float division(int a, int b)
{
	if (b != 0)
	{
		result = (float)a / b;
		return result;
	}
	return -1;
}
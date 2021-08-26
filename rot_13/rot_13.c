char *ft_rot13 (char *o)
{
	char *a;
	char *A;
	int i;
	a = "abcdefghijklmnopqrstuvwxyz";
	A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	while(o[i] != '\0')
	{
		if ((o[i] >= 'a' && o[i] <= 'z') ||(o[i] >= 'A' && o[i] <= 'Z'))
		{
			if  (o[i] >= 'a' && o[i] <= 'z')
				o[i] = a[ (((o[i] - 'a') + 13) % 26)];
			else if( o[i] >= 'A' && o[i] <= 'Z')
				o[i] = A[((o[i] - 'A') + 13) % 26];
		}
		i++;
	 }
		return (o);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_rot13(argv[1]));
	return (0);

}

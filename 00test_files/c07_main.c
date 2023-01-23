#include <stdlib.h>
#include <stdio.h>

#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
//#include "ex03/ft_strjoin.c"
//#include "ex04/ft_convert_base.c"
//#include "ex05/ft_split.c"

int	main(void)
{
	
	//ex00
	printf("ex00:\n");
	char	*fr;
	fr = ft_strdup("Hello World!");
	printf("%s\n", fr);
	free(fr);
	
	//ex01
	printf("\nex01:\n");
	int i = -1;
	int	*fre;
	fre = ft_range(-2, 10);
	while (++i < 12)
		printf("%d", fre[i]);
	free(fre);
	
	//ex02
	printf("\n\nex02:\n");
	int j = 0;
	int k;
	int *num;
	k = ft_ultimate_range(&num, -2, 10);
	printf("lenght: %d\n", k);
	while (j < k)
	{
		printf("%d", num[j]);
		j++;
	}
	
	//ex03
	/*
	printf("\nex03:\n");
	char	*sep;
	char	*res;
	int	size;
	size = 3;
	char	*strs[size];
	strs[0] = "Hello";
	strs[1] = "world";
	strs[2] = "mallo";
	sep = "|SEP|";
	res = ft_strjoin(size, strs, sep);
	printf("%s\n", res);
	free(res);
	*/
	//ex04
	printf("\nex04:\n");
	
	//ex05
	printf("\nex05:\n");
	
	return (0);
}

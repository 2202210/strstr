#include <stdio.h> 
#include <string.h> 
#include <assert.h> 
// char *findit(char *str, char *find){
// 	if (*find == '\0')
// 	{
// 		return str ;
// 	}

//  	if (*str == '\0') {
//         return NULL;
//     }

// 	if ( *str == *find && findit(str + 1, find + 1) == str + 1)
// 	{
// 		return str;
// 	}
// 	else
// 	{
// 		return findit(str+1, find);
// 	}
// }

int	main(void)
{
	char	str[] = "";
	char find[] = "is a";
	// char *x;
	// x = findit(str,find);
	printf("answer:%s\n", find);
	return (0);
}

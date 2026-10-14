#include "my_libc.h"

char *
my_strcat(char *dst, const char *src)
{
	size_t i;
	size_t j;

	i = 0;
	while (dst[i] != '\0') {
		i++;
	}
	j = 0;
	while (src[j] != '\0') {
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

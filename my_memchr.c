
#include "my_libc.h"

void *
my_memchr(const void *b, int c, size_t len)
{
	size_t i;
	const unsigned char *ptr;

	ptr = (const unsigned char *)b;
	i = 0;
	while (i < len) {
		if (ptr[i] == (unsigned char)c) {
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}

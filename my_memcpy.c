
#include "my_libc.h"

void *
my_memcpy(void *dest, const void *src, size_t len)
{
	size_t i;
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < len) {
		d[i] = s[i];
		i++;
	}
	return (dest);
}

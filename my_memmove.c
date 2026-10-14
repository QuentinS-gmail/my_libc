
#include "my_libc.h"

void *
my_memmove(void *dest, const void *src, size_t len)
{
	size_t i;
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s) {
		i = 0;
		while (i < len) {
			d[i] = s[i];
			i++;
		}
	} else if (d > s) {
		i = len;
		while (i > 0) {
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}

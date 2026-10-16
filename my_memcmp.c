
#include "my_libc.h"

int
my_memcmp(const void *b1, const void *b2, size_t len)
{
	size_t i;
	const unsigned char *s1;
	const unsigned char *s2;

	s1 = (const unsigned char *)b1;
	s2 = (const unsigned char *)b2;
	i = 0;
	while (i < len && s1[i] == s2[i]) {
		i++;
	}
	if (i == len) {
		return (0);
	}
	return (s1[i] - s2[i]);
}

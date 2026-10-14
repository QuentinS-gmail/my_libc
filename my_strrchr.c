
#include "my_libc.h"

char *
my_strrchr(const char *s, int c)
{
	size_t i;
	char *result;

	i = 0;
	result = NULL;
	while (s[i] != '\0') {
		if (s[i] == (char)c) {
			result = (char *)&s[i];
		}
		i++;
	}
	if ((char)c == '\0') {
		return ((char *)&s[i]);
	}
	return (result);
}

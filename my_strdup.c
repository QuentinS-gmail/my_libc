
#include "my_libc.h"
#include <stdlib.h>

char *
my_strdup(const char *s)
{
	size_t len;
	size_t i;
	char *copy;

	len = my_strlen(s);
	copy = malloc(len + 1);
	if (copy == NULL) {
		return (NULL);
	}
	i = 0;
	while (i < len) {
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

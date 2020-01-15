#include "libmx.h"
char *mx_strjoin(const char *s1, const char *s2)
{
    if (s1 == NULL && s2 == NULL)
    {
	return NULL;
    }
    if (s1 == NULL)
    {
	return mx_strdup(s2);
    }
    else if (s2 == NULL)
    {
	return mx_strdup(s1);
    }
    char *s = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
    s = mx_strcpy(s, s1);
    return mx_strcat(s, s2);
}

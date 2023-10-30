#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    unsigned int result;
    int i;
    
    result = 0;
    if (!b)
        return (0);
    for (i = 0; b[i]; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);
    }
    for (i = 0; b[i]; i++)
    {
		result <<= 1;
		if (b[i] == '1')
			result += 1;
    }
    return (result);
}

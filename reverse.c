/* REVERSE.C */

#include <stdio.h>
#include "reverse.h"

/****************************************************************/

    reverse (before, after)

        char *before; /* A pointer to the original string */
        char *after; /* A pointer to the reversed string */

    {
        int i;
        int j;
        int len;

        len = strlen(before);

        for (j = len - 1, i = 0; j >= 0; j--, i++) /* Reverse loop */
            after[i] = before[j];

        after[len] = NULL; /* NULL terminate reversed string */
    }
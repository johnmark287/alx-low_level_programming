#include <stdio.h>
int main(void)
{
    FILE *fp;
    
    fp = fopen("hello.txt", "w");
    if (!fp)
        return (-1);
    char *s = "Change to hello";
    fprintf(fp, "%s", s);
    fclose(fp);
    return (0);
}
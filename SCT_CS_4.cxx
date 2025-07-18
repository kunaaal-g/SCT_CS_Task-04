#include <stdio.h>
int main() 
{
    FILE *file;
    char ch;
    file = fopen("log.txt", "a");
    if (file == NULL)
     {
        printf("Failed to open file.\n");
        return 1;
    }
    printf("Keylogger Simulation\n");
    printf("Type characters (end with #):\n");
    while (1) 
    {
        ch = getchar();
        if (ch == '#') 
        {
            break;
        }
        fprintf(file, "%c\n", ch);
    }
    fclose(file);
    printf("Logging complete. Check log.txt for keystrokes.\n");
    return 0;
}
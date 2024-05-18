#include <stdio.h>
#include <string.h>

int pallincheck(char*);

int main() 
{
    FILE *fp;
    char string[1000], newstring[1000];
    int res;
    fp = fopen("Momo.txt", "w");
    if (fp == NULL) 
    {
        printf("File error\n");
        return 1;
    }
    printf("Enter contents in file:\n");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    fprintf(fp, "%s", string);
    fclose(fp);
    fp = fopen("Momo.txt", "r");
    if (fp == NULL)
    {
        printf("File error\n");
        return 1;
    }
    fscanf(fp, "%s", newstring);
    fclose(fp);
    res = pallincheck(newstring);
    fp = fopen("Momo.txt", "w");
    if (fp == NULL) 
    {
        printf("File error\n");
        return 1;
    }

    if (res == 0)
        fprintf(fp, "This string is palindrome");
    else
        fprintf(fp, "This string is not palindrome");

    fclose(fp);
    return 0;
}

int pallincheck(char *p) 
{
    int l = strlen(p);
    for (int i = 0; i < l / 2; i++) 
    {
        if (p[i] != p[l - i - 1]) 
        {
            return 1;
        }
    }
    return 0;
}

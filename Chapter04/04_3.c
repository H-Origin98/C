#include <stdio.h>
#include <string.h>

#define PRAISE "you are an extraordinary being."

int main(void)
{
    char name [40];

    printf("What is your name?\n");
    scanf("%s",name);
    printf("Hello, %s .%s \n",name ,PRAISE);
    printf("your name of %zd letters occupies %zd memory cells.\n",
        strlen(name),sizeof(name));
    printf("The phrase of praise has %zd letters and occupies %zd memory cells\n",
        strlen(PRAISE),sizeof(PRAISE));
    return 0;
}
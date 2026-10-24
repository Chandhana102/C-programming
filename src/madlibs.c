#include <stdio.h>
#include <string.h>
int main()
{
    
    char noun[50]="";
    char verb[50]="";
    char adjective1[50]="";
    char adjective2[50]="";
    char adjective3[50]="";

    printf("Enter an adjective(description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    printf("enter a noun (animal or person): ");

    printf("Enter an adjective(description): ");
    printf("Enter a verb(action): ");

    printf("Enter an adjective(description): ");


    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline character

    printf("Enter a noun: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strcspn(noun, "\n")] = 0; // Remove newline character

    printf("Enter a verb: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strcspn(verb, "\n")] = 0; // Remove newline character

    printf("Enter an adjective: ");
    fgets(adjective, sizeof(adjective), stdin);
    adjective[strcspn(adjective, "\n")] = 0; // Remove newline character

    printf("\nHere is your madlib:\n");
    printf("%s decided to %s the %s %s.\n", name, verb, adjective, noun);

    return 0;
}
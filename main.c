#include <stdio.h>
#include <stdlib.h>

//Drawing
int main()
{
    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");
    return 0;
}

//Variables
int main()
{
    char characterName[] = "Anacleto";
    int characterAge = 75;
    printf("There once was a named %s.\n", characterName);
    printf("He was %d years old.\n", characterAge);
    characterAge = 25;
    printf("He really liked the name %s.\n", characterName);
    printf("But did not like being %d.\n",characterAge);
    return 0;
}

//Data Types
int main()
{
    int age = 20;
    double decimal = 7.7;
    char character = 'A';
    char phrase[] = "freeCodeCamp";
    return 0;
}

//PrintF
int main()
{
int favNum = 70;
char myChar = 'G';
printf("My favorite %s is %d", "number", favNum);
printf("My favorite %s is %d", "number", 13);
printf("My favorite %s is %f", "number", 3.141592);
printf("My favorite %c is %f", myChar, 32.679);
return 0;
}

//Working With Numbers
int main()
{
int num = 5;
printf("%d",num);
printf("%f",3.5+5.3+3.1);
printf("%d", 5/3);
printf("%f", pow(4,3));
printf("%f", sqrt(64));
printf("%f", ceil(53.65748));
printf("%f", floor(32.6688));
return 0;
}

//Comments
/*
printf("Hoje está um belo dia");
*/

//Constants
int main()
{
const int num = 20;
printf("%d\n", num);
printf("%d", num);
printf("%d", 90);
return 0;
}

//Getting User Input
int main()
{
int age;
printf("Enter your age: ");
scanf("%d", &age);
printf("You are %d years old", age);
return 0;
}

int main()
{
double age;
printf("Enter your age: ");
scanf("%lf", &age);
printf("Your age is years %f old", age);
return 0;
}

int main()
{
char grade;
printf("Enter your grade: ");
scanf("%c", &grade);
printf("Your grade is %c", grade);
return 0;
}

int main()
{
char name[30];
printf("Enter your name: ");
scanf("%s", name);
printf("Your name is %s", name);
return 0;
}

int main()
{
char name[20];
printf("Enter your name: ");
fgets(name, 20, stdin);
printf("Your name is %s", name);
return 0;
}
#include <stdio.h>

int main()
{
    int numBrothers;
    int numSisters;
    char firstName[32], houseSize[32];
    int age;
    char favPlace[32];
    int numPets;
    char favSubject[32];
    char favCodingLanguage[32];
    char favInstrument[32];
    int numGrade;
    //coding part

    printf("Hi!\n");
    printf("What is your first name?\n");
    scanf("%s", firstName);
    printf("How old are you? Put just number btw\n");
    scanf("%d", &age);
    printf("What number grade are you in? Put just number btw\n");
    scanf("%d", &numGrade);
    printf("How many brothers do you have? Put just number btw\n");
    scanf("%d", &numBrothers);
    printf("How many sisters? Put just number btw\n");
    scanf("%d", &numSisters);
    printf("How many pets do you have? Put just number btw\n");
    scanf("%d", &numPets);
    printf("What is your favorite subject? One word pls\n");
    scanf("%s", favSubject);
    printf("What is your favorite coding language? One word pls...\n");
    scanf("%s", favCodingLanguage);
    printf("What is your favorite instrument? Just one word pls\n");
    scanf("%s", favInstrument);
    printf("Lastly, what is your favorite place to go? One word pls\n");
    scanf("%s", favPlace);
    printf("Hi! My name is %s. I am %d years old. I am in the grade level %d. I have %d brothers, and %d sisters. I also have %d pets. My favorite school subject is %s. My favorite coding language is %s. My favorite instrument is the %s. Lastly, my favorite place to be is %s.\n", firstName, age, numGrade, numBrothers, numSisters, numPets, favSubject, favCodingLanguage, favInstrument, favPlace);

    return 0;
}

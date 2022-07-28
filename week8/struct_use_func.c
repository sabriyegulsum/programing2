#include <stdio.h>
#include <string.h>
struct person_data {
    char name[40];
    int lenght;
};
struct person_data getPersonData(void);
void showPersonData (struct person_data);
int main()
{
    struct person_data person;
    person = getPersonData();
    showPersonData (person);
    return 0;
}
struct person_data getPersonData(void)
{
    struct person_data person;
    printf("Name:");
    gets(person.name);
    printf("\nLenght:");
    scanf("%d",&person.lenght);
    return person;
}
void showPersonData (struct person_data person)
{
    printf("Name:%s\nLenght:%d",person.name,person.lenght);
}


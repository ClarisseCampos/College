#include <stdio.h>
//Criador simples

typedef struct{
    char name[50]; int age;
}PERSON;

PERSON createPerson(char * name, int age){ // isso eh magico
    int i;
    PERSON person; 
    person.age = age;
    
    for(i = 0;name[i] != '\0';i++){
        person.name[i] = name[i];
    }
    person.name[i] = '\0';
    
    return person;
}
int main()
{
    PERSON me = createPerson("Clarisse", 19);
    
    printf("\n%s, %d", me.name, me.age);

    return 0;
}

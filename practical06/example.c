#include<stdio.h>

int main(){
    
    //struc declaration
    struct Person{
        char namesurname[100];
	int age;
	float height, weight;
    };

    //struct variables
    struct Person person1={"John Smith", 50, 165.78, 80.5};
    //pointer to structure
    struct Person *personptr;
    personptr=&person1;

    //Printing
    printf("\nDisplaying all information:\n");
    printf("Name: %s\n", personptr -> namesurname);
    printf("Age=%d, Height=%f, Weight=%f\n\n", person1.age, person1.height, personptr -> weight);
    //pointers:->
    return 0;
}

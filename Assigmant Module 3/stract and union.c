#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Example of using a structure
    struct Person person1;
    strcpy(person1.name, "John");
    person1.age = 30;
    person1.height = 5.9;

    printf("Person: %s, Age: %d, Height: %.2f feet\n", person1.name, person1.age, person1.height);

    // Example of using a union
    union Data data;
    data.intValue = 42;
    printf("Integer Value: %d\n", data.intValue);

    strcpy(data.stringValue, "Hello");
    printf("String Value: %s\n", data.stringValue);

    data.floatValue = 3.14;
    printf("Float Value: %.2f\n", data.floatValue);

    return 0;
}

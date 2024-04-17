#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[10];
    setvbuf(stdout, NULL, _IONBF, 0);
    		setvbuf(stdin, NULL, _IONBF, 0);
    		printf("Enter information for student \n");
    for (int i = 0; i < 10; ++i) {
        printf("For roll number%d \n", i + 1);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nDisplaying information of students:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Information for roll number %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

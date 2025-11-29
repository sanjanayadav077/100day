//Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
struct Student getTopStudent(struct Student s[], int n) {
    int topIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    return s[topIndex];   // return the structure
}
int main() {
    struct Student s[5];
    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    struct Student top = getTopStudent(s, 5);
    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);
    return 0;
}

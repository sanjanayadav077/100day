//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    struct Employee e[3], temp;
    FILE *fp;
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error: Cannot open file for writing.\n");
        return 1;
    }
    printf("Enter data for 3 employees:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
    fwrite(e, sizeof(struct Employee), 3, fp);
    fclose(fp);
    printf("\nEmployee data successfully written to employees.dat\n");
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error: Cannot open file for reading.\n");
        return 1;
    }
    printf("\n--- Employee Records from File ---\n");
    while (fread(&temp, sizeof(struct Employee), 1, fp) == 1) {
        printf("\nName: %s\n", temp.name);
        printf("ID: %d\n", temp.id);
        printf("Salary: %.2f\n", temp.salary);
    }
    fclose(fp);
    return 0;
}
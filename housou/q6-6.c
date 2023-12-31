#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char grade;
    char name[128];
}Student;

int main() {
    Student stu[] = {
            {0, 'A', "Tanaka"},
            {1, 'B', "Yamada"},
            {2, 'B', "Itou"}
    };
    Student *stu2[3];

    for (int i = 0; i < 3; i++) {
        printf("id: %d, grade: %c, name: %s\n", stu[i].id, stu[i].grade, stu[i].name);
    }

    for (int i = 0; i < 3; i++) {
        stu2[i] = malloc(sizeof(Student));
        stu2[i]->id = i;
        strcpy(stu2[i]->name, "Yamada");
        stu2[i]->grade = 'A' + rand() % 5;
    }

    for (int i = 0; i < 3; i++) {
        printf("id: %d, grade: %c, name: %s\n", stu2[i]->id, stu2[i]->grade, stu2[i]->name);
        free(stu2[i]);
    }
}
#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[256];
    int age;
};

typedef struct student student_data;

int main(int argc, char** argv) {
    int i, length;
    student_data data[] = {
            {1, "山田太郎", 18},
            {2, "佐藤良子", 19},
            {3, "太田貴", 18},
            {4, "中田優子", 18},
    };
    length = sizeof(data) / sizeof(data[0]);
    for (i = 0; i < length; i++) {
        printf("学生番号: %d, 名前: %s, 年齢: %d\n", data[i].id, data[i].name, data[i].age);
    };

    return 0;
}


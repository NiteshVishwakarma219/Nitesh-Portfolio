#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;

struct sinfo {
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    int cid[10];
} st[55];

void add_student() {
    if (i >= 50) {
        printf("⚠️  Limit reached! Cannot add more students.\n");
        return;
    }
    printf("\n=========== ➕ ADD STUDENT ===========\n");
    printf("Enter First Name: "); scanf("%s", st[i].fname);
    printf("Enter Last Name: "); scanf("%s", st[i].lname);
    printf("Enter Roll Number: "); scanf("%d", &st[i].roll);
    printf("Enter CGPA: "); scanf("%f", &st[i].cgpa);
    printf("Enter 5 Course IDs: ");
    for (int j = 0; j < 5; j++) scanf("%d", &st[i].cid[j]);
    i++;
    printf("✅ Student added successfully!\n");
}

void find_rl() {
    int x, found = 0;
    printf("\n🔍 Enter Roll Number: "); scanf("%d", &x);
    for (int j = 0; j < i; j++) {
        if (x == st[j].roll) {
            printf("\n===== 📄 STUDENT DETAILS =====\n");
            printf("First Name: %s\n", st[j].fname);
            printf("Last Name: %s\n", st[j].lname);
            printf("Roll Number: %d\n", st[j].roll);
            printf("CGPA: %.2f\n", st[j].cgpa);
            printf("Course IDs: ");
            for (int k = 0; k < 5; k++) printf("%d ", st[j].cid[k]);
            printf("\n==============================\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("❌ Student not found.\n");
}

void find_fn() {
    char a[50];
    int found = 0;
    printf("\n🔎 Enter First Name: "); scanf("%s", a);
    for (int j = 0; j < i; j++) {
        if (!strcmp(st[j].fname, a)) {
            printf("\n===== 📄 STUDENT DETAILS =====\n");
            printf("First Name: %s\n", st[j].fname);
            printf("Last Name: %s\n", st[j].lname);
            printf("Roll Number: %d\n", st[j].roll);
            printf("CGPA: %.2f\n", st[j].cgpa);
            printf("Course IDs: ");
            for (int k = 0; k < 5; k++) printf("%d ", st[j].cid[k]);
            printf("\n==============================\n");
            found = 1;
        }
    }
    if (!found) printf("❌ No student found with that name.\n");
}

void find_c() {
    int id, found = 0;
    printf("\n📘 Enter Course ID: "); scanf("%d", &id);
    for (int j = 0; j < i; j++) {
        for (int d = 0; d < 5; d++) {
            if (id == st[j].cid[d]) {
                printf("\n===== 📄 STUDENT DETAILS =====\n");
                printf("First Name: %s\n", st[j].fname);
                printf("Last Name: %s\n", st[j].lname);
                printf("Roll Number: %d\n", st[j].roll);
                printf("CGPA: %.2f\n", st[j].cgpa);
                printf("==============================\n");
                found = 1;
                break;
            }
        }
    }
    if (!found) printf("❌ No students enrolled in this course.\n");
}

void tot_s() {
    printf("\n📊 Total Students: %d\n", i);
    printf("🧑 Remaining slots: %d\n", 50 - i);
}

void del_s() {
    int a, found = 0;
    printf("\n❌ Enter Roll Number to delete: "); scanf("%d", &a);
    for (int j = 0; j < i; j++) {
        if (a == st[j].roll) {
            for (int k = j; k < i - 1; k++)
                st[k] = st[k + 1];
            i--;
            found = 1;
            printf("✅ Student deleted successfully.\n");
            break;
        }
    }
    if (!found) printf("❌ Roll Number not found.\n");
}

void up_s() {
    int x, found = 0;
    printf("\n✏️  Enter Roll Number to update: "); scanf("%d", &x);
    for (int j = 0; j < i; j++) {
        if (st[j].roll == x) {
            int z;
            printf("What do you want to update?\n");
            printf("1. First Name\n2. Last Name\n3. Roll Number\n4. CGPA\n5. Courses\n");
            scanf("%d", &z);
            switch (z) {
                case 1: printf("New First Name: "); scanf("%s", st[j].fname); break;
                case 2: printf("New Last Name: "); scanf("%s", st[j].lname); break;
                case 3: printf("New Roll Number: "); scanf("%d", &st[j].roll); break;
                case 4: printf("New CGPA: "); scanf("%f", &st[j].cgpa); break;
                case 5:
                    printf("Enter 5 new Course IDs: ");
                    for (int k = 0; k < 5; k++) scanf("%d", &st[j].cid[k]);
                    break;
            }
            printf("✅ Updated successfully.\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("❌ Roll Number not found.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n============================================\n");
        printf("     🎓 STUDENT RECORD MANAGEMENT SYSTEM     \n");
        printf("============================================\n");
        printf("1. ➕ Add Student\n2. 🔍 Find by Roll Number\n3. 🔎 Find by First Name\n");
        printf("4. 📘 Find by Course ID\n5. 📊 Total Students\n6. ❌ Delete Student\n");
        printf("7. ✏️  Update Student\n8. 🚪 Exit\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add_student(); break;
            case 2: find_rl(); break;
            case 3: find_fn(); break;
            case 4: find_c(); break;
            case 5: tot_s(); break;
            case 6: del_s(); break;
            case 7: up_s(); break;
            case 8: printf("👋 Goodbye!\n"); exit(0);
            default: printf("❗ Invalid choice. Try again.\n");
        }
    }
}

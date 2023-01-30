typedef struct Student
{
    double  gpa;
    int     age;
    char    name[50];
    struct Student* next;
    /* data */
}StudentInfo;

#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
#include <string.h>              
struct Person {
    char name[20];
    int age;
    char address[100];
};

void printPerson(struct Person p)    
{

    printf("�̸�: %s\n", p.name);       
    printf("����: %d\n", p.age);        
    printf("�ּ�: %s\n", p.address);    
}

int main()
{
    struct Person p1;

    strcpy(p1.name, "ȫ�浿");
    p1.age = 30;
    strcpy(p1.address, "����� ��걸 �ѳ���");

    printPerson(p1);    

    return 0;
}

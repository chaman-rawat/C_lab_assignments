// Write a program to create a structure named company which has name, address, phone and noOfEmployee as member variables. Read name of company, its address, phone and noOfEmployee. Finally display these members‟ value
#include <stdio.h>

struct Company
{
    char name[50];
    char phone[15];
    char address[50];
    int no_of_employee;
};

int main()
{
    Company company;

    printf("Enter Company details\n");
    printf("Name: ");
    scanf("%s", company.name);
    printf("Address: ");
    scanf("%s", company.address);
    printf("No. of Employees: ");
    scanf("%d", &company.no_of_employee);
    printf("Phone no.: ");
    scanf("%s", company.phone);

    printf("\nCompany details are:\n");
    printf("Name: %s\n", company.name);
    printf("Address: %s\n", company.address);
    printf("No. of Employees: %d\n", company.no_of_employee);
    printf("Phone no.: %s\n", company.phone);
    return 0;
}

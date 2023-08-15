#include <stdio.h>
#include <stdlib.h>

void AddEmployee(FILE *fptr)
{
    
    if (fptr == NULL)
    {
        printf("Error!\n");
        exit(1);
    }

    int EmployeeID;
    char EmployeeName[20];
    int EmployeeSalary;
    char Department[10];

    printf("\nEnter Employee ID: ");
    scanf("%d", &EmployeeID);
    printf("Enter Employee Name: ");
    scanf("%s", EmployeeName);
    printf("Enter Employee Salary: ");
    scanf("%d", &EmployeeSalary);
    printf("Enter Employee Department: ");
    scanf("%s", Department);

    fprintf(fptr, "%d %s %d %s\n", EmployeeID, EmployeeName, EmployeeSalary, Department);
    printf("\nEmployee added successfully with id: %d\n", EmployeeID);
    printf("***************************************\n");
    
}

void DeleteEmployee(FILE *fptr)
{
    int dlt_id;
    printf("\nEnter id You want to delete: ");
    scanf("%d", &dlt_id);
    
    FILE *tempFile = fopen("C:\\Users\\HP\\Desktop\\c\\temp_employee.txt", "w");
    
    if (tempFile == NULL)
    {
        printf("Error!\n");
        exit(1);
    }

    int EmployeeID;
    char EmployeeName[20];
    int EmployeeSalary;
    char Department[10];

    while (fscanf(fptr, "%d %s %d %s", &EmployeeID, EmployeeName, &EmployeeSalary, Department) != EOF)
    {

        if (EmployeeID != dlt_id)
        {

            fprintf(tempFile, "%d %s %d %s\n", EmployeeID, EmployeeName, EmployeeSalary, Department);
        }
    }

    fclose(fptr);
    fclose(tempFile);

    remove("C:\\Users\\HP\\Desktop\\c\\employee.txt");
    rename("C:\\Users\\HP\\Desktop\\c\\temp_employee.txt", "C:\\Users\\HP\\Desktop\\c\\employee.txt");

    printf("\nEmployee id: %d deleted successfully\n", dlt_id);
    printf("************************************\n");
}

void ShowEmployee(FILE *fptr)
{
    printf("\n");
    printf("##############################################################################################################################\n\n");

    int EmployeeID;
    char EmployeeName[20];
    int EmployeeSalary;
    char Department[10];

    while (fscanf(fptr, "%d %s %d %s", &EmployeeID, EmployeeName, &EmployeeSalary, Department) != EOF)
    {
        printf(" | Employee ID : %d | \t", EmployeeID);
        printf("Employee Name : %s | \t", EmployeeName);
        printf("Employee Salary : %d | \t", EmployeeSalary);
        printf("Employee Department : %s | \n\n", Department);
    }

    printf("##############################################################################################################################\n");
}

void UpdateEmployee(FILE *fptr)
{
    int upd_id;
    printf("\nSelect id You want to update: ");
    scanf("%d", &upd_id);

    FILE *tempFile = fopen("C:\\Users\\HP\\Desktop\\c\\temp_employee.txt", "w");
    if (tempFile == NULL)
    {
        printf("Error!\n");
        exit(1);
    }

    int EmployeeID;
    char EmployeeName[20];
    int EmployeeSalary;
    char Department[10];

    while (fscanf(fptr, "%d %s %d %s", &EmployeeID, EmployeeName, &EmployeeSalary, Department) != EOF)
    {
        if (EmployeeID == upd_id)
        {
            printf("Current Employee Name: %s\n", EmployeeName);
            printf("Enter Updated Employee Name: ");
            scanf("%s", EmployeeName);
            printf("Current Employee Salary: %d\n", EmployeeSalary);
            printf("Enter Updated Employee Salary: ");
            scanf("%d", &EmployeeSalary);
            printf("Current Employee Department: %s\n", Department);
            printf("Enter Updated Employee Department: ");
            scanf("%s", Department);
        }

        fprintf(tempFile, "%d %s %d %s\n", EmployeeID, EmployeeName, EmployeeSalary, Department);
    }

    fclose(fptr);
    fclose(tempFile);

    remove("C:\\Users\\HP\\Desktop\\c\\employee.txt");
    rename("C:\\Users\\HP\\Desktop\\c\\temp_employee.txt", "C:\\Users\\HP\\Desktop\\c\\employee.txt");

    printf("\nEmployee id: %d updated successfully\n", upd_id);
    printf("************************************\n");
}

int main()
{
    int ch;
    FILE *fptr;

    printf("\n****************************************************\n");
    printf("\nWelcome to the Employee Management System\n");
    printf("\n****************************************************\n");

    while (1)
    {
        printf("\nSelect an option:\n");
        printf("1.Add an Employee\n");
        printf("2.Delete an Employee\n");
        printf("3.Show Employees\n");
        printf("4.Update an Employee\n");
        printf("5.Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            fptr = fopen("C:\\Users\\HP\\Desktop\\c\\employee.txt", "a");
            AddEmployee(fptr);
            fclose(fptr);
            break;
        case 2:
            fptr = fopen("C:\\Users\\HP\\Desktop\\c\\employee.txt", "r");
            DeleteEmployee(fptr);
            break;
        case 3:
            fptr = fopen("C:\\Users\\HP\\Desktop\\c\\employee.txt", "r");
            if (fptr == NULL)
            {
                printf("Error!\n");
                exit(1);
            }
            ShowEmployee(fptr);
            fclose(fptr);
            break;
        case 4:
            fptr = fopen("C:\\Users\\HP\\Desktop\\c\\employee.txt", "r+");
            if (fptr == NULL)
            {
                printf("Error!\n");
                exit(1);
            }
            UpdateEmployee(fptr);
            break;
        case 5:
            printf("\nThank you! Have a nice day.\n");
            exit(0);
        default:
            printf("\nInvalid choice! Please select a valid option.\n");
        }
    }

    return 0;
}

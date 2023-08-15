#include <stdio.h>
#include <stdlib.h>
int id = 0;
struct Employee
{
        int EmployeeID;
        char EmployeeName[20];
        int EmployeeSalary;
        char Department[10];
};
void AddEmployee(struct Employee emp[])
{
        printf("\n");
        printf("Employee ID : %d\n", emp[id].EmployeeID = id + 1);
        printf("Enter Employee Name : ");
        scanf("%s", &emp[id].EmployeeName);
        printf("Enter Employee Salary : ");
        scanf("%d", &emp[id].EmployeeSalary);
        printf("Enter Employee Department : ");
        scanf("%s", &emp[id].Department);
        printf("\nEmployee added succesfully with id : %d\n", id + 1);
        printf("***************************************\n");
        id++;
}
void DeleteEmployee(struct Employee emp[])
{
        printf("\n");
        int dlt_id;
        printf("Enter id You want to delete : ");
        scanf("%d", &dlt_id);
        for (int i = dlt_id; i < id; i++)
        {
                emp[i - 1] = emp[i];
        }
        printf("\nEmployee id : %d deleted succesfully\n", dlt_id);
        printf("************************************\n");
        id--;
}
void ShowEmployee(struct Employee emp[])
{
        printf("\n");
        printf("##############################################################################################################################\n\n");
        for (int i = 0; i < id; i++)
        {
                printf("Employee ID : %d\t\t", emp[i].EmployeeID);
                printf("Employe Name is : %s\t", emp[i].EmployeeName);
                printf("Employee Salary is : %d\t", emp[i].EmployeeSalary);
                printf("Employee Department is : %s\t", emp[i].Department);
                printf("\n\n");
        }
        printf("##############################################################################################################################\n");
}
void UpdateEmployee(struct Employee emp[])
{
        printf("\n");
        int upd_id;
        printf("select id You want to update : ");
        scanf("%d", &upd_id);
        printf("Current Employee Name : %s\n", emp[upd_id - 1].EmployeeName);
        printf("Enter Updated Employee Name : ");
        scanf("%s", &emp[upd_id - 1].EmployeeName);
        printf("Current Employee Salary : %d\n", emp[upd_id - 1].EmployeeSalary);
        printf("Enter Updated Employee Salary : ");
        scanf("%d", &emp[upd_id - 1].EmployeeSalary);
        printf("Current Employee Department : %s\n", emp[upd_id - 1].Department);
        printf("Enter Updated Employee Department : ");
        scanf("%s", &emp[upd_id - 1].Department);
        printf("\nEmployee id : %d updated succesfully\n", upd_id);
        printf("************************************\n");
}
int main()
{
        int ch;
        struct Employee emp[20];
        printf("\n****************************************************\n");
        printf("\nWelcome to the Employee Management System\n");
        printf("\n****************************************************\n");
        while (1)
        {
                printf("\nSelect an option : \n");
                printf("\n1.Add a Employee\n");
                printf("2.Delete a Employee\n");
                printf("3.Show Employee\n");
                printf("4.Update a Employee\n");
                printf("5.Exit\n");

                printf("\nEnter your choice: ");
                scanf("%d", &ch);
                printf("xxxxxxxxxxxxxxxxxxxxx\n");

                switch (ch)
                {
                case 1:
                        AddEmployee(emp);
                        break;
                case 2:
                        DeleteEmployee(emp);
                        break;
                case 3:
                        ShowEmployee(emp);
                        break;
                case 4:
                        UpdateEmployee(emp);
                        break;
                case 5:
                        printf("\nThankyou! Have a nice day");
                        exit(0);
                default:
                        printf("\nInvalid choice! Please select a valid option.\n");
                }
        }
}

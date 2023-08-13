# Employee Management System

This repository contains a simple **Employee Management System** implemented in C. The program allows users to perform basic CRUD (Create, Read, Update, Delete) operations on a list of employees. This system is particularly useful for small businesses or teams to manage employee information efficiently.

## Features

The code provides the following features:

1. **Add Employee**: Users can add employee details such as Employee ID, Employee Name, Salary, and Department. The program automatically assigns a unique Employee ID based on the order of addition.

2. **Delete Employee**: Users can remove an employee by providing their ID. The program shifts the remaining employees' data to fill the gap left by the deleted employee.

3. **Show Employee**: This option displays the details of all currently stored employees, including Employee ID, Name, Salary, and Department.

4. **Update Employee**: Users can update the information of an existing employee by specifying their ID. They can modify the Employee Name, Salary, and Department.

5. **Exit**: The program can be exited by selecting this option.

## How to Use

1. Clone the repository and navigate to the source code directory.

2. Compile the code using a C compiler, such as GCC:
   ```
   gcc employee_management.c -o employee_management
   ```

3. Run the compiled executable:
   ```
   ./employee_management
   ```

4. Follow the on-screen menu to perform various employee management operations.


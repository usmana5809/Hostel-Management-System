# Hostel Management System
SUBJECT: OBJECT ORIENTED PROGRAMMING 
- Make a  class naming management for all calculations 
There are four hostels(3 boys and a girls) under the manager. Each of this hostel has : 
- Separate hostel mess system. 
- One cook for kitchen. 
-	Four sweepers. 
-	Five guards. 
-	One serving boy. 
 
-	Management has five subclasses salary, hostel 1, 2, 3 and girls hostel. 
Enter the number of students in each hostel and save their credentials meaning name, roll number and ID card number in four different files namely hostel 1, hostel 2, hostel 3 and girls hostel.  
Minimum residents are 200 per hostel. 
-	Each sub class(eg hostel1) has further sub classes naming mess, guests, clothes and security system  
# Subclass mess: 
Mess menu should be designed according to the user for the whole month. 
Mess system serves two times to students who are willing to eat. 
There should be files naming mess1, mess2, mess3 and mess4 which has record of last thirty days of all the students. Data in the files are altered on the end of each day. eg(Mess1 will be the mess file for hostel1.There are two entries per day done by two members breakfast and dinner) Subclass Guests: 
Three guests are allowed for each student and every student has guests two days per month (mandatory). 
Students should tell management of guests one day earlier. 
Make another file which shows guess list of each student and there total bill of mess of their guests.  
eg(Guest list for hostel1 will be named guest1.Entries are done through members ID and use function guest_total for making total for each student.) 
 
 
# Subclass Clothes: 
- There is a private cloth management system which cost Rs.5/piece for ironing and 12 /piece for washing. 
- 15% for each clothing piece goes to hostel management. 
- Every student uses this facility at least once a week. 
- A file is created for the total money gathered from washing and ironing and hostels share in it. 
eg(for hostel1 file name will be clothes1 and wash and iron are two members of this subclass.) 
# Subclass Security system: 
Make a file for guest id card numbers for each student of the whole month. 
Make another file for night day shifts of four guards and one chief in control room. Make a file for the extra curricular activities which includes trip per weekend and bonfire once a month. 
Make another file for the lost found items for all the students. In this file every item of hostel lost is fined as per requirement like lost key should be fined with 100 rupees. 
eg(for security1 file names are guestid, guardshift and LFitems) Subclass Salary: 
Make another file which includes the salaries of the following people. 
-	Manager 25k, 
-	Guard 15k, 
-	Cook 15k, 
-	Sweeper 10k, 
-	Serving boy 5k. These salaries should be adjusted from the bill of the students. 
# Class management: 
Every student at the end of the month total bill for each student should be calculated as follows: 
-	Mess  
-	Guest mess 
-	Lost/found fine 
A file should be created which has separate salary and hostel profit. 
Create a way to show the total dues of any student whose idcard no. is entered. 


## Overview
The Hostel Management System is a comprehensive software application designed to manage the various aspects of hostel administration, including student management, mess management, guest management, clothes management, security management, salary management, and account management.

## Features
- **Student Management**: Add, view, update, delete student records, and manage fines.
- **Mess Management**: Add, view, update, and delete mess records.
- **Guest Management**: Add, view, update, and delete guest records.
- **Clothes Management**: Add, view, update, and delete clothes records.
- **Security Management**: Add, view, update, and delete security incidents.
- **Salary Management**: Add, view, update, and delete salary records.
- **Account Management**: Add, view, update, and delete account records.

## Usage
Upon running the program, users can select the hostel they wish to manage (e.g., Boy Hostel 1, Boy Hostel 2, Boy Hostel 3, Girl Hostel). Within each hostel, users can navigate through various management systems to perform CRUD operations (Create, Read, Update, Delete).

### Main Menu
```bash
========================================================================================
HOSTEL MANAGEMENT SYSTEM
    === >>  Press 1 for Boy Hostel1
    === >>  Press 2 for Boy Hostel2
    === >>  Press 3 for Boy Hostel3
    === >>  Press 4 for Girl Hostel
    === >>  Press 5 to Exit
```

### Submenu Example
```bash
========================================================================================
                    (Student Management System)
========================================================================================
STUDENT MANAGEMENT SYSTEM
    --- >> Press 1 to Add Student
    --- >> Press 2 to View Students
    --- >> Press 3 to Update Student
    --- >> Press 4 to Delete Student
    --- >> Press 5 to Manage Fines
    --- >> Press 9 to Return to Previous Menu
    --- >> Press 1 to Add Student
    --- >> Press 2 to View Students
    --- >> Press 3 to Update Student
    --- >> Press 4 to Delete Student
    --- >> Press 5 to Manage Fines
    --- >> Press 9 to Return to Previous Menu
```

## Installation
1. Clone the repository:
    ```sh
    git clone https://github.com/your-username/hostel-management-system.git
    ```
2. Navigate to the project directory:
    ```sh
    cd hostel-management-system
    ```
3. Compile the code using a C++ compiler:
    ```sh
    g++ main.cpp -o hostel_management_system
    ```
4. Run the executable:
    ```sh
    ./hostel_management_system
    ```

## Expected Output
- Users will interact with the system via a command-line interface.
- Menus will guide the user to perform various operations.
- Success and error messages will be displayed accordingly.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


## Contact
For any questions or suggestions, please contact [usmanazulfiqar2001@gmail.com](mailto:usmanazulfiqar2001@gmail.com).




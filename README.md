# student_management_system_linked_list
This C++ project is an implementation of a simple student record management system using a linked list data structure. The program allows users to perform various operations on a list of student records, such as inserting new records, searching for records, counting the number of records, updating existing records, deleting records, and displaying all records.

Here's a breakdown of the key components and functionalities:

Classes:
node Class:

Represents a node in the linked list.
Contains attributes such as roll_no (roll number), name (student name), marks (out of 800), percentage (calculated based on marks), cgpa (CGPA), and a pointer next to the next node.
linked_list Class:

Manages the linked list of student records.
Provides methods for inserting, searching, counting, updating, deleting, and displaying records.
Main Function:
main Function:
Creates an instance of the linked_list class.
Utilizes a menu-driven approach to interact with the user.
The user can choose from options such as inserting a new record, searching for a record, counting the number of records, updating a record, deleting a record, displaying all records, and exiting the program.
Operations:
Insert Operation (insert Method):

Takes input for roll number, name, marks, and CGPA.
Creates a new node with the entered data and inserts it at the end of the linked list.
Search Operation (search Method):

Searches for a record based on the entered roll number.
Displays the details of the found record or notifies if the record is not found.
Count Operation (count Method):

Counts and displays the total number of nodes (student records) in the linked list.
Update Operation (update Method):

Searches for a record based on the entered roll number.
Allows the user to update the roll number, name, marks, and CGPA of the found record.
Delete Operation (deletefunc Method):

Searches for a record based on the entered roll number.
Deletes the found record from the linked list.
Display Operation (show Method):

Displays details of all records in the linked list.
User Interaction:
The program repeatedly displays a menu, and the user can choose an option until choosing to exit.
Input and output are primarily handled through standard input and output streams.
Note:
The project demonstrates a basic implementation of a linked list-based student record management system.
Error handling for invalid inputs is minimal, and additional features could be added for a more comprehensive application.
This project provides a foundation for a simple student record management system and can be extended with additional features and improvements as needed.

/*
NAME: Dinesh Kumar S 
class: 26012B
Start Date : 09.07.2026
End Date : 25.07.2026
DESCRIPTION: 
The Address Book project is a C program used to store and manage contact details like name, mobile number, and email ID.
In this we can create,search,edit,list and delete the contact.

// createcontact():       ->Adds a new contact to the address book by collecting name, mobile number, and email ID from the use
//                        ->Validates all inputs before storing the contact in memory.

// searchcontacts():      ->Searches for contacts based on name, mobile number, or email ID entered by the user.
//                        ->Displays matching records and allows selection when multiple contacts are found.

// editcontact():         ->Allows the user to modify existing contact details such as name, mobile number, or email ID.
//                        ->Ensures updated values are validated before saving the changes.

// deletecontact():       ->Removes a selected contact from the address book based on user input such as name, mobile number or
//                        ->Reorganizes remaining records to maintain proper data order.

// listcontacts():        ->Displays all saved contacts in a formatted tabular view.
//                        ->Helps the user easily review stored contact information.

// saveContactsTofile():  ->writes all current contact data from memory into a file for permanent storage.
//                        ->Ensures that contacts are preserved for future program executions.

// loadContactsfromfile(): ->Loads previously saved contact details from the file into memory when the program starts.
//                         ->Allows the user to continue working with existing contacts without data loss

sample input:
// Interface
======== Address Book Menu ========
        1. Create contact
        2. Search contact
        3. Edit contact
        4. Delete contact
        5. List all contacts
        6. Save and Exit
===================================
Enter your choice : 1

sample Output:
======== Address Book Menu ========
        1. Create contact
        2. Search contact
        3. Edit contact
        4. Delete contact
        5. List all contacts
        6. Save and Exit
===================================
Enter your choice : 1
-------- Create Contact --------
Enter the Name : Dinesh
Enter the Mobile Number : 8675278071
Enter the email : dinesh@gmail.com
Contact Created Successfully...
*/
#include <stdio.h>
#include "contact.h"
int main() {
    int choice;
    AddressBook addressBook;
    initialize(&addressBook); // Initialize the address book

    do {
        printf("\n======== Address Book Menu ========\n");
        printf("\t1. Create contact\n");
        printf("\t2. Search contact\n");
        printf("\t3. Edit contact\n");
        printf("\t4. Delete contact\n");
        printf("\t5. List all contacts\n");
        printf("\t6. Save and Exit\n");
        printf("===================================\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                createContact(&addressBook);  // Create Function
                break;
            case 2:
                printf("   Search By :\n");
                printf("\t1. Name\n");
                printf("\t2. Mobile Number\n");
                printf("\t3. Email ID\n");
                printf("\t4. Exit\n");
                printf("Enter your choice : ");
                int searchChoice;
                scanf("%d",&searchChoice);
                searchContact(&addressBook, searchChoice);  // Search Function
                break;
            case 3:
                printf("   Edit By :\n");
                printf("\t1. Name\n");
                printf("\t2. Mobile Number\n");
                printf("\t3. Email ID\n");
                printf("\t4. Edit ALL\n");
                printf("\t5. Exit\n");
                printf("Enter your choice : ");
                int editChoice;
                scanf("%d",&editChoice);
                editContact(&addressBook, editChoice);  // Edit Function
                break;
            case 4:
                printf("   Delete By :\n");
                printf("\t1. Name\n");
                printf("\t2. Mobile Number\n");
                printf("\t3. Email ID\n");
                printf("\t4. Exit\n");
                printf("Enter you choice : ");
                int deleteChoice;
                scanf("%d",&deleteChoice);
                deleteContact(&addressBook, deleteChoice);  // Delete Function
                break;
            case 5:
                printf("   Select sort criteria:\n");
                printf("\t1. Sort by name\n");
                printf("\t2. Sort by phone\n");
                printf("\t3. Sort by email\n");
                printf("\t4.Exit\n");
                printf("Enter your choice: ");
                int sortChoice;
                scanf("%d", &sortChoice);
                listContacts(&addressBook, sortChoice);   // Sort Function
                break;
            case 6:
                printf("Saving and Exiting...\n");
                saveContactsToFile(&addressBook);   // Saving...
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);
    
       return 0;
}

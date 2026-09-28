#ifndef CONTACT_H
#define CONTACT_H

#define MAX_CONTACTS 100

typedef struct {
    char name[50];
    char phone[20];
    char email[50];
} Contact;

typedef struct {
    Contact contacts[MAX_CONTACTS];
    int contactCount;
} AddressBook;

void createContact(AddressBook *addressBook);
void searchContact(AddressBook *addressBook ,int searchChoice);
void editContact(AddressBook *addressBook ,int editChoice);
void deleteContact(AddressBook *addressBook, int deleteChoice);
void listContacts(AddressBook *addressBook, int sortCriteria);
void initialize(AddressBook *addressBook);
void saveContactsToFile(AddressBook *AddressBook);
int name_validation(char name[]);
int phone_validation(char ph[],AddressBook *AddressBook);
int mail_validation(char mail[],AddressBook *addressbook);

#endif

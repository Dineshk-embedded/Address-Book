#include <stdio.h>
#include <unistd.h>
#include "file.h"

void saveContactsToFile(AddressBook *addressBook) 
{
    FILE *fptr;
    if((fptr = fopen("contact.csv","w")) == NULL)   // Open the File in "w"(Write) mode to save contacts
    {
        fprintf(stderr,"FILE NOT FOUND\n");
        return;
    }

    for(int i = 0; i < addressBook->contactCount; i++)
    {
        fprintf(fptr,"%s,%s,%s\n",
            addressBook->contacts[i].name,
            addressBook->contacts[i].phone,
            addressBook->contacts[i].email);
    }

    fclose(fptr);      // Close the File after writing.

    for(int i = 0; i <= 100; i++)    //loading Animation.
    {
        printf("Saving");
        for(int dash = 0; dash < i;dash++)
        printf("-");
        for(int space = 0; space < 100 - i; space++)
        printf(" ");

        printf("%d%%\r",i);
        fflush(stdout);
        for(int wait = 0xffffff;wait--;);
    }
}

void loadContactsFromFile(AddressBook *addressBook)
{
    FILE *fptr;
    if((fptr = fopen("contact.csv","r")) == NULL)   // Open the File in "r"(read) mode to load contacts.
    {
        fprintf(stderr,"FILE NOT FOUND\n");
        return;
    } 
    
    while((fscanf(fptr,"%[^,],%[^,],%[^\n]\n",
        addressBook->contacts[addressBook->contactCount].name,
        addressBook->contacts[addressBook->contactCount].phone,
        addressBook->contacts[addressBook->contactCount].email)) == 3)
        {
            addressBook->contactCount++;
        }

    fclose(fptr);   // Close the file after reading.
} 

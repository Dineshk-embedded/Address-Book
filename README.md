# Address Book in C

A console-based address book application written in C to store and manage contact details (name, mobile number, email ID) with permanent file storage.

## Features
- **Create** a new contact with input validation
- **Search** by name, mobile number, or email ID (with selection when multiple matches are found)
- **Edit** existing contact details with validation
- **Delete** a contact and reorganize the remaining records
- **List** all contacts in a formatted table
- **Save / Load** contacts from a file so data is kept between runs

## Functions Overview
| Function | Purpose |
|---|---|
| `createcontact()` | Collects and validates details, then adds a contact |
| `searchcontacts()` | Finds contacts by name, mobile, or email |
| `editcontact()` | Modifies and re-validates contact details |
| `deletecontact()` | Removes a contact and keeps records in order |
| `listcontacts()` | Displays all contacts in tabular form |
| `saveContactsTofile()` | Writes contacts from memory to a file |
| `loadContactsfromfile()` | Loads saved contacts at program start |

## Tech Used
- Language: C
- Concepts: structures, arrays, string handling, file I/O, input validation, modular programming
- Compiler: gcc

## How to Build and Run
```bash
gcc *.c -o addressbook
./addressbook
```

## What I Learned
- Structuring a C program into multiple functions/files
- Reading and writing data with file handling
- Validating user input
- Managing records in memory

## Future Improvements
- Sort contacts alphabetically
- Export and import contacts using a CSV file
- Add duplicate contact detection

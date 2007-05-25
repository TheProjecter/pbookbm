#ifndef MANAGER_H
#define MANAGER_H

// menu
void help();                                             // display help stuff
void menu(struct Pessoa *pessoa, list *lList);           // display menu
// menu

// Inclusion
int checkName(struct Pessoa pessoa);                     // set all elements to "-"
void writePerson(struct Pessoa pessoa);                  // write the file
int askInclusion();                                      // check if continue
struct Pessoa readData(struct Pessoa pessoa);            // read person data
void insert(struct Pessoa pessoa);                       // begin insertion
// Inclusion

// Search
int listElement(char element[], list *lList);            // list %element%
int getElement(char element[]);                          // return element line
int askSearch();                                         // check if continue
void search(list *lList);                                // do a search
// Search

// Alter
void alterElement(char element[]);                       // deleta e insere
void alter(list *lList);                                 // chama menu de alteracao
// Alter

// Delete
void deleteElement(char element[]);                      // delete a element in the file
void deleteReg(list *lList);                             // search and destroy
// Delete

#endif // MANAGER_H

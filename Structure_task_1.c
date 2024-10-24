#include <stdio.h>
#include <string.h>
  struct Book {
   char title[30];
   char author[30];
   int publication_year;
   char ISBN[13];
   float price;
  }book;
  
  int main() {
    strcpy(book.title,"Introduction to C programming");
    strcpy(book.author,"John Smith"); 
    book.publication_year = 2022;
    strcpy(book.ISBN,"9780131103627"); 
    book.price = 49.99;
    
    printf("Title: %s\n",book.title);
    printf("Author: %s\n",book.author);
    printf("Publication Year: %d\n",book.publication_year);
    printf("ISBN: %s\n",book.ISBN);
    printf("Price: %.2f\n",book.price);
    
  return 0;
  }
#include <stdio.h>
#include <string.h>
  struct Book {
   char title[100];
   char author[30];
   int publication_year;
   char ISBN[13];
   float price;
  }book;
  
  int main() {
    //strcpy(book.title,"Introduction to C programming");
    printf("Enter the title: ");
    fgets(book.title,sizeof(book.title),stdin);
    book.title[strcspn(book.title,"\n")] = 0;
    //strcpy(book.author,"John Smith"); 
    printf("Enter the Author: ");
    fgets(book.author,sizeof(book.author),stdin);
    book.author[strcspn(book.author,"\n")] = 0;
    //book.publication_year = 2022;
    printf("Enter the Publication Year: ");
    scanf("%d",&book.publication_year);
    //strcpy(book.ISBN,"9780131103627"); 
    printf("Enter the ISBN: ");
    scanf("%s",&book.ISBN);
    //book.price = 49.99;
    printf("Enter the price: ");
    scanf("%f",&book.price);
    
    printf("\nTitle: %s\n",book.title);
    printf("Author: %s\n",book.author);
    printf("Publication Year: %d\n",book.publication_year);
    printf("ISBN: %s\n",book.ISBN);
    printf("Price: %.2f\n",book.price);
    
  return 0;
  }
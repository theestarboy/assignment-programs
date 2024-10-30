#include <stdio.h>
#include <string.h>

struct book{
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
    
}book1;

int main(){
  
  printf("Enter the book title :");
  scanf("%s",&book1.title);
  printf("Enter the author's name :");
  scanf("%s",&book1.author);
  printf("Enter the publication year :");
  scanf("%d",&book1.publication_year);
  printf("Enter the ISBN :");
  scanf("%s",&book1.ISBN);
  printf("Enter the price :");
  scanf("%f",&book1.price);
  
  printf("--------------book details-------------\n");

    
    printf("Title :%s\n",book1.title);
    printf("Author :%s\n",book1.author);
    printf("Publication Year :%d\n",book1.publication_year);
    printf("ISBN :%s\n",book1.ISBN);
    printf("Price :%.2f\n",book1.price);
    
    return 0;
    
}

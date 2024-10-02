#include <stdio.h>
int main(){
    int bookID,dueDate,returnDate,daysOverdue;
    int fineRate=0,fineAmount=0;

    //user input for book details
    printf("Enter the bookID:");
    scanf("%d",&bookID);
    printf("Enter the due date(in days):");
    scanf("%d",&dueDate);
    printf("Enter the return date (in days):");
    scanf("%d",&returnDate);

    //calculate days overdue
    daysOverdue=returnDate-dueDate;

    //determine the fine rate based on the number of overdue days
    if (daysOverdue<=7){
            fineRate=20;
    }else if (daysOverdue<=14){
        fineRate=50;
    }else if (daysOverdue>14){
        fineRate=100;
    }
    //calculate the total fine amount
    fineAmount=daysOverdue*fineRate;
    //display the results
    printf("\nBookID:%d\n",bookID);
    printf("Due Date:%d\n",dueDate);
    printf("ReturnDate:%d\n",returnDate);
    printf("Days Overdue:%d\n",daysOverdue);
    printf("FineRate:ksh.%d per day\n",fineRate);
    printf("TotalFineAmount:ksh.%d\n",fineAmount);

    return 0;
}

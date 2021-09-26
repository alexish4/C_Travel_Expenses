#include <stdio.h>
#include "header.h"

int main()
{
    int total;
    printf("Travel Expenses Calculator");
    total = regisFee() + 
            privCarExpense(milesDriven()) + 
            parkingFee(daysOnTrip(), parkingTotal) + 
            taxiFee(daysOnTrip(), taxiTotal) + 
            hotelFee(daysOnTrip());
    printf("The total expenses for this trip: $%d\n", total);
    printf("The total allowable expenses for this trip: \n");
    printf("The total amount to be reimbursed: \n");
    printf("Amount saved: \n");
    
    return 0;
}
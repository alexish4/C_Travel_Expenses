#include <stdio.h>
#include "header.h"

int main()
{
    int total = 0;
    printf("Travel Expenses Calculator");
    days = getDaysOnTrip();
    miles = getMilesDriven();
    taxiF = getTaxiFees();
    parkingF = getParkingFees();
    getTimeDeparture();
    getTimeArriveHome();
    getAirFareCost();
    getCarRentalCost();

    //getParkingFees();

    printf("The total expenses for this trip: $%d\n", total);
    total = parkingFees(days, parkingF) + 
            privCarExpense(miles) + taxiFees(days, taxiF);
    printf("The total allowable expenses for this trip: \n");
    printf("The total amount to be reimbursed: \n");
    printf("Amount saved: \n");
    
    return 0;
}
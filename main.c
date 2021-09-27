#include <stdio.h>
#include "header.h"

int main()
{
    double personTotal = 0;
    double allowedTotal = 0;
    printf("Travel Expenses Calculator\n");
    days = getDaysOnTrip();
    timeDeparted = getTimeDeparture();
    timeArrivedHome = getTimeArriveHome();
    // car fees
    miles = getMilesDriven();
    taxiTotal = getTaxiFees();
    parkingTotal = getParkingFees();
    carRental = getCarRentalCost();
    // hotel/ meeting fees
    airFare = getAirFareCost();
    regisF = getMeetingFees();
    hotelF = getHotelFees();
    // meal fees
    meals = getMealCostsTotal(); // from user
    //calculating company coverage
    breakfast = breakfastsEaten(days, timeArrivedHome, timeDeparted);
    lunch = lunchesEaten(days, timeArrivedHome, timeDeparted);
    dinner = dinnersEaten(days, timeArrivedHome, timeDeparted);

    //What the business person spent
                //car fees
    personTotal = parkingTotal + 
                  taxiTotal + 
                  carRental + 
                  privCarExpense(miles) + 
                  // hotel/meeting fees
                  airFare +
                  regisF +
                  hotelF +
                  meals;

    allowedTotal = parkingFees(days, parkingTotal) + 
                   taxiFees(days, taxiTotal) +
                   //hotel/meals
                   hotelAllowance(days) +
                   mealAllowance(breakfast, lunch, dinner);
    /*
    if(mealAmount > 0)
    {
        total += mealAmount;
    }*/
    //double amountSaved = 
    //printf("The total expenses covered for this trip: $%lf\n", total);
    printf("The total amount spent: $%lf\n", personTotal);
    printf("The total amount the company is willing to cover: $%lf\n", allowedTotal);
    if(personTotal < allowedTotal)
    {
        double saved = allowedTotal - personTotal;
       printf("Amount saved: \n"); 
    }
    else
    {
        printf("you over spent bud");
    }
    
    
    return 0;
}
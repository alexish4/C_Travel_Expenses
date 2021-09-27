#include <stdio.h>
#include "header.h"

int main()
{
    double total = 0;
    printf("Travel Expenses Calculator");
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

    
            //car fees
    total = parkingFees(days, parkingTotal) + 
            privCarExpense(miles) + 
            taxiFees(days, taxiTotal) +
            // hotel and meal fees
            hotelFee(days, hotelF)+
            mealCost(breakfast, lunch, dinner, meals);
    printf("The total expenses for this trip: $%lf\n", total);
    printf("The total allowable expenses for this trip: \n");
    printf("The total amount to be reimbursed: \n");
    printf("Amount saved: \n");
    
    return 0;
}
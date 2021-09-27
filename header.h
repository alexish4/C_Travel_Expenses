#ifndef HEADER_H
#define HEADER_H

//variables
double airFare, carRental, parkingF, taxiF, regisF, hotelF;
int days, 
    timeDeparted, //24 hr time?
    timeArrivedHome,
    miles, //if private car used
    carExpense,
    parkingTotal, // total amount person spent
    taxiTotal,
    meals;
int breakfast = 9;
int lunch = 12;
int dinner = 16;

//Geting information from user
/*NOTE ON INPUT VALIDATION:
  - no neg numbers for dollar amount, or miles driven
  - no values less than 1 for number of days
  - only valid times (24 hour time?)*/
int getDaysOnTrip(); // asking how many days spent
int getTimeDeparture(); //departure info for first day and arrival home last day
int getTimeArriveHome();
double getAirFareCost();
double getCarRentalCost();
int getMilesDriven(); // if private car used, ask how many miles.
double getParkingFees();
double getTaxiFees();
double getMeetingFees();
double getHotelFees();
double getMealCostsTotal()
double inputValidMoney(double amt)


int regisFee();

// calulations
int privCarExpense(int miles); // Cost is $0.27 per mile
double parkingFees(); // allows $6 per day, anything more must be covered by employee
double taxiFees(); // allows $10 per day
double meetingFees();
double hotelFees(); // allows up to $90 per night
/* FIRST DAY:
   Breakfast allowed if time of departure is before 07:00
   Lunch is allowed if time of departure is before 12:00
   Dinner is allowed if time of departure is before 18:00 
   
   LAST DAY:
   Breakfast is allowed if the time of arrival is after 08:00 
   Lunch is allowed if the time of arrival is after 13:00 
   Dinner is allowed on the last day if the time of arrival is after 19:00
*/
double hotelFees();
double mealCost(int breakfasts, int lunches, int dinners, double expenditure);
int mealEaten(int days, int timeArrivedHome, int timeDeparted);


#endif
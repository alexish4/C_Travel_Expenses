#ifndef HEADER_H
#define HEADER_H

//variables
double airFare, carRental, parkingF, taxiF, regisF, parkingTotal, hotelF, taxiTotal;
int days, 
    timeDeparted, //24 hr time?
    timeArrivedHome,
    miles, //if private car used
    carExpense,
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

// car calulations
int privCarExpense(int miles); // Cost is $0.27 per mile
double parkingFees(int days, double parkingTotal); // allows $6 per day, anything more must be covered by employee
double privCarExpense(int miles);
double taxiFees(int days, double taxiTotal); // allows $10 per day
//hotel and meal calculations
double meetingFees();
double hotelFee(int days, int hotelTotal); // allows up to $90 per night
int breakfastsEaten(int days, int timeArrivedHome, int timeDeparted);
int lunchesEaten(int days, int timeArrivedHome, int timeDeparted);
int dinnersEaten(int days, int timeArrivedHome, int timeDeparted);
double mealCost(int breakfasts, int lunches, int dinners, double expenditure);
/* FIRST DAY:
   Breakfast allowed if time of departure is before 07:00
   Lunch is allowed if time of departure is before 12:00
   Dinner is allowed if time of departure is before 18:00 
   
   LAST DAY:
   Breakfast is allowed if the time of arrival is after 08:00 
   Lunch is allowed if the time of arrival is after 13:00 
   Dinner is allowed on the last day if the time of arrival is after 19:00
*/
double hotelAllowance(int days);
double hotelFees();
double mealAllowance(int breakfasts, int lunches, int dinners);
double mealCost(double allowance, double expenditure);

double inputValidMoney(double amt);
int breakfastsEaten(int days, int timeArrivedHome, int timeDeparted);
int lunchesEaten(int days, int timeArrivedHome, int timeDeparted);
int dinnersEaten(int days, int timeArrivedHome, int timeDeparted);

#endif
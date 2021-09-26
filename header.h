#ifndef HEADER_H
#define HEADER_H

//variables
int days, 
    timeDeparted, //24 hr time?
    timeArrivedHome,
    airFare, // air fare total
    carRental, //car rental total
    miles, //if private car used
    carExpense,
    parkingF,
    taxiF,
    parkingTotal, // total amount person spent
    regisF, // is this a set value???
    hotelF,
    meals;
int breakfast = 9;
int lunch = 12;
int dinner = 16;

// returning info
/*NOTE ON INPUT VALIDATION:
  - no neg numbers for dollar amount, or miles driven
  - no values less than 1 for number of days
  - only valid times (24 hour time?)*/
int daysOnTrip(); // asking how many days spent
int timeDeparted_Arrive(); //departure info for first day and arrival home last day

int milesDriven(); // if private car used, ask how many miles.
//is rental == car rental????
int regisFee();

// calulations
int privCarExpense(int miles); // Cost is $0.27 per mile
int parkingFee(int days, int parkingTotal); // allows $6 per day, anything more must be covered by employee
int taxiFee(int days, int taxiTotal); // allows $10 per day
int hotelFee(int days); // allows up to $90 per night
/* FIRST DAY:
   Breakfast allowed if time of departure is before 07:00
   Lunch is allowed if time of departure is before 12:00
   Dinner is allowed if time of departure is before 18:00 
   
   LAST DAY:
   Breakfast is allowed if the time of arrival is after 08:00 
   Lunch is allowed if the time of arrival is after 13:00 
   Dinner is allowed on the last day if the time of arrival is after 19:00
*/
int mealEaten(int days, int timeArrivedHome, int timeDeparted);


#endif
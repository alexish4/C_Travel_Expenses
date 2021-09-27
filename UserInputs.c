/*
This program will be used to get user input.
We will need to ask for the following:
    - Total number of days spent on the trip.
    - Time of departure on the first day of the trip
    - Time of arrival back home on last day of the trip
    - Amount of any round trip airfare
    - Amount of any car rentals
    - Miles driven if private vehile was use.
    - Parking fees
    - Taxi fees
    - conference or seminar registration fees
    - hotel expenses
    - Amount of each meal eaten.

input validation:
    - no negative numbers for dollar amount or miles driven.
    - no number less than 1 for number of days.
    - valid times only (0-23).

WARNING: DO NOT PUT ANYTHING OTHER THAN THE CORRESPONDING DATA TYPE.  SO IF IT ASKS FOR A DAY (INT) DO NOT PUT A LETTER AND VICE VERSA.
         THIS WILL CAUSE AN INFINITE LOOP THAT IS SCARY AND SUCKS A LOT.
*/

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

//input for days taken on the trip.
int getDaysOnTrip() {
    printf("How many days were spent on the trip?\n(Please include arrival and departure days)\n");
    scanf("%d", &days);

    while (days < 1) {
        printf("Invalid number of days. Please put at least 1 or more days.\n");      //checks validity of input.
        scanf("%d", &days);
    }

    return days;
}

//input for departure time.
int getTimeDeparture() {
    printf("What time was your departure?\n");
    printf("Please tell the time in 24-hour format (i.e 7 pm would be 19; 12 am is 0).\n");
    printf("Also, please tell time in hours only, rounding down (i.e 7:59 pm would be 19; 12:01 am would be 0).\n");    //guidelines for input.
    scanf("%d", &timeDeparted);

    while (timeDeparted > 23 || timeDeparted < 0) {
         printf("Invalid time.  Time must be from 0 - 23 inclusive.  Try again.\n");
         scanf("%d", &timeDeparted);
    }

    return timeDeparted;
}

//input for arrival time to home.
int getTimeArriveHome() {
    printf("What time was your arrival at home?\n");
    printf("Please tell the time in 24-hour format (i.e 7 pm would be 19; 12 am is 0).\n");
    printf("Also, please tell time in hours only, rounding down (i.e 7:59 pm would be 19; 12:01 am would be 0).\n");    //guidelines for input.
    scanf("%d", &timeArrivedHome);
    
    while (timeArrivedHome > 23 || timeArrivedHome < 0) {
         printf("Invalid time.  Time must be from 0 - 23 inclusive.  Try again.\n");    //checks validity of time input.
         scanf("%d", &timeArrivedHome);
    }

    return timeArrivedHome;
}

//input for air fare cost in dollars.
double getAirFareCost() {
    printf("How much was spent on round trip airfare?\n");
    scanf("%lf", &airFare);

    return inputValidMoney(airFare);     //method to check validity of input.  Also returns the amount if it is correct.
}

double getCarRentalCost() {
    printf("How much was spent on car rentals?\n");
    scanf("%lf", &carRental);

    return inputValidMoney(carRental);    //method to check validity of input.  Also returns the amount if it is correct.
}

//input for miles driven.
int getMilesDriven() {
    char yesOrNo;
    printf("did you use a private vehicle?  Enter 'y' for yes and 'n' for no.\n");      //asks the user if they drove a private vehicle.
    scanf("%c", &yesOrNo);

    while (yesOrNo != 'y' && yesOrNo != 'n') {                                      //checks if the user put something other than 'y' or 'n'.
        printf("Invalid input.  Please put either 'y' for yes or 'n' for no\n");    //if it is not valid, then will ask to try again.
        scanf("%c", &yesOrNo);
    }
    if (yesOrNo == 'y') {
        printf("How many miles did you drive?  Round to nearest mile.\n");    //if else statement to read if user answered 'y' or 'n'
        scanf("%d", &miles);
    } else {
        miles = 0;    //if input is not 'n', sets miles driven to 0.
    }

    return miles;
}

//input for parking fees.
double getParkingFees() {
    printf("How much was spent on parking fees?\n");
    scanf("%lf", &parkingF);

    return inputValidMoney(parkingF);  //same method to check money validity.
}

//input for taxi fees.
double getTaxiFees() {
    printf("How much was spent on taxi fees?\n");
    scanf("%lf", &taxiF);

    return inputValidMoney(taxiF);   //same method.  very similar to parkingFees.
}

//input for conference and registration fees.
double getMeetingFees() {
    printf("How much was spent on conferences or seminars?\n");
    scanf("%lf", &regisF);

    return inputValidMoney(regisF);
}

//input for hotel fees.
double getHotelFees() {
    printf("How much was spent on hotel fees?\n");
    scanf("%lf", &hotelF);

    return inputValidMoney(hotelF);
}

//input for meal costs.
double getMealCostsTotal() {
    printf("How much did you spend on meals?\n");
    scanf("%lf", &meals);

    return inputValidMoney(meals);
}

//used to see if the inputed money value is valid.  If invalid, will ask the person to try again.
double inputValidMoney(double amt) {
    while (amt < 0) {
        printf("Invalid amount of money.  Amount must be non-negative.  Try again.\n");    //when negative, asks the user to try again.
        scanf("%lf", &amt);
    }

    return amt;    //returns the parameter, which is the money.
}
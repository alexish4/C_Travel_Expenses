#include <stdio.h>
#include <stdlib.h>
#include "header.h"

double hotelFee(int days, int hotelTotal) // allows up to $90 per night
{
    double userPay = 0.00;
    
    userPay = hotelTotal - (days * 90);
    // If negative, means money was saved.
    // In main, can use an if statement like if hotelFee() < 0,
    // print("You were under allowed expenses and saved $%d", hotelFee() * -1)

    return userPay;
}

int breakfastsEaten(int days, int timeArrivedHome, int timeDeparted)
{
    int breakfast = 0;

    if (timeDeparted < 7) // Case for departure day
        breakfast++;

    if (timeArrivedHome > 8) // Case for arrival day
        breakfast++;

    breakfast += days - 2; // Every day in between departure and arrival

    return breakfast;
}

int lunchesEaten(int days, int timeArrivedHome, int timeDeparted)
{
    int lunch = 0;

    if (timeDeparted < 12 && timeDeparted >= 7) // Case for departure day
        lunch++;

    if (timeArrivedHome > 13) // Case for arrival day
        lunch++;

    lunch += days - 2; // Every day in between departure and arrival

    return lunch;
}

int dinnersEaten(int days, int timeArrivedHome, int timeDeparted)
{
    int dinner = 0;

    if (timeDeparted < 18 && timeDeparted >= 7 && timeDeparted >= 12) // Case for departure day
        dinner++;

    if (timeArrivedHome > 19) // Case for arrival day
        dinner++;

    dinner += days - 2; // Every day in between departure and arrival

    return dinner;
}

double mealCost(int breakfasts, int lunches, int dinners, double expenditure)
{
    double userPay = 0.00, allowedPay = 0.00;

    allowedPay += breakfasts * 9.00;
    allowedPay += lunches * 12.00;
    allowedPay += dinners * 16.00;

    userPay = expenditure - allowedPay;
    // If negative, means money was saved.
    // In main, can use an if statement like if mealCost() < 0,
    // print("You were under allowed expenses and saved $%d", mealCost() * -1)

    return userPay;
}
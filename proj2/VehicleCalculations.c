#include <stdio.h>
#include "header.h"

int parkingFee(int days, int parkingTotal) //the company's max coverage is 6 dollars per day
{
    if(parkingTotal < (6 * days))
    {
        parkingF = 0; /*if business person spends less than what the company max coverage then
                        company only covers what was used so that would make the parking expenses 0 dollars for the 
                        businessman*/
    }
    else
    {
        parkingF = parkingTotal - (6 * days); /*Business person has to say how much they spent on parking
                                        and how many days they have parked. The company covers 6 dollars per day*/
    }
    return parkingF;
}
int privCarExpense(int miles)
{
    carExpense = 0.27 * miles;
    return carExpense;
}
int taxiFee(int days, int taxiTotal)//the company's max coverage is 10 dollars per day
{
    if(taxiTotal < (10 * days))
    {
        taxiF = 0; /*if business person spends less than what the company max coverage then
                        company only covers what was used so that would make the parking expenses 0 dollars for the 
                        businessman*/
    }
    else
    {
        taxiF = taxiTotal - (10 * days); /*Business person has to say how much they spent on taxi usage
                                        and how many days they have used the taxi. The company covers 10 dollars per day*/
    }
    return taxiF;
}
int numCarRentals(int days)
{
    carRental = days * 41; //How much it costs to rent a car per day
    return carRental;
}
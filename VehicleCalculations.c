#include <stdio.h>
#include "header.h"

double parkingFees(int days, double parkingTotal) //the company's max coverage is 6 dollars per day
{
    if(parkingTotal < (6 * days))
    {
        parkingF = parkingTotal; /*if business person spends less than what the company max coverage then
                        company only covers what was used so that would make the parking expenses 0 dollars for the 
                        businessman*/
    }
    else
    {
        parkingF = (6 * days); /*Business person has to say how much they spent on parking
                                        and how many days they have parked. The company covers 6 dollars per day*/
    }
    return parkingF;
}
double privCarExpense(int miles)
{
    carExpense = 0.27 * miles;
    return carExpense;
}
double taxiFees(int days, double taxiTotal)//the company's max coverage is 10 dollars per day
{
    if(taxiTotal < (10 * days))
    {
        taxiF = taxiTotal; /*if business person spends less than what the company max coverage then
                        company only covers what was used so that would make the parking expenses 0 dollars for the 
                        businessman*/
    }
    else
    {
        taxiF = (10 * days); /*Business person has to say how much they spent on taxi usage
                                        and how many days they have used the taxi. The company covers 10 dollars per day*/
    }
    return taxiF;
}

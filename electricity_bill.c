// Electicity bill program


#include <stdio.h>

int main()
{
  //define variable unit, current, total current and supply current 
    int unit;
    float crnt, total_crnt, sply_charge;

  // take input from users
    printf("Enter total units: ");
    scanf("%d", &unit);

    if(unit<=50)
    {
      //current =unit * charge 
        crnt=unit * 0.50;
    }
    else if(unit <= 150)
    {
        crnt=unit * 0.75;

    }
    else if(unit <= 250)
    {
       crnt=unit * 1.20;
    }
     else
    {
        crnt = unit * 1.50;
    }

    sply_charge = crnt * 0.20;
    total_crnt  = crnt + sply_charge;

    printf("Electricity Bill = Rs. %.2f", total_crnt);

    return 0;
}



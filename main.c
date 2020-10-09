/*
    Author: Botan Celik
    Class: 5AHEL
    Program: SiebDesErasthones
    Date: 02.10.2020
    Github rep.: https://github.com/TheBloodyAmateur/Sieb-des-Erasthones.git
*/
#include <stdio.h>
#include <stdlib.h>

//global variables
int numbers[500];

//functions
void fill();
void printNumbers();

int main()
{
    fill();
    sortPrimeNumber();
    printNumbers();
    return 0;
}

//Fills the array with the numbers 0 - 499
void fill()
{
    for(int i = 0; i <= 500; i++)
    {
        numbers[i] = i;
    }
}

//Prints out the array
void printNumbers()
{
    for(int i = 0; i <= 500; i++)
    {
        //Every number unequal zero should be displayed
        if(!(numbers[i] == 0))
        {
          printf("%d\n",numbers[i]);
        }
    }
}

void sortPrimeNumber()
{
    int n = 0;
    int m = 0;
    int count = 0;

    /*
    To eliminate all non-prime numbers all multiples of 2,3,5 & 7 are set to 0.
    To achieve this all numbers are checked if they are the multiple of these numbers or not.
    All the remaining numbers should be prime numbers.
    */
    for(n = 2; n <= 9; n++)
    {
        for(m = 2; m <= 500; m++)
        {
            for(count = 0; count <= 500; count++)
            {
                //If the number is a multiple of a certain number it's set to 0.
                if(numbers[count] == n * m || numbers[count] == 1)
                {
                    numbers[count] = 0;
                }
            }
        }
    }
}

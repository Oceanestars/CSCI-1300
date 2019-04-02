//   Author:   <Oceane Andreis>
//   Recitation:   <110  and Monika>
//
//   Assignment   8
//   Problem   <FoodLog.h>

//Comments below

#ifndef FOODLOG_H
#define FOODLOG_H
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FoodLog
{
    public:
        FoodLog(vector<string> foodie); //I pass in the input of the user as a parameter.and initialize my counts.
        ~FoodLog(); //Deconstructor
        int CarbCheck(string filename,vector<string> foodie); // will keep track of carbs, will be some sort of check function to check in a list of
            //carb whether the food is a carb or not and return the number of how much carb the list of input had.
        int FatCheck(string filename,vector<string> foodie);// will keep track of fat, will be some sort of check function to check in a list of
            //fat whether the food is a fat or not and return the number of how much fat the list of input had.
        int SweetCheck(string filename3,vector<string> foodie3);// will keep track of sweets, will be some sort of check function to check in a list of
            //sweets whether the food is a sweet or not and return the number of how much sweet the list of input had.
        int ProteinCheck(string filename4,vector<string> foodie4); // will keep track of protein, will be some sort of check function to check in a list of
            //protein whether the food is a protein or not and return the number of how much protein the list of input had.
        int VeggieFruitsCheck(string filename6,vector<string> foodie6);// will keep track of veggie and fruits, will be some sort of check function to check in a list of
            //veggie and fruits whether the food is a veggie/fruit or not and return the number of how much veggie/fruit the list of input had.
            // Attribute
        int carbcount; // Keep track of how many carbs the user entered
        int sweetcount;//Keep track of how many sweets the user entered
        int fatcount;//Keep track of how many fats the user entered
        int proteincount;//Keep track of how many protein the user entered
        int vegfcount;//Keep track of how many vegetable and fruit the user entered


};

#endif // FOODLOG_H

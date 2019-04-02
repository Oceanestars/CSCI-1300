//   Author:   <Oceane Andreis>
//   Recitation:   <110  and Monika>
//
//   Assignment   8
//   Problem   <FoodLog.cpp>

//Comments below
//4 while loop, 4 for loop, 8 if statement and 4 file io
#include "FoodLog.h"
#include<iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//Constructor which passes the input and initialize my counts to zero
FoodLog::FoodLog(vector<string> foodie)
{
   carbcount=0;
   fatcount=0;
   proteincount=0;
   sweetcount=0;
   vegfcount=0;

}
//deconstructor
FoodLog::~FoodLog()
{

}
//Carb check reads in a file and while the file hasn't ended I get each line of the file
//I passed the user input in my parameter because I want to see if the inputs are in the file
//Which is why I'm using a for loop to go through every input and the while loop is to go through everything in the list
//I do want to check until we've checked all the inputs which is why I have <=foodie1.size in my for loop
//Then if the input matches a word in the list then I increase the carbcount by one
//Then I return carbcount so I can use it in other places.

int FoodLog::CarbCheck(string filename,vector<string> foodie1)
{
    //Pass the filename into carb check ,
    ifstream file1;
    file1.open(filename);
    string carbholder;
    //basically a list of input where each input is checked to see if it's in the entire list and if it is then increase count
    //then go on to the next input and check if that one is in the list etc..
    if(file1.is_open())
    {
        while(!file1.eof())
        {
            getline(file1,carbholder);

            //This method should see if the input(vector) matches each word in the list/filename)
            for(int j=0;j<=foodie1.size();j++)
            {
                if(foodie1[j]==carbholder)
                {
                    carbcount++;
                    //basically check all the word in both list
                    //if one of the many input from the users matches one word in the list/carbholder than increase the carb count
                }

            }
        }

           return carbcount;
    }
}

//Fat check reads in a file and while the file hasn't ended I get each line of the file
//I passed the user input in my parameter because I want to see if the inputs are in the file
//Which is why I'm using a for loop to go through every input and the while loop is to go through everything in the list
//I do want to check until we've checked all the inputs which is why I have <=foodie2.size in my for loop
//Then if the input matches a word in the list then I increase the fatcount by one
//Then I return fatcount so I can use it in other places.
int FoodLog::FatCheck(string filename2,vector<string> foodie2)
{
    //Pass the filename into fat check ,
    ifstream file2;
    file2.open(filename2);
    string fatholder;

    if(file2.is_open())
    {
        while(!file2.eof())
        {
            getline(file2,fatholder);

            //This method should see if the input(vector) matches each word in the list/filename)

            for(int j=0;j<=foodie2.size();j++)
            {
                if(foodie2[j]==fatholder)
                {
                    fatcount++;
                    //basically check all the word in both list
                    //if one of the many input from the users matches one word in the list/fatholder than increase the fat count
                }

            }
        }

           return fatcount;
    }
}
//Sweet check reads in a file and while the file hasn't ended I get each line of the file
//I passed the user input in my parameter because I want to see if the inputs are in the file
//Which is why I'm using a for loop to go through every input and the while loop is to go through everything in the list
//I do want to check until we've checked all the inputs which is why I have <=foodie3.size in my for loop
//Then if the input matches a word in the list then I increase the sweetcount by one
//Then I return sweetcount so I can use it in other places.
int FoodLog::SweetCheck(string filename3,vector<string> foodie3)
{
    //Pass the filename into sweet check ,
    ifstream file3;
    file3.open(filename3);
    string sweetholder;

    if(file3.is_open())
    {
        while(!file3.eof())
        {
            getline(file3,sweetholder);
            //This method should see if the input(vector) matches each word in the list/filename)

            for(int j=0;j<=foodie3.size();j++)
            {
                if(foodie3[j]==sweetholder)
                {
                    sweetcount++;
                    //basically check all the word in both list
                    //if one of the many input from the users matches one word in the list/sweetholder than increase the sweet count
                }

            }
        }

           return sweetcount;
    }
}
//Protein check reads in a file and while the file hasn't ended I get each line of the file
//I passed the user input in my parameter because I want to see if the inputs are in the file
//Which is why I'm using a for loop to go through every input and the while loop is to go through everything in the list
//I do want to check until we've checked all the inputs which is why I have <=foodie4.size in my for loop
//Then if the input matches a word in the list then I increase the proteincount by one
//Then I return proteincount so I can use it in other places.
int FoodLog::ProteinCheck(string filename4,vector<string> foodie4)
{
    //Pass the filename into Protein check ,
    ifstream file4;
    file4.open(filename4);
    string proteinholder;


    if(file4.is_open())
    {
        while(!file4.eof())
        {
            getline(file4,proteinholder);
            //This method should see if the input(vector) matches each word in the list/filename)

            for(int j=0;j<=foodie4.size();j++)
            {
                if(foodie4[j]==proteinholder)
                {

                    proteincount++;
                    //basically check all the word in both list
                    //if one of the many input from the users matches one word in the list/proteinholder than increase the protein count
                }

            }
        }

           return proteincount;
    }
}
//VeggieFruits check reads in a file and while the file hasn't ended I get each line of the file
//I passed the user input in my parameter because I want to see if the inputs are in the file
//Which is why I'm using a for loop to go through every input and the while loop is to go through everything in the list
//I do want to check until we've checked all the inputs which is why I have <=foodie6.size in my for loop
//Then if the input matches a word in the list then I increase the vegfcount by one
//Then I return vegfcount so I can use it in other places.
int FoodLog::VeggieFruitsCheck(string filename6,vector<string> foodie6)
{
    //Pass the filename into veggiefruit check ,
    ifstream file6;
    file6.open(filename6);
    string vegholder;
    //basically a list of input where each input is checked to see if it's in the entire list and if it is then increase count
    //then go on to the next input and check if that one is in the list etc..
    if(file6.is_open())
    {
        while(!file6.eof())
        {
            getline(file6,vegholder);
            //This method should see if the input(vector) matches each word in the list/filename)
            for(int j=0;j<=foodie6.size();j++)
            {
                if(foodie6[j]==vegholder)
                {
                    vegfcount++;
                    //basically check all the word in both list
                    //if one of the many input from the users matches one word in the list/vegholder than increase the vegf count
                }

            }
        }

           return vegfcount;
    }
}


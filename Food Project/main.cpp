//   Author:   <Oceane Andreis>
//   Recitation:   <110  and Monika>
//
//   Assignment   8
//   Problem   <Main>

//Comments below

#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include "FoodLog.h"
#include "Chart.h"

using namespace std;

//In my main I take in the input from the user and then use that in my two classes.
//I used vectors instead of arrays since I don't know how many input the user will give me
//I have many cout statement to make my whole code more organized and more appealing
//I call each of my methods and I pass in text files and inputs
int main()
{
    vector<string> foodie;
    string foods;

    cout<<"Hi welcome to your food log! I'm here to help you get your life together"<<endl<<"or at least your food habit!"<<endl;
    cout<<"Please enter all the simple food you've eaten today(In lower case)."<<endl<< "For example if you've eaten linguini just enter pasta"<<endl;
    cout<<"Once you are done entering please enter stop:"<<endl<<endl;
    cin >> foods;
    while(foods!="stop")
    {
        foodie.push_back(foods);
        cin>>foods;

    }
    FoodLog food(foodie);
    int carb = food.CarbCheck("carb.txt", foodie); //
    int fat= food.FatCheck("fat.txt",foodie); //
    int sweet= food.SweetCheck("sweet.txt",foodie); //
    int protein= food.ProteinCheck("protein.txt",foodie); //
    int vegfruit= food.VeggieFruitsCheck("vegetablefruit.txt",foodie);


    cout<<"Amount of carbs:"<<endl;
    cout<<carb<<endl;
    cout<<"Amount of fats:"<<endl;
    cout<<fat<<endl;
    cout<<"Amount of sweets:"<<endl;
    cout<<sweet<<endl;
    cout<<"Amount of proteins:"<<endl;
    cout<<protein<<endl;
    cout<<"Amount of veggies and fruits:"<<endl;
    cout<<vegfruit<<endl<<endl;

    cout<<endl<<"Ratio: "<<endl;
    Chart mychart;

    mychart.setholder1(carb);
    mychart.setholder2(fat);
    mychart.setholder3(sweet);
    mychart.setholder4(protein);
    mychart.setholder5(vegfruit);

    mychart.Ratio(foodie);
    cout<<endl;
    mychart.Draw();
    mychart.Inspiration("Inspiration.txt");

}

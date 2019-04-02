//   Author:   <Oceane Andreis>
//   Recitation:   <110  and Monika>
//
//   Assignment   8
//   Problem   <Chart.cpp>

//Comments below
//4 for loop, 2 if, 1 else, 2 while, 1 file io

#include "Chart.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;
//In my constructor I initialize my holders to zero and my counter to zero.

Chart::Chart()
{
    holder1=0.0;
    holder2=0.0;
    holder3=0.0;
    holder4=0.0;
    holder5=0.0;

    counter=0;
}

Chart::~Chart()
{
    //dtor
}
//My set function sets my holder1 to carbcount. In my main I pass carbcount(int carb) into the parameter of this setter method
// and then equal my holder1 to the parameter value being passed in which is my carbcount.
void Chart::setholder1(float something)
{
    holder1= something;
}
//My set function sets my holder2 to fatcount. In my main I pass fatcount(int fat) into the parameter of this setter method
// and then equal my holder2 to the parameter value being passed in which is my fatcount.
void Chart::setholder2(float something2)
{
    holder2= something2;
}
//My set function sets my holder3 to sweetcount. In my main I pass sweetcount(int sweet) into the parameter of this setter method
// and then equal my holder3 to the parameter value being passed in which is my sweetcount.
void Chart::setholder3(float something3)
{
    holder3= something3;
}
//My set function sets my holder4 to proteincount. In my main I pass proteincount(int protein) into the parameter of this setter method
// and then equal my holder4 to the parameter value being passed in which is my proteincount.
void Chart::setholder4(float something4)
{
    holder4= something4;
}
//My set function sets my holder5 to vegfcount. In my main I pass vegfcount(int veggiefruit) into the parameter of this setter method
// and then equal my holder5 to the parameter value being passed in which is my vegfcount.
void Chart::setholder5(float something6)
{
    holder5= something6;
}
//In my Draw method I have a bunch of cout to box my chart
//Then I want to print the amount of star the same amount as my carbcount=holder1.
//So for that I need a for loop to continue printing stars and I need it to print things until we reach the carbcount
//Which is what the counter do, it starts at 0 and will increase of 1 until we reach the holder1.
//It will stop printing stars after 4 if for example we have 4 carbscount(so 4 in our holder1)
//This principle work the same for fatcount=holder2 and the other three holders.
int Chart::Draw()
{
    cout<<"_______________________________________"<<endl;
    cout << endl << "|    BAR CHART                         |"<<endl;


    cout << "  Carb: ";
    for ( counter = 0; counter < holder1; counter++)
    {
            cout << '*';
    }
    cout<<endl<<"|                                      |";

    cout << endl << "  Fat: ";
    for ( counter = 0; counter < holder2; counter++)
    {
            cout << '*';
    }
    cout<<endl<<"|                                      |";
    cout << endl << "  Sweet: ";
    for ( counter = 0; counter < holder3; counter++)
    {
            cout << '*';
    }
     cout<<endl<<"|                                      |";

    cout << endl << "  Protein: ";

    for ( counter = 0; counter < holder4; counter++)
    {
        cout << '*';
    }
    cout<<endl<<"|                                      |"<<endl;
     cout <<"  Vegetables and fruits: ";
    counter=0;
    //Using a while loop to show I could of use a while or for loop in this method
    while ( counter < holder5)
    {
        cout << '*';
        counter++;
    }
    cout<<endl<<"|                                      |"<<endl;
    cout<<"_______________________________________"<<endl;
    return 0;
}

//In the ratio method we have 4 floats variable which will hold how much carbs or fat or sweet or protein or veggie/fruit we have
//in the list of the user input
//to get the ratio we divide the holder1(carbcount) by the size of the input list
//For example if you've only entered carbs as input it should return 100%
//the foodratio is then only decimal and less than 1 so I timed it by 100 to make it look like a percentage.
float Chart:: Ratio(vector<string> foodie5)
{
    float foodratio= holder1/foodie5.size();
    float foodratio2=holder2/foodie5.size();
    float foodratio3=holder3/foodie5.size();
    float foodratio4=holder4/foodie5.size();
    float foodratio5=holder5/foodie5.size();

    cout<<"You've had "<<foodratio*100<<"%"<<" of carbs today"<<endl;
    cout<<"You've had "<<foodratio2*100<<"%"<<" of fats today"<<endl;
    cout<<"You've had "<<foodratio3*100<<"%"<<" of sweets today"<<endl;
    cout<<"You've had "<<foodratio4*100<<"%"<<" of proteins today"<<endl;
    cout<<"You've had "<<foodratio5*100<<"%"<<" of vegetable and fruits today"<<endl;

}
//My method Inspiration is a method which checks if the user input has too many carbs, sweet, and fats compared to our protein.
//In an if statement if the carb number is bigger than the protein/veggie/fruit number than it should output suggestion for a workout.
//it displays three examples of what people can do. Then there is an else statement(which means you've had more protein/veggie/fruits than
//carbs,fats, and sweet which will cout to treat yourself
void Chart:: Inspiration(string filename)
{
    if(holder1>holder4  || holder2>holder4 ||holder3>holder4 ||holder1>holder5  || holder2>holder5 ||holder3>holder5)
    {

        cout<<"Since you've been unhealthy today you should do some type of workout so here are some examples:"<<endl;
        ifstream file5;
        file5.open(filename);
        string drawing;

        if(file5.is_open())
        {
            while(!file5.eof())
            {
                getline(file5,drawing);
                cout<<drawing<< '\n';

            }

        }

    }

    else
    {
        cout<<"Don't forget to treat yourself once in a while";
    }

}



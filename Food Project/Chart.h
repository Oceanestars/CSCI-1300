//   Author:   <Oceane Andreis>
//   Recitation:   <110  and Monika>
//
//   Assignment   8
//   Problem   <Chart.h>

//Comments below

#ifndef CHART_H
#define CHART_H
#include<vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Chart
{
    public:
        Chart(); // Constructor which initialize my holders
        ~Chart(); //Destructor

        float Ratio(vector<string> foodie); //Pass in the input array into this method because I want to use the size of the vector
        //I want to pass in the amount of input to find the ratio
        int Draw(); // This function draw the bar chart
        void setholder1(float something); //This setter function helps me set my holder1 to carbcount(since carbcount=something)
        void setholder2(float something2);//This setter function helps me set my holder2 to fatcount(since fatcount=something2)
        void setholder3(float something3);//This setter function helps me set my holder3 to sweetcount(since sweetcount=something3)
        void setholder4(float something4);//This setter function helps me set my holder4 to proteincount(since proteincount=something4)
        void setholder5(float something5);//This setter function helps me set my holder5 to vegfcount(since vegfcount=something5)

        void Inspiration(string filename);// This function decides whether the user needs to workout or no

        float holder1; // This holds my carbcount
        float holder2; // This holds my fatcount
        float holder3; // This holds my sweetcount
        float holder4; // This holds my proteincount
        float holder5; // This holds my  vegfcount
        float counter; // This is a counter to print my stars in the draw method


};

#endif // CHART_H

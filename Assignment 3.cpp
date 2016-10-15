// Assignment 3 written by Kenneth Popp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
   //min and max testing constants
   const int MAX_GRAMS = 1000;
   const int MIN_GRAMS = 0;
   const int MAX_SERV_SIZE = 10;
   const int MIN_SERV_SIZE = 0;

   // food #1 constants
   const string FOOD_1_NAME = "Tortilla";
   const int FOOD_1_CALORIES_P100G = 312;        // in calories
   const double FOOD_1_PROTEIN_P100G = 8.3;      // in grams
   const double FOOD_1_SUGAR_P100G = 1.9;        // in grams
   const double FOOD_1_TOTAL_FAT_P100G = 7.8;    // in grams
   const double FOOD_1_DIETARY_FIBER_P100G = 3.1;// in grams

   // food #2 constants
   const string FOOD_2_NAME = "Tomato";
   const int FOOD_2_CALORIES_P100G = 18;        // in calories
   const double FOOD_2_PROTEIN_P100G = .9;   // in grams
   const double FOOD_2_SUGAR_P100G = 2.6;        // in grams
   const double FOOD_2_TOTAL_FAT_P100G = .2;    // in grams
   const double FOOD_2_DIETARY_FIBER_P100G = 1.2;// in grams

   // food #3 constants
   const string FOOD_3_NAME = "Mexican blend cheese";
   const int FOOD_3_CALORIES_P100G = 282;       // in calories
   const double FOOD_3_PROTEIN_P100G = 24.7;    // in grams
   const double FOOD_3_SUGAR_P100G = .6;        // in grams
   const double FOOD_3_TOTAL_FAT_P100G = 19.4;    // in grams
   const double FOOD_3_DIETARY_FIBER_P100G = 0;// in grams

   // food 4 constants
   const string FOOD_4_NAME = "Enchilada sauce";
   const int FOOD_4_CALORIES_P100G = 40;        // in calories
   const double FOOD_4_PROTEIN_P100G = 1.7;      // in grams
   const double FOOD_4_SUGAR_P100G = 6.7;        // in grams
   const double FOOD_4_TOTAL_FAT_P100G = 0;    // in grams
   const double FOOD_4_DIETARY_FIBER_P100G = 1.7;// in grams

   // food 5 constants
   const string FOOD_5_NAME = "Canned black olives";
   const int FOOD_5_CALORIES_P100G = 81;        // in calories
   const double FOOD_5_PROTEIN_P100G = 1.0;      // in grams
   const double FOOD_5_SUGAR_P100G = 0;        // in grams
   const double FOOD_5_TOTAL_FAT_P100G = 6.9;    // in grams
   const double FOOD_5_DIETARY_FIBER_P100G = 2.5;// in grams

   // food 6 constants
   const string FOOD_6_NAME = "Chicken fajita strips";
   const int FOOD_6_CALORIES_P100G = 135;        // in calories
   const double FOOD_6_PROTEIN_P100G = 18.6;      // in grams
   const double FOOD_6_SUGAR_P100G = 0;        // in grams
   const double FOOD_6_TOTAL_FAT_P100G = 5.7;    // in grams
   const double FOOD_6_DIETARY_FIBER_P100G = 0;// in grams

   string recipeName, userInputStr;
   int userInputInt, userServSize;
   double totalProtein, totalCals, totalSugar, totalFat, totalFiber;

   // initialize accumulator variables
   totalFiber = 0.;
   totalCals = 0;
   totalProtein = 0;
   totalSugar = 0;
   totalFat = 0;
   userServSize = 0;

   // print menu
   cout << "---------- List of Possible Ingredients ---------" << endl;
   cout << "  Food #1: " << FOOD_1_NAME << endl;
   cout << "  Food #2: " << FOOD_2_NAME << endl;
   cout << "  Food #3: " << FOOD_3_NAME << endl;
   cout << "  Food #4: " << FOOD_4_NAME << endl;
   cout << "  Food #5: " << FOOD_5_NAME << endl;
   cout << "  Food #6: " << FOOD_6_NAME << endl << endl;

   // name of recipe
   cout << "What are you calling this recipe? ";
   getline(cin, recipeName);

   // number of servings
   cout << "How many servings? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   // test serving size to ensure it is between 1 and 10
   if (userInputInt > MIN_SERV_SIZE && userInputInt <= MAX_SERV_SIZE)
   {
      userServSize = userInputInt;

      // food #1 ---------------------------------------------------------
      cout << "\nHow many grams of " << FOOD_1_NAME << "? ";
      getline(cin, userInputStr);
      istringstream(userInputStr) >> userInputInt;

      if (userInputInt >= MIN_GRAMS && userInputInt <= MAX_GRAMS)
      {
         // update accumulators if user input is valid
         totalCals += userInputInt * (FOOD_1_CALORIES_P100G / 100.);
         totalFiber += userInputInt * (FOOD_1_DIETARY_FIBER_P100G / 100.);
         totalProtein += userInputInt * (FOOD_1_PROTEIN_P100G / 100.);
         totalSugar += userInputInt * (FOOD_1_SUGAR_P100G / 100.);
         totalFat += userInputInt * (FOOD_1_TOTAL_FAT_P100G / 100.);
      }
      else
      {
         cout << "Please enter a gram amount between 0 and 1000." << endl;
         return 0;
      }

      // food #2 ---------------------------------------------------------
      cout << "How many grams of " << FOOD_2_NAME << "? ";
      getline(cin, userInputStr);
      istringstream(userInputStr) >> userInputInt;

      if (userInputInt >= MIN_GRAMS && userInputInt <= MAX_GRAMS)
      {
         // update accumulators if user input is valid
         totalCals += userInputInt * (FOOD_2_CALORIES_P100G / 100.);
         totalFiber += userInputInt * (FOOD_2_DIETARY_FIBER_P100G / 100.);
         totalProtein += userInputInt * (FOOD_2_PROTEIN_P100G / 100.);
         totalSugar += userInputInt * (FOOD_2_SUGAR_P100G / 100.);
         totalFat += userInputInt * (FOOD_2_TOTAL_FAT_P100G / 100.);
      }
      else
      {
         cout << "Please enter a gram amount between 0 and 1000." << endl;
         return 0;
      }

      // food #3 ---------------------------------------------------------
      cout << "How many grams of " << FOOD_3_NAME << "? ";
      getline(cin, userInputStr);
      istringstream(userInputStr) >> userInputInt;

      if (userInputInt >= MIN_GRAMS && userInputInt <= MAX_GRAMS)
      {
         // update accumulators if user input is valid
         totalCals += userInputInt * (FOOD_3_CALORIES_P100G / 100.);
         totalFiber += userInputInt * (FOOD_3_DIETARY_FIBER_P100G / 100.);
         totalProtein += userInputInt * (FOOD_3_PROTEIN_P100G / 100.);
         totalSugar += userInputInt * (FOOD_3_SUGAR_P100G / 100.);
         totalFat += userInputInt * (FOOD_3_TOTAL_FAT_P100G / 100.);
      }
      else
      {
         cout << "Please enter a gram amount between 0 and 1000." << endl;
         return 0;
      }

      // food #4
      cout << "How many grams of " << FOOD_4_NAME << "? ";
      getline(cin, userInputStr);
      istringstream(userInputStr) >> userInputInt;

      if (userInputInt >= MIN_GRAMS && userInputInt <= MAX_GRAMS)
      {
         // update accumulators if user input is valid
         totalCals += userInputInt * (FOOD_4_CALORIES_P100G / 100.);
         totalFiber += userInputInt * (FOOD_4_DIETARY_FIBER_P100G / 100.);
         totalProtein += userInputInt * (FOOD_4_PROTEIN_P100G / 100.);
         totalSugar += userInputInt * (FOOD_4_SUGAR_P100G / 100.);
         totalFat += userInputInt * (FOOD_4_TOTAL_FAT_P100G / 100.);
      }
      else
      {
         cout << "Please enter a gram amount between 0 and 1000." << endl;
         return 0;
      }

      // food #5
      cout << "How many grams of " << FOOD_5_NAME << "? ";
      getline(cin, userInputStr);
      istringstream(userInputStr) >> userInputInt;

      if (userInputInt >= MIN_GRAMS && userInputInt <= MAX_GRAMS)
      {
         // update accumulators if user input is valid
         totalCals += userInputInt * (FOOD_5_CALORIES_P100G / 100.);
         totalFiber += userInputInt * (FOOD_5_DIETARY_FIBER_P100G / 100.);
         totalProtein += userInputInt * (FOOD_5_PROTEIN_P100G / 100.);
         totalSugar += userInputInt * (FOOD_5_SUGAR_P100G / 100.);
         totalFat += userInputInt * (FOOD_5_TOTAL_FAT_P100G / 100.);
      }
      else
      {
         cout << "Please enter a gram amount between 0 and 1000." << endl;
         return 0;
      }

      // food #6
      cout << "How many grams of " << FOOD_6_NAME << "? ";
      getline(cin, userInputStr);
      istringstream(userInputStr) >> userInputInt;

      if (userInputInt >= MIN_GRAMS && userInputInt <= MAX_GRAMS)
      {
         // update accumulators if user input is valid
         totalCals += userInputInt * (FOOD_6_CALORIES_P100G / 100.);
         totalFiber += userInputInt * (FOOD_6_DIETARY_FIBER_P100G / 100.);
         totalProtein += userInputInt * (FOOD_6_PROTEIN_P100G / 100.);
         totalSugar += userInputInt * (FOOD_6_SUGAR_P100G / 100.);
         totalFat += userInputInt * (FOOD_6_TOTAL_FAT_P100G / 100.);
      }
      else
      {
         cout << "Please enter a gram amount between 0 and 1000." << endl;
         return 0;
      }

      // update for serving size
      totalCals = totalCals / double(userServSize);
      totalFiber = totalFiber / double(userServSize);
      totalProtein = totalProtein / double(userServSize);
      totalSugar = totalSugar / double(userServSize);
      totalFat = totalFat / double(userServSize);

      // report results --------------------------------------------------
      cout << "\nNutritional value per serving for " << recipeName;
      cout << "------------" << endl;
      cout << "  Calories: " << totalCals << endl;
      cout << "  Dietary Fiber: " << totalFiber << endl;
      cout << "  Protein: " << totalProtein << endl;
      cout << "  Sugar: " << totalSugar << endl;
      cout << "  Total Fat: " << totalFat << endl;
   }
   else
   {
      cout << "Please enter a serving amount between 1 and 10" << endl;
      return 0;
   }
   return 0;
}

/*******************************RUN-1******************************************

---------- List of Possible Ingredients ---------
Food #1: tortilla
Food #2: tomato
Food #3: mexican blend cheese
Food #4: enchilada sauce
Food #5: canned black olives
Food #6: chicken fajita strips

What are you calling this recipe? enchiladas
How many servings? 5

How many grams of tortilla? 200
How many grams of tomato? 50
How many grams of mexican blend cheese? 80
How many grams of enchilada sauce? 50
How many grams of canned black olives? 30
How many grams of chicken fajita strips? 100

Nutritional value per serving for enchiladas------------
Calories: 207.58
Dietary Fiber: 1.68
Protein: 11.312
Sugar: 1.786
Total Fat: 7.798
Press any key to continue . . .

********************************Run-2******************************************

---------- List of Possible Ingredients ---------
Food #1: tortilla
Food #2: tomato
Food #3: mexican blend cheese
Food #4: enchilada sauce
Food #5: canned black olives
Food #6: chicken fajita strips

What are you calling this recipe? error test
How many servings? 15
Please enter a serving amount between 1 and 10
Press any key to continue . . .

********************************Run-3******************************************

---------- List of Possible Ingredients ---------
Food #1: tortilla
Food #2: tomato
Food #3: mexican blend cheese
Food #4: enchilada sauce
Food #5: canned black olives
Food #6: chicken fajita strips

What are you calling this recipe? error test 2
How many servings? 5

How many grams of tortilla? 2000
Please enter a gram amount between 0 and 1000.
Press any key to continue . . .

********************************Run-4******************************************

---------- List of Possible Ingredients ---------
Food #1: tortilla
Food #2: tomato
Food #3: mexican blend cheese
Food #4: enchilada sauce
Food #5: canned black olives
Food #6: chicken fajita strips

What are you calling this recipe? Chicken Quesadilla
How many servings? 4

How many grams of tortilla? 300
How many grams of tomato? 0
How many grams of mexican blend cheese? 200
How many grams of enchilada sauce? 0
How many grams of canned black olives? 80
How many grams of chicken fajita strips? 200

Nutritional value per serving for Chicken Quesadilla------------
Calories: 458.7
Dietary Fiber: 2.825
Protein: 28.075
Sugar: 1.725
Total Fat: 19.78
Press any key to continue . . .

********************************Run-5******************************************

---------- List of Possible Ingredients ---------
Food #1: tortilla
Food #2: tomato
Food #3: mexican blend cheese
Food #4: enchilada sauce
Food #5: canned black olives
Food #6: chicken fajita strips

What are you calling this recipe? Fajitas
How many servings? 8

How many grams of tortilla? 400
How many grams of tomato? 300
How many grams of mexican blend cheese? 300
How many grams of enchilada sauce? 0
How many grams of canned black olives? 200
How many grams of chicken fajita strips? 300

Nutritional value per serving for Fajitas------------
Calories: 339.375
Dietary Fiber: 2.625
Protein: 20.975
Sugar: 2.15
Total Fat: 15.1125
Press any key to continue . . .

******************************************************************************/

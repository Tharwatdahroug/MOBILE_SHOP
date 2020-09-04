#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class mobile {

public:
   int c[10] = {0},sum = 0,check;


    void choose(){

    startingpoint:
    cout << "\n\t     ============= Welcome in our mobile shop ==============\n";
    cout << "\t     | 1]  VIVO V9                                         |\n";
    cout << "\t     | 2]  iPhone 5                                        |\n";
    cout << "\t     | 3]  iPhone SE                                       |\n";
    cout << "\t     | 4]  iPhone 8Plus                                    |\n";
    cout << "\t     | 5]  Huawei                                          |\n";
    cout << "\t     | 6]  Vodafone smart                                  |\n";
    cout << "\t     | 7]  Samsung Galaxy s9                               |\n";
    cout << "\t     | 8]  Samsung Galaxy s9+                              |\n";
    cout << "\t     | 9]  Samsung Galaxy s3                               |\n";
    cout << "\t     | 10] Samsung Galaxy J2 Pro                           |\n";
    cout << "\t     | 11] Display noms of mobiles that has already sold   |\n";
    cout << "\t     | 12] To started count and buying operation from first|\n";
    cout << "\t     | 13] Exit                                            |\n";
    cout << "\t     ======================================================= \n";
    int selection;
    cout << "\n\t\t\tEnter valid selection number : ";
    cin >> selection;
    switch (selection){
case 1 :
    cout << "\nDo you want to buy it press 1 to start agin press 0 : ";
    cin >> check;
    if (check == 1){
    if (c[0] == 0){
    cout << "\n************************* The selected mobile VIVO V9 ************************* \n";
    cout << "\t\t << ok ! congratulation for your mobile phone >>\n";c[0]++;
    cout << "\n******************************************************************************* \n";
                        cout << endl;system("pause");cout << endl;goto startingpoint;

    }
    else
    cout << "\n******************************************************************************* \n";
    cout << "\t\t << sorry ! The mobile has been sold >> \n";
    cout << "\n******************************************************************************* \n";
                        cout << endl;system("pause");cout << endl;goto startingpoint;}
                        cout << endl;system("pause");cout << endl;goto startingpoint;
case 2 :
    cout << "\nDo you want to buy it press 1 to start agin press 0  : ";
    cin >> check;
    if (check == 1){
    if (c[1] == 0){
    cout << "\n************************* The selected mobile iPhone 5 ************************ \n";
    cout << "\t\t << ok ! congratulation for your mobile phone >>\n";c[1]++;
    cout << "\n******************************************************************************* \n";

                        cout << endl;system("pause");cout << endl;goto startingpoint;
    }

    else
    cout << "\n******************************************************************************* \n";
    cout << "\t\t << sorry ! The mobile has been sold >> \n";
    cout << "\n******************************************************************************* \n";
                        cout << endl;system("pause");cout << endl;goto startingpoint;}
                        cout << endl;system("pause");cout << endl;goto startingpoint;

case 3 :
    cout << "\nDo you want to buy it press 1 to start agin press 0 : ";
    cin >> check;
    if (check == 1){
    if (c[2] == 0){
    cout << "\n*********************** The selected mobile iPhone SE ************************* \n";
    cout << "\t\t << ok ! congratulation for your mobile phone >>\n";c[2]++;
    cout << "\n******************************************************************************* \n";
                        cout << endl;system("pause");cout << endl;goto startingpoint;
    }
    else
    cout << "\n******************************************************************************* \n";
    cout << "\t\t << sorry ! The mobile has been sold >> \n";
    cout << "\n******************************************************************************* \n";

                        cout << endl;system("pause");cout << endl;goto startingpoint;}
                        cout << endl;system("pause");cout << endl;goto startingpoint;

case 4 :
    cout << "\nDo you want to buy it press 1 to start agin press 0 : ";
    cin >> check;
    if (check == 1){
    if (c[3] == 0){
    cout << "\n************************ The selected mobile iPhone 8Plus ********************* \n";
    cout << "\t\t << ok ! congratulation for your mobile phone >>\n";c[3]++;
    cout << "\n******************************************************************************* \n";

                        cout << endl;system("pause");cout << endl;goto startingpoint;
    }
    else
        cout << "\n******************************************************************************* \n";
        cout << "\t\t << sorry ! The mobile has been sold >>\n";
        cout << "\n******************************************************************************* \n";
                        cout << endl;system("pause");cout << endl;goto startingpoint;}
                        cout << endl;system("pause");cout << endl;goto startingpoint;
case 5 :
    cout << "\nDo you want to buy it press 1 to start agin press 0 : ";
    cin >> check;
    if (check == 1){
    if (c[4] == 0){
    cout << "\n******************** The selected mobile Huawei ******************************* \n";
    cout << "\t\t << ok ! congratulation for your mobile phone >>\n";c[4]++;
    cout << "\n******************************************************************************* \n";

                        cout << endl;system("pause");cout << endl;goto startingpoint;
    }
    else
        cout << "\n******************************************************************************* \n";
        cout << "\t\t << sorry ! The mobile has been sold >>\n";
        cout << "\n******************************************************************************* \n";
                        cout << endl;system("pause");cout << endl;goto startingpoint;}
                        cout << endl;system("pause");cout << endl;goto startingpoint;
case 6 :
    cout << "\nDo you want to buy it press 1 to start agin press 0 : ";
    cin >> check;
    if (check == 1){
    if (c[5] == 0){
    cout << "\n************************* The selected mobile Vodafone smart ****************** \n";
    cout << "\t\t << ok ! congratulation for your mobile phone >>\n";c[5]++;
    cout << "\n******************************************************************************* \n";

                        cout << endl;system("pause");cout << endl;goto startingpoint;
    }
    else
        cout << "\n******************************************************************************* \n";
        cout << "\t\t << sorry ! The mobile has been sold >>\n";
        cout << "\n******************************************************************************* \n";
                        cout << endl;system("pause");cout << endl;goto startingpoint;}
                        cout << endl;system("pause");cout << endl;goto startingpoint;

case 7 :
    cout << "\nDo you want to buy it press 1 to start agin press 0 : ";
    cin >> check;
    if (check == 1){
    if (c[6] == 0){
    cout << "\n****************** The selected mobile Samsung Galaxy s9  ********************* \n";
    cout << "\t\t << ok ! congratulation for your mobile phone >>\n";c[6]++;
    cout << "\n******************************************************************************* \n";

                        cout << endl;system("pause");cout << endl;goto startingpoint;}


    else
    cout << "\n******************************************************************************* \n";
    cout << "\t\t << sorry ! The mobile has been sold >>\n";
    cout << "\n******************************************************************************* \n";
                        cout << endl;system("pause");cout << endl;goto startingpoint;}
                        cout << endl;system("pause");cout << endl;goto startingpoint;
case 8 :
    cout << "\nDo you want to buy it press 1 to start agin press 0 : ";
    cin >> check;
    if (check == 1){
    if (c[7] == 0){
    cout << "\n******************* The selected mobile Samsung Galaxy s9+  ******************* \n";
    cout << "\t\t << ok ! congratulation for your mobile phone >>\n";c[7]++;
    cout << "\n******************************************************************************* \n";

                        cout << endl;system("pause");cout << endl;goto startingpoint;
    }
    else
    cout << "\n******************************************************************************* \n";
    cout << "\t\t << sorry ! The mobile has been sold >>\n";
    cout << "\n******************************************************************************* \n";
                        cout << endl;system("pause");cout << endl;goto startingpoint;}
                        cout << endl;system("pause");cout << endl;goto startingpoint;
case 9 :
    cout << "\nDo you want to buy it press 1 to start agin press 0 : ";
    cin >> check;
    if (check == 1){
    if (c[8] == 0){
    cout << "\n******************* The selected mobile Samsung Galaxy s3  ******************** \n";
    cout << "\t\t << ok ! congratulation for your mobile phone >>\n";c[8]++;
    cout << "\n******************************************************************************* \n";
                        cout << endl;system("pause");cout << endl;goto startingpoint;
    }
    else
        cout << "\n******************************************************************************* \n";
        cout << "\t\t << sorry ! The mobile has been sold >>\n";
        cout << "\n******************************************************************************* \n";
                        cout << endl;system("pause");cout << endl;goto startingpoint;}
                        cout << endl;system("pause");cout << endl;goto startingpoint;
case 10 :
    cout << "\nDo you want to buy it press 1 to start agin press 0 : ";
    cin >> check;
    if (check == 1){
    if (c[9] == 0){
    cout << "\n***************** The selected mobile Samsung Galaxy J2 Pro  ****************** \n";
    cout << "\t\t << ok ! congratulation for your mobile phone >>\n";c[9]++;
    cout << "\n******************************************************************************* \n";
                        cout << endl;system("pause");cout << endl;goto startingpoint;}


    else
        cout << "\n******************************************************************************* \n";
        cout << "\t\t << sorry ! The mobile has been sold >>\n";
        cout << "\n******************************************************************************* \n";
                        cout << endl;system("pause");cout << endl;goto startingpoint;}
                        cout << endl;system("pause");cout << endl;goto startingpoint;

case 11:
        cout << "\n******************************************************************************* \n";
        cout << "\tThe sum of total numbers of mobiles that has been sold : " <<c[0]+c[1]+c[2]+c[3]+c[4]+c[5]+c[6]+c[7]+c[8]+c[9];
        cout << "\n\n******************************************************************************* \n";
                    cout << endl;system("pause");cout << endl;goto startingpoint;



case 12:
        for (int i = 0; i < 9; i++){c[i] = 0;}
        cout << "\n******************************************************************************* \n";
        cout << "\t\t<< The whole operations is started from first >> " ;
        cout << "\n\n******************************************************************************* \n";
                    cout << endl;system("pause");cout << endl;goto startingpoint;



case 13 :break;

default :
     cout << "\n******************************************************************************* \n";
     cout << "\t\t\t<< invalid choice ! >>\n";
     cout << "\n******************************************************************************* \n";
     cout << endl;system("pause");cout << endl;goto startingpoint;

     }
   }
};

int main()
{
    mobile m;
    m.choose();
    return 0;
}

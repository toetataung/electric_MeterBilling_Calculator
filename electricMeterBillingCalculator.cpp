#include <iostream>
using namespace std;

int main()
{
    int unit;
    int total;


    cout << "Electric Meter Billing Calculator (residential use) \n";

    cout << "\n";

    cout << "Enter Your Meter Unit - ";

    cin >> unit;

    if (unit <= 30) {
        total = unit*35;
    } else if (unit >30 && unit <= 50) {
        total = (30*35) + (unit-30)*50;
    } else if (unit > 50 && unit <= 75){
        total = (30*35) + (20*50) + (unit - 50)*70;
    } else if (unit > 75 && unit <= 100) {
        total = (30*35) + (20*50) + (25*70) + (unit - 75)*90;
    } else if (unit > 100 && unit <= 150){
        total = (30*35) + (20*50) + (25*70) + (25*90) + (unit -100)*110;
    } else if (unit > 150 && unit <= 200) {
         total = (30*35) + (20*50) + (25*70) + (25*90) + (50*110) + (unit - 150)*120;
    } else if (unit > 200){
        total = (30*35) + (20*50) + (25*70) + (25*90) + (50*110) + (50*120) + (unit-200)*125;
    }
    cout << "\n";
    cout << "_______________\n\n";
    cout << "Price " << total;
    cout << "\n_______________\n";
    cout << "\n";
}

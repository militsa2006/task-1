#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
 int times = 0;
 int minrange = 0;
 int maxrange = 0;
 cout << " Enter min limit for number range ";
 cin >> minrange;
 cout << " Enter max limit for number range ";
 cin >> maxrange;
 while( minrange <= 0 || maxrange <= 0 || minrange > maxrange ){
 cout << " Invalid data ";
 cout << " Enter min limit for number range ";
 cin >> minrange;
 cout << " Enter max limit for number range ";
 cin >> maxrange;

 }
 int compnum = rand() % (maxrange - minrange + 1) + minrange;
 cout << " Guess my number game ";
 int mynum = 0;
 while (mynum != compnum) {
    cout << " Enter your number between " << minrange << " and " << maxrange;
    cin >> mynum;

    times++;
    if(mynum == 0){
        break;
    }
    if (mynum > compnum) {
        cout << " Too high! ";
    }
    else if  (mynum < compnum) {
        cout << " Too low! ";
    }
    else if (mynum == compnum) {
        cout << " Correct. You win! You guessed the number with " << times << " tries! ";
    }
 }
}

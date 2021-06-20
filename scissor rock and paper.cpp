#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    int compnum = rand() % 3;
    int usernum;
    cout << "scissor (0), rock (1), paper (2) ";
    cin >> usernum;
    int scissor = 0;
    int rock = 1;
    int paper = 2;
    if(compnum == scissor){
        cout << " Computer chose scissor ";
    }
    else if(compnum == rock){
        cout << " Computer chose rock ";
    }
    else(compnum == paper){
        cout << " Computer chose paper ";
    }
    if(usernum == scissor){
        cout << " You chose scissor ";
    }
    else if(usernum == rock){
        cout << " You chose rock ";
    }
    else(usernum == paper){
        cout << " You chose paper ";
    }
    if(compnum == usernum){
        cout << " Draw ";}
        else if((usernum == scissor and compnum == paper)
            or (usernum == rock and compnum == scissor)
        or (usernum == paper and compnum == rock)){
        cout << " You win! ";}
        else{
            cout << "You loose!";
        }



}

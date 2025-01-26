#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));

    int RandomNumber = rand() % 10 + 1;
    int GuessNumber , Count = 0 ;
     do{
        cout << "Guess the number : ";
        cin >> GuessNumber;
        Count ++;
        if (GuessNumber > RandomNumber)  cout << "Too High" << endl;
        else if (GuessNumber < RandomNumber)  cout << "Too low" << endl;
        else cout << "You guessed the correct Number in " << Count << " attemps" << endl;

     }
     while(GuessNumber != RandomNumber);
return 0;
     
    

}
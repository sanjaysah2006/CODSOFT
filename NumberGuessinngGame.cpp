#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int l,h;
    cout << "Enter Range for guessing number (low high): ";
    cin>>l>>h;
    int RandomNumber = rand() % (h - l + 1) + l;
    cout << "Guess the number between " << l << " and " << h << ": \n";
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

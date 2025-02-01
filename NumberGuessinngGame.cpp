#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int l,h;
    do {
        cout << "Enter Range for guessing number (low high): ";
        cin >> l >> h;
        if (h < l) cout << "Enter Correct Order: low should be less than high." << endl;
    } while (h < l);
    int RandomNumber = rand() % (h - l + 1) + l;
    cout << "Guess the number between " << l << " and " << h << ": \n";
    int GuessNumber , Count = 0 ;
     do{
        cout << "Guess the number : ";
        cin >> GuessNumber;
        Count ++;
         if (GuessNumber > h || GuessNumber < l) {
            cout << "Enter a number according to the range [" << l << ", " << h << "]." << endl;
        }
        else {
            if (GuessNumber > RandomNumber) cout << "Too High!" << endl;
            else if (GuessNumber < RandomNumber) cout << "Too Low!" << endl;
            else cout << "You guessed the correct number in " << Count << " attempts!" << endl;
        }
     }
     while(GuessNumber != RandomNumber);
return 0;
}

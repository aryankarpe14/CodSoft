#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
    srand(time(0));
    int secret_num= 1+ (rand() % 100);
    int guessed_num , attempt=0;
    
    do
    {
        cout<<"Enter the number:";
        cin>>guessed_num;
        attempt++;
        if (guessed_num == secret_num)
        {
            cout<<"Congratulatons! You Guessed Correct number in "<<attempt<<" attempt"<<endl;
        }
        else if(guessed_num < secret_num)
        {
            cout<<"Too low number entered"<<endl;
        }
        else if (guessed_num > secret_num)
        {
            cout<<"Too large number entered"<<endl;
        }
    } while (guessed_num!=secret_num);
}
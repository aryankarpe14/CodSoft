#include<iostream>
using namespace std;

double first,second,result;
char operation;


void input();
double calculation();
void output();

void input(){
    cout<<"Enter the first number:";
    cin>>first;
    cout<<"Enter the operator(+,-,*,/):";
    cin>>operation;
    cout<<"Enter the second number:";
    cin>>second;
}

double calculation(){
    int flag=0;
    do{
        if(flag==1){
            input();
        }
        switch(operation){
            case '+':
                result=first+second;
                flag=0;
                break;
            case '-':
                result=first-second;
                flag=0;
                break;
            case '*':
                result=first*second;
                flag=0;
                break;
            case '/':
                result=first/second;
                flag=0;
                break;
            default:
                cout<<"You Entered Wrong operation"<<endl;
                cout<<"Please try again"<<endl;
                flag=1;
                break;
        }
    }while(flag==1);
    return result;
}

void output(){
    cout<<"Result is:"<<calculation()<<endl;
}

int main(){
    int choice;
    do{
        input();
        output();
        cout<<"1:Repeat, 2:Exit"<<endl;
        cin>>choice;
    }while(choice!=2);
    return 0;
}
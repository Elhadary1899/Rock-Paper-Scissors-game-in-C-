#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    bool cont = true;

    while(cont){

            char contin;
            int maxx,random;
            maxx=3;
            srand(time(0));
            random= (rand()%maxx);
            string possibilities[3] ={"Rock","Paper","Scissors"};
            string ai_choice;
            string user_choice;

            ai_choice = possibilities[random];
            cout<<"Enter your choice:"<<endl;
            cin>>user_choice;

            if(user_choice=="Rock" && ai_choice=="Scissors"){
                cout<<"The ai chose "<<ai_choice<<endl<<"You win!"<<endl;
            } else if(user_choice=="Rock" && ai_choice=="Rock"){
                cout<<"The ai chose "<<ai_choice<<endl<<"That's a draw! Try again."<<endl;
            } else if(user_choice=="Paper" && ai_choice=="Rock"){
                cout<<"The ai chose "<<ai_choice<<endl<<"You win!"<<endl;
            } else if(user_choice=="Paper" && ai_choice=="Paper"){
                cout<<"The ai chose "<<ai_choice<<endl<<"That's a draw! Try again."<<endl;
            } else if(user_choice=="Scissors" && ai_choice=="Paper"){
                cout<<"The ai chose "<<ai_choice<<endl<<"You win!"<<endl;
            } else if(user_choice=="Scissors" && ai_choice=="Scissors"){
                cout<<"The ai chose "<<ai_choice<<endl<<"That's a draw! Try again."<<endl;
            } else{
                cout<<"The ai chose "<<ai_choice<<endl<<"You loose :("<<endl<<"Try again."<<endl;
            }

            cout<<"Do you want to play again? (type 'y' for Yes or 'n' for No)."<<endl;
            cin>>contin;
            if(contin=='y'){
                cont=true;
            } else if(contin=='n'){
                cont=false;
            } else{
                cout<<"Wrong input!"<<endl;
                cont=false;
            }
    }

    return 0;
}

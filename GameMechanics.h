#ifndef GAMEMECHANICS_H
#define GAMEMECHANICS_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <iostream>


using namespace std;

int N = 3;
string UserInput = "";
string CompInput = "";
int CompNumber = 1;
string WinOrLose = "";


string CalculateComputerMove(){
    CompNumber = rand() % N;
    cout << to_string(CompNumber) << endl;
    if(CompNumber == 0){
        CompInput = "Scissor";
    }else if (CompNumber == 1)
    {
        CompInput = "Paper";
    }
    else{
        CompInput = "Rock";
    }
    return CompInput;
}

string GameMechanism(string ComputerMove, string UserMove){
    if (UserMove == "Scissor"){
        if (ComputerMove == "Rock")
        {
            return "lose";
        }
        else if(ComputerMove == "Paper"){
            return "win";
        }
        else{
            return "draw";
        }

    }
    else if (UserMove == "Paper"){
        if (ComputerMove == "Scissor")
        {
            return "lose";
        }
        else if(ComputerMove == "Rock"){
            return "win";
        }
        else{
            return "draw";
        }

    }
    else{
        if (ComputerMove == "Paper")
        {
            return "lose";
        }
        else if(ComputerMove == "Scissor"){
            return "win";
        }
        else{
            return "draw";
        }
    }
}


#endif // GAMEMECHANICS_H



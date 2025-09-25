#include <iostream>

using namespace std;

bool isCorrect(char userAnswer, char correctAnswer){
    if (userAnswer==correctAnswer)
    {
         return true;
    }
    else
    {
        return false;
    }
    
}

int questionScore(bool correct) {
    if (correct) 
    {
        return 10;
    }
    else
    {
        return 0;
    }
}

void playQuiz(){
    int valueUser1;
    bool resultOne = isCorrect('a','a');
    int resultOneScore= questionScore(resultOne);

    int valueUser2;
    bool resultTwo = isCorrect('b','b');
    int resultTwoScore= questionScore(resultTwo);

    int valueUser3;
    bool resultTree= isCorrect('c','c');
    int resultTreeScore= questionScore(resultTree);

    int result;
    result= resultOneScore+resultTwoScore+resultTreeScore;

}

int main(){

    playQuiz();

    return 0;
}
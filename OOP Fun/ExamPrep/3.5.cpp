/*
3.5 An election is contested by five candidates. The candidates are
numbered 1 to 5 and the voting is done by marking the candidate
number on the ballot paper. Write a program to read the ballots
and count the votes cast for each candidate using an array
variable count. In case, a number read is outside the range 1 to
5, the ballot should be considered as a ‘spoilt ballot’, and the
program should also count the number of spoilt ballots.
*/
#include<iostream>
using namespace std;

class VOTING
{
    int ballot;
    int count[6]={0,0,0,0,0,0};
    public:
        void giveVote();
        void voteCount();
        void showResult();
};

void VOTING::giveVote()
{
    while(true)
    {
        cout << "Enter a number (1-5) to vote the candidates : " << endl;
        cin >> ballot;

        string ex;
        cout << "Enter Quit/quit to exit : " << endl;
        cin>>ex;
        voteCount();
        if(ex=="Quit" or ex =="quit")
            break;
    }
}
void VOTING::voteCount()
{
    if(ballot<1 or ballot>5)
    {
        count[0]++;
    }
    else if(ballot==1)
    {
        count[1]++;
    }
    else if(ballot == 2)
    {
        count[2]++;
    }
    else if(ballot == 3)
    {
        count[3]++;
    }
    else if(ballot == 4)
    {
        count[4]++;
    }
    else
    {
        count[5]++;
    }

}

void VOTING ::showResult()
{
    cout <<endl << "___________VOTE RESULT ___________" << endl;
    cout << endl << "1st Candidate got =" << count[1] << "votes " << endl;
    cout << endl << "2nd Candidate got =" << count[2] << "votes " << endl;
    cout << endl << "3rd Candidate got =" << count[3] << "votes " << endl;
    cout << endl << "4th Candidate got =" << count[4] << "votes " << endl;
    cout << endl << "5th Candidate got =" << count[5] << "votes " << endl;

    cout << endl << "SPOILT BALLOT  =" << count[0] << endl;
}

int main()
{
    VOTING v1;
    v1.giveVote();
    v1.showResult();
}
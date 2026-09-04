#include <iostream>
using namespace std;
class evm
{
private:
    int voteA = 0, voteB = 0, voteC = 0;
    string name;
    int ID;

public:
    bool Register(){
        int id;
        string nm;
        cout<<"set name:"<<endl;
        cin>>name;
        cout<<"set id:"<<endl;
        cin>>ID;
        cout<<"registed successfully"<<endl;
        cout<<"confirm yoou details"<<endl;
        cout<<"enter name:"<<endl;
        cin>>nm;
        cout<<"enter your ID:"<<endl;
        cin>>id;
        if (name==nm && ID==id)
        {
            cout<<"you successfully eligible for voting"<<endl;
            return true;
        }
        else
        {
            cout<<"details not matched yoy can't vote"<<endl;
            return false;
        }
        
    }
    void candidateA()
    {
        voteA++;
    }
    void candidateB()
    {
        voteB++;
    }
    void candidateC()
    {
        voteC++;
    }
    void voting()
    {
        int choice;
        cout << "cnndidateA" << endl
             << "candidateB" << endl
             << "candidateC" << endl;
        cout << "ENTER YOUR CHOICE:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            candidateA();
            break;
        case 2:
            candidateB();
            break;
        case 3:
            candidateC();
            break;
        default:
            cout << "Invalid vote" << endl;
            break;
        }
    }
    void result()
    {
        cout<<endl;
        cout << "**********RESULT*********" << endl;
        cout << "candidateA:" << voteA << endl;
        cout << "candidateB:" << voteB << endl;
        cout << "candidateC:" << voteC << endl;
        if (voteA > voteB && voteA > voteC)
        {
            cout << "candidateA is win";
        }
        else if (voteB > voteA && voteB > voteC)
        {
            cout << "candidateB is win";
        }
        else if (voteC > voteA && voteC > voteB)
        {
            cout << "candidateC is win";
        }
        else
        {
            cout << "Result is draw";
        }
    }
};
int main()
{
    evm vote;
    int voters;
    cout << "enter total voters:";
    cin >> voters;
    for (int i = 0; i < voters; i++)
    {
        cout << "\n========== VOTER " << i + 1 << " ==========" << endl;
        {
            cout<<"\n";
            vote.voting();
        }
    }
    vote.result();
}

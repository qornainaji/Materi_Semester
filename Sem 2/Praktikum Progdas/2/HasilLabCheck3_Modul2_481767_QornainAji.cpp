#include <iostream>

using namespace std;

int main()
{
    int income;
    cout<<"Loan Applicant Programs \n";
    
    cout<<"How much do your income? "<<"\n 1. Less than $30k"<<"\n 2. Between $30K-$70k"<<"\n 3. More than $70k"<<"\n Choose the number : ";
    cin>>income;

    switch(income)
    {
        case 1:
            int record;
            cout<<"Do you have criminal records? "<<"\n 1. Yes"<<"\n 2. No"<<"\n Choose the number : ";
            cin>>record;
            if(record == 1)
            {
                cout<<"Congratulation, you'll have your loan!";
            }else if(record == 2)
            {
                cout<<"Sorry, you're not allowed to have loan!";
            }else
            {
                cout<<"WRONG Input, Start all over again!";
            }
            break;
        case 2:
            cout<<"How many years does your present job are? "<<"\n 1. < 1 year"<<"\n 2. Between 1-5 years"<<"\n 3. > 5 years"<<"\n Choose the number : ";
            cin>>record;
            if(record == 1)
            {
                cout<<"Sorry, you're not allowed to have loan!";
            }else if (record == 2)
            {
                int credit;
                cout<<"Do you make Credit Card payments? "<<"\n 1. Yes"<<"\n 2. No"<<"\n Choose the number : ";
                cin>>credit;
                if(credit==1)
                {
                    cout<<"Congratulation, you'll have your loan!";
                }else if(credit==2)
                {
                    cout<<"Sorry, you're not allowed to have loan!";
                }else
                {
                    cout<<"WRONG Input, Start all over again!";
                }
            }else if(record == 3) 
            {
                cout<<"Congratulation, you'll have your loan!";
            }else
            {
                cout<<"WRONG Input, Start all over again!";
            }
            break;
        case 3:
            cout<<"Do you have criminal records? "<<"\n 1. Yes"<<"\n 2. No"<<"\n Choose the number : ";
            cin>>record;
            if(record == 1)
            {
                cout<<"Sorry, you're not allowed to have loan!";
            }else
            {
                cout<<"Congratulation, you'll have your loan!";
            }
            break;
        default:
            cout << "WRONG Input, Start all over again!";
            break;
    }


    return 0;
}

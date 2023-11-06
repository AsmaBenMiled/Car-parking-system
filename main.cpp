#include <iomanip>
#include <iostream>

using namespace std;

const int MAX_SPACES = 10;

int main ()
{
    int parking[MAX_SPACES] = {0};
    int choice =0;
    
    do{
        cout<<"\n Welcome to car parking system \n";
        cout<<"****************************\n";
        cout<<"1- Park car \n";
        cout<<"2- Remove car \n";
        cout<<"3- View parking space \n";
        cout<<"4-Exit \n";
        cout<<"Enter your choice (1-4) : ";
        cin>> choice;
        
        switch(choice){
            case 1:
            {
                int space =0;
                for (int i=0; i<MAX_SPACES; i++)
                {
                    if(parking[i] == 0)
                    {
                        space =i+1;
                        parking[i] = 1;
                        break;
                    }
                }
                if(space ==0)
                {
                    cout<<"Sorry, parking is full ! \n";
                } else {
                    cout<<"your car is parked space "<<space<<"\n";
                }
                break;
            }
            case 2:
            {
                int space =0;
                cout<<"Enter the space number of the car you want to remove :";
                cin>>space;
                if(space<1 || space> MAX_SPACES ){
                    cout<<"Invalid space number ! \n";
                } else if(parking[space -1]==0)
                {
                    cout<<"There is no car in sapce n° "<<space<<"\n";
                } else {
                    parking[space -1] =0;
                    cout<<"Car in space n°"<<space<<" : removed ! \n";
                 }
                 break ;
            
        }
        case 3:
        {
            cout<<"Parking space : \n";
            for(int i=0; i<MAX_SPACES; i++)
            {
                if(parking[i]==0)
                {
                    cout<<"space"<<(i+1)<<": empty\n";
                } else {
                    cout<<"space"<<(i+1)<<" : occupied\n";
                    }
            }
            break;
        }
        case 4:
        cout<<"Goodbye !\n";
        break;
        default:
        cout<<"Invalid choice. Please enter a number between 1 and 4 ! \n";
        break;
} 
}while(choice!=4);

return 0;
}

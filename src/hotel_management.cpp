#include <iostream>
using namespace std;

int main(){
    int quantity;  // this one is the quantity of items you want to add for each items 
    int choice; // this one is the choice you have to choose from the menu options

    int Qrooms = 0;
    int Qpasta  = 0;        /*these variables will hold foods items , the quantity of foods*/
    int Qburger = 0;
    int Qnoodles = 0;
    int Qshake = 0;
    int Qchicken = 0;
    // This one will hold the selling items of quantity we have sold (each value)
    int Srooms = 0; int Spasta = 0;int Sburger = 0; int Snoodles = 0;int Sshake = 0;int Schicken = 0;
    // this variables will show the total_price of all quantity
    int Total_rooms = 0;int Total_pasta = 0;int Total_burger = 0;int Total_noodles = 0;int Total_shake =0 ;int Total_chicken  = 0;

    cout<<"\n\t Quantity of items we have";  // in this part you become the owner and decide how many items you of each
    cout<<"\n rooms avaliable";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta : ";
    cin >> Qpasta;
    cout<<"\nQuantity of burger : ";
    cin >> Qburger;
    cout<<"\n Quantity of noodle : ";
    cin >> Qnoodles;
    cout<<"\n Quantity of shake : ";
    cin >> Qchicken;
    cout<<"\n Quantity of chicken : ";
    cin >> Qshake;

    m:  // this m is the recall function of goto m . It will go back to this part and ask any options you want choose beside the previous items
    cout<<"\n\t\t\t Please select from the menu options";
    cout<<"\n\n 1)Rooms";
    cout<<"\n 2)Pasta";
    cout<<"\n 3)burger";
    cout<<"\n 4)noodle";
    cout<<"\n 5)shake";
    cout<<"\n 6)chicken";
    cout<<"\n 7) Information regarding sales and collection ";
    cout<<"\n 8) Exit";

    cout<<"\n\n Please enter your choice";
    cin >> choice;
    switch(choice){
        case 1:
            cout<<"\n\n Enter the number of rooms you want: ";
            cin>> quantity; // this input the number of rooms you want to choose
            if(Qrooms - Srooms >= quantity){ // this mean that if the rooms you have minus to the room for renting is bigger or equal to the quantity input you decide for the rooms
                Srooms += quantity;
                Total_rooms += quantity * 1200;
                cout<<"\n\n\t\t"<<quantity<<" rooms have been alloted to you";

            }
            else
                cout<<"\n\t Only "<<Qrooms - Srooms<<"  rooms left";
                break;
            
        case 2:
            cout<<"\n\n Enter the number of pasta you want: ";
            cin>> quantity;
            if(Qpasta - Spasta >= quantity){
                Spasta += quantity;
                Total_pasta += quantity * 250;
                cout<<"\n\n\t\t"<<quantity<<" pasta have been alloted to you";

            }
            else
                cout<<"\n\t Only "<<Qpasta - Spasta<<"  pasta left";
                break;

        case 3:
            cout<<"\n\n Enter the number of burger you want: ";
            cin>> quantity;
            if(Qburger - Sburger >= quantity){
                Sburger += quantity;
                Total_burger += quantity * 120;
                cout<<"\n\n\t\t"<<quantity<<" burgers have been alloted to you";

            }
            else
                cout<<"\n\t Only "<<Qburger - Sburger<<"  burgers left";
                break;
            
        case 4:
            cout<<"\n\n Enter the number of noodle you want: ";
            cin>> quantity;
            if(Qnoodles - Snoodles >= quantity){
                Snoodles += quantity;
                Total_noodles += quantity * 140;
                cout<<"\n\n\t\t"<<quantity<<" noodle have been alloted to you";

            }
            else
                cout<<"\n\t Only "<<Qnoodles - Snoodles<<"  noodle left";
                break;

        case 5:
            cout<<"\n\n Enter the number of shake you want: ";
            cin>> quantity;
            if(Qshake - Sshake >= quantity){
                Sshake += quantity;
                Total_shake += quantity * 120;
                cout<<"\n\n\t\t"<<quantity<<" shake have been alloted to you";

            }
            else
                cout<<"\n\t Only "<<Qshake - Sshake<<"  shake left";
                break;

        case 6:
            cout<<"\n\n Enter the number of chicken you want: ";
            cin>> quantity;
            if(Qchicken - Schicken >= quantity){
                Schicken += quantity;
                Total_chicken += quantity * 150;
                cout<<"\n\n\t\t"<<quantity<<" chicken have been alloted to you";

            }
            else
                cout<<"\n\t Only "<<Qchicken - Schicken<<"  chicken left";
                break;

        case 7:
            cout<<"Details of sale and collection";
            cout<<"\n\n Number of rooms we had: "<<Qrooms;
            cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
            cout<<"\n\n Remaining rooms: "<<Qrooms -Srooms;
            cout<<"\n\n Total rooms collections of a day: "<<Total_rooms;

            cout<<"\n\n Number of pasta we had: "<<Qpasta;
            cout<<"\n\n Number of pasta we sold: "<<Spasta;
            cout<<"\n\n Remaining pasta: "<<Qpasta -Spasta;
            cout<<"\n\n Total pasta collections of a day: "<<Total_pasta;

            cout<<"\n\n Number of burger we had: "<<Qburger;
            cout<<"\n\n Number of burger we sold: "<<Sburger;
            cout<<"\n\n Remaining pasta: "<<Qburger -Sburger;
            cout<<"\n\n Total burger collections of a day: "<<Total_burger;

            cout<<"\n\n Number of noodle we had: "<<Qnoodles;
            cout<<"\n\n Number of noodle we sold: "<<Snoodles;
            cout<<"\n\n Remaining noodle: "<<Qnoodles -Snoodles;
            cout<<"\n\n Total noodle collections of a day: "<<Total_noodles;

            cout<<"\n\n Number of shake we had: "<<Qshake;
            cout<<"\n\n Number of shake we sold: "<<Sshake;
            cout<<"\n\n Remaining shake: "<<Qshake -Sshake;
            cout<<"\n\n Total shake collections of a day: "<<Total_shake;

            cout<<"\n\n Number of chicken we had: "<<Qchicken;
            cout<<"\n\n Number of chicken we sold: "<<Schicken;
            cout<<"\n\n Remaining chicken: "<<Qchicken -Schicken;
            cout<<"\n\n Total chicken collections of a day: "<<Total_chicken;

            cout<<"\n\n\n Total collection of a day: "<<Total_burger + Total_rooms + Total_chicken+ Total_noodles + Total_pasta + Total_shake;

            break;

            
        case 8:
            exit(0);

            default:
            cout<<"\n Please select the number mention above";
    }
    goto m; // this must put outside the switch case where it must use to recall the input for choosing menu

}
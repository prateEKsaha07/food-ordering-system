#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    char name[30];
    char pizza1[]="chicken fazzita",pizza2[]="chicken bbq",pizza3[]="peri peri",pizza4[]="creamy max";
    char roll1[]="chicken chatni roll",roll2[]="chicken mayo roll",roll3[]="veg roll";
    char bur1[]="zinger burger",bur2[]="chicken burger",bur3[]="beef burger";
    char sand1[]="grill sandwich",sand2[]="extra cheese sandwich",sand3[]="chicken sandwich";
    char biriyani1[]="veg biriyani",biriyani2[]="chicken biriyani",biriyani3[]="cooker biriyani";
    int choice=0,pc_choice,pc_choice1,quantity;
    char getstat;


    beginning:
    system("CLS");
    cout<<"------------- san andreas food service -------------"<<endl;
    cout<<"enter your name :: ";
    cin.getline(name,25);
    cout<<"hello "<<name<<" thankyou for choosing san andreas food service"<<endl;

    cout<<"\t\t\t-------------MENU-------------"<<endl;
    cout<<"\t\t\t1) pizza \n";
    cout<<"\t\t\t2) burger \n";
    cout<<"\t\t\t3) sandwich \n";
    cout<<"\t\t\t4) rolls \n";
    cout<<"\t\t\t5) biriyani \n";
    cout<<"\t\t\t------------------------------"<<endl;
    cout<<"\t\t\tenter your choice :: ";
    cin >> choice;

    if(choice==1){
        cout<<"please select which type of pizza would you like.."<<endl;
        cout<<"1)"<<pizza1<<endl;
        cout<<"2)"<<pizza2<<endl;
        cout<<"3)"<<pizza3<<endl;
        cout<<"4)"<<pizza4<<endl;
        cout <<"please select which flavour you would like to have :: ";
        cin>>pc_choice;

        if(pc_choice>=1 && pc_choice<=5){
            cout<<"1) small rs250.00"<<endl;
            cout<<"2) regular rs500.00"<<endl;
            cout<<"3) large rs900.00"<<endl;
            cout<<"\n please choose your preferred size :: ";
            cin>>pc_choice1;
            cout<<"please enter quantity :: ";
            cin>>quantity;
            
            switch(pc_choice1){
                case '1':
                choice = 250*quantity;
                break;

                case '2':
                choice = 500*quantity;
                break;

                case '3':
                choice = 900*quantity;
                break;
            }
            system("CLS");
            switch(pc_choice1){
                case 1:
                cout<<"\t\t\t-------------your order-------------"<<endl;
                cout<<" "<<quantity<<" "<<pizza1;
                cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
                case 2:
                cout<<"\t\t\t-------------your order-------------"<<endl;
                cout<<" "<<quantity<<" "<<pizza2;
                cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
                case 3:
                cout<<"\t\t\t-------------your order-------------"<<endl;
                cout<<" "<<quantity<<" "<<pizza3;
                cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
                case 4:
                cout<<"\t\t\t-------------your order-------------"<<endl;
                cout<<" "<<quantity<<" "<<pizza4;
                cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
            }
            cout<<"would you like to order anything else ? (Y/N) ";
            cin>>getstat;
            if(getstat == 'Y' || getstat == 'y'){
                goto beginning;
            }else{
                cout<<"thank you for shopping with san andreas f.s2007 ";
            }
        }
    }
    else if (choice == 2 ){
        cout<<"\n 1) "<<bur1<<"rs180.00";
        cout<<"\n 2) "<<bur2<<"rs180.00";
        cout<<"\n 3) "<<bur3<<"rs180.00";
        cout<<"\n please enter which burger you would like to order ? "<<endl;
        cout<<"your choice :: ";
        cin>>pc_choice1;
        if (pc_choice1>=1 && pc_choice1<=3){
            cout<<"\n please enter quantity : ";
            cin>>quantity;
            switch (pc_choice1)
            {
            case 1:
                choice = 180*quantity;
                break;
            case 2:
                choice = 180*quantity;
                break;
            case 3:
                choice = 180*quantity;
                break;
            
            default:
            cout<<"invalid choice error !!"<<endl;
            break;
            }
            system("CLS");
            switch(pc_choice1){
                case 1:
                    cout<<"\t\t\t-------------your order-------------"<<endl;
                    cout<<" "<<quantity<<" "<<bur1;
                    cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                    cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
                case 2:
                    cout<<"\t\t\t-------------your order-------------"<<endl;
                    cout<<" "<<quantity<<" "<<bur2;
                    cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                    cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
                case 3:
                    cout<<"\t\t\t-------------your order-------------"<<endl;
                    cout<<" "<<quantity<<" "<<bur3;
                    cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                    cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
            }
            cout<<"would you like to order anything else ? (Y/N) ";
            cin>>getstat;
            if(getstat == 'Y' || getstat == 'y'){
                goto beginning;
            }else{
                cout<<"thank you for shopping with san andreas f.s2007 ";
            }
        }
    }
    else if(choice == 3){
        cout<<"\n 1) "<<sand1<<"rs80.00";
        cout<<"\n 2) "<<sand2<<"rs150.00";
        cout<<"\n 3) "<<sand3<<"rs200.00";
        cout<<"\n please enter which burger you would like to order ? "<<endl;
        cout<<"your choice :: ";
        cin>>pc_choice1;
        if (pc_choice1>=1 && pc_choice1<=3){
            cout<<"\n please enter quantity : ";
            cin>>quantity;
            switch (pc_choice1)
            {
            case 1:
                choice = 80*quantity;
                break;
            case 2:
                choice = 150*quantity;
                break;
            case 3:
                choice = 250*quantity;
                break;
            
            default:
            cout<<"invalid choice error !!"<<endl;
            break;
            }
            system("CLS");
            switch(pc_choice1){
                case 1:
                    cout<<"\t\t\t-------------your order-------------"<<endl;
                    cout<<" "<<quantity<<" "<<sand1;
                    cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                    cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
                case 2:
                    cout<<"\t\t\t-------------your order-------------"<<endl;
                    cout<<" "<<quantity<<" "<<sand2;
                    cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                    cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
                case 3:
                    cout<<"\t\t\t-------------your order-------------"<<endl;
                    cout<<" "<<quantity<<" "<<sand3;
                    cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                    cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
            }
            cout<<"would you like to order anything else ? (Y/N) ";
            cin>>getstat;
            if(getstat == 'Y' || getstat == 'y'){
                goto beginning;
            }else{
                cout<<"thank you for shopping with san andreas f.s2007 ";
            }    
        }
    }
    else if(choice == 4){
        cout<<"\n 1) "<<roll1<<"rs80.00";
        cout<<"\n 2) "<<roll2<<"rs180.00";
        cout<<"\n 3) "<<roll3<<"rs250.00";
        cout<<"\n please enter which burger you would like to order ? "<<endl;
        cout<<"your choice :: ";
        cin>>pc_choice1;
        if (pc_choice1>=1 && pc_choice1<=3){
            cout<<"\n please enter quantity : ";
            cin>>quantity;
            switch (pc_choice1)
            {
            case 1:
                choice = 80*quantity;
                break;
            case 2:
                choice = 180*quantity;
                break;
            case 3:
                choice = 250*quantity;
                break;
            
            default:
            cout<<"invalid choice error !!"<<endl;
            break;
            }
            system("CLS");
            switch(pc_choice1){
                case 1:
                    cout<<"\t\t\t-------------your order-------------"<<endl;
                    cout<<" "<<quantity<<" "<<roll1;
                    cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                    cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
                case 2:
                    cout<<"\t\t\t-------------your order-------------"<<endl;
                    cout<<" "<<quantity<<" "<<roll2;
                    cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                    cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
                case 3:
                    cout<<"\t\t\t-------------your order-------------"<<endl;
                    cout<<" "<<quantity<<" "<<roll3;
                    cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                    cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
            }
            cout<<"would you like to order anything else ? (Y/N) ";
            cin>>getstat;
            if(getstat == 'Y' || getstat == 'y'){
                goto beginning;
            }else{
                cout<<"thank you for shopping with san andreas f.s2007 ";
            } 
        }
    }
    else if(choice == 4){
        cout<<"\n 1) "<<biriyani1<<"rs160.00";
        cout<<"\n 2) "<<biriyani2<<"rs250.00";
        cout<<"\n 3) "<<biriyani3<<"rs500.00";
        cout<<"\n please enter which burger you would like to order ? "<<endl;
        cout<<"your choice :: ";
        cin>>pc_choice1;
        if (pc_choice1>=1 && pc_choice1<=3){
            cout<<"\n please enter quantity : ";
            cin>>quantity;
            switch (pc_choice1)
            {
            case 1:
                choice = 80*quantity;
                break;
            case 2:
                choice = 180*quantity;
                break;
            case 3:
                choice = 250*quantity;
                break;
            
            default:
            cout<<"invalid choice error !!"<<endl;
            break;
            }
            system("CLS");
            switch(pc_choice1){
                case 1:
                    cout<<"\t\t\t-------------your order-------------"<<endl;
                    cout<<" "<<quantity<<" "<<biriyani1;
                    cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                    cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
                case 2:
                    cout<<"\t\t\t-------------your order-------------"<<endl;
                    cout<<" "<<quantity<<" "<<biriyani2;
                    cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                    cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
                case 3:
                    cout<<"\t\t\t-------------your order-------------"<<endl;
                    cout<<" "<<quantity<<" "<<biriyani3;
                    cout<<"\n your total bill is : "<<choice<<" \n your order will be delivered with in 40 minutes"<<endl;
                    cout<<"\n thankyou for ordering from san andreas food services "<<endl;
                break;
            }
            cout<<"would you like to order anything else ? (Y/N) ";
            cin>>getstat;
            if(getstat == 'Y' || getstat == 'y'){
                goto beginning;
            }else{
                cout<<"thank you for shopping with san andreas f.s2007 ";
            } 
        }
    }
    getch();
}

//ps
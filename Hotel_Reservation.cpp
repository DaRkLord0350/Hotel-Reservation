#include<bits/stdc++.h>
using namespace std;
int advanc[5] = {750, 500, 400, 500, 750};
int r_no[5] = {1, 2, 3, 4, 5};
int room;
int tot[5] = {0, 0, 0, 0, 0};
int g_tot = 0;
int r_charge[5];
char r_type[5][7];
char r_cust[5][20] = {"N.A", "N.A", "N.A", "N.A", "N.A"};
char c_city[5][20];
char name[30];
int c_mem[5];
char c_nat[5][20];
char r_avail[5];
int r_per[5];
int no[5];
int year[5];
int month[5];
int day[5];
int i;

void screenheader(){
    cout<<endl;
    cout<<"\t\t\t\t\t\t:::::::::::::::::::::::::::::::::::::"<<endl;
    cout<<"\t\t\t\t\t\t::                                 ::"<<endl;
    cout<<"\t\t\t\t\t\t::     @@@@@@@@@@@@@@@@@@@@@@@     ::"<<endl;
    cout<<"\t\t\t\t\t\t::     @                     @     ::"<<endl;
    cout<<"\t\t\t\t\t\t::     @      WELCOME TO     @     ::"<<endl;
    cout<<"\t\t\t\t\t\t::     @                     @     ::"<<endl;
    cout<<"\t\t\t\t\t\t::     @    Programers4You   @     ::"<<endl;
    cout<<"\t\t\t\t\t\t::     @                     @     ::"<<endl;
    cout<<"\t\t\t\t\t\t::     @@@@@@@@@@@@@@@@@@@@@@@     ::"<<endl;
    cout<<"\t\t\t\t\t\t::                                 ::"<<endl;
    cout<<"\t\t\t\t\t\t:::::::::::::::::::::::::::::::::::::\n"<<endl;
}
// to be edit
void intro(){
    cout<<"\t\t\t\t\t\tNear BSF Chowk, G.T. Road, Jalandhar City,\n\t\t\t\t\t\t\t Punjab 144001,INDIA"<<endl;
    cout<<"\t\t\t\t\t\t      Phone No.-> +91 790326197"<<endl;
    cout<<"\n\n\t\t\t\t\t     ..................WELCOMES YOU.................."<<endl;
    cout<<"\nHotel Ganga Inn is one of the newest Hotel in Jalandhar. The Hotel is equipped with with all the general amenities and facilities that go along with memorable stay. Set amidst beautifully landscaped gardens, it proves to be a ideal dream destination for perceptive traveller."<<endl;
    cout<<"\nThe Hotel have well furnished rooms along with rooms providing pleasent views of the city. The hotel satisfies the needs of business as well as the leisure traveller. All the rooms at the thotel are furnished beautifully. All the rooms are fitted with amenities."<<endl;
    cout<<"\nAMENITIES ......."<<endl;
    cout<<"1. 100% Power backup."<<endl;
    cout<<"2. Automatic lift."<<endl;
    cout<<"3. Ample parking space."<<endl;
    cout<<"4. Round the clock security."<<endl;
    cout<<"5. Running hot and cold water."<<endl;
    cout<<"6. Free internet service."<<endl;
    cout<<"7. 24 hours room service."<<endl;
    cout<<"8. Laundary service."<<endl;
    cout<<"\nPress any character to continue:\n"<<endl;
}

void getavail()
{
    for (i = 0; i < 5; i++)
    {
        if (r_no[i] == 1)
        {
            strcpy(r_type[i], "Sp Dlx");
            r_charge[i] = 1500;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
        else if (r_no[i] == 2)
        {
            strcpy(r_type[i], "Dlx");
            r_charge[i] = 1000;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
        else if (r_no[i] == 3)
        {
            strcpy(r_type[i], "Gen");
            r_charge[i] = 750;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
        else if (r_no[i] == 4)
        {
            strcpy(r_type[i], "Coupl");
            r_charge[i] = 1000;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
        else if (r_no[i] == 5)
        {
            strcpy(r_type[i], "C Dlx");
            r_charge[i] = 1500;
            if (strcmp(r_cust[i], "N.A") == 0)
            {
                r_avail[i] = 'Y';
                r_per[i] = 0;
            }
        }
    }
}
// check puts
void putavail(){
    cout<<"\n                          ROOM AVAILABILITY"<<endl;
    cout<<"                         -------------------"<<endl;
    cout<<"Room No| Type | Charge | Availability | Cust_Name | Period |"<<endl;
    for (i = 0; i < 5; i++)
    {
        cout<<"\n"<<r_no[i];
        // puts(r_type[i]);
        if (i == 0)
            cout<<"\t  "<<r_charge[i]<<"\t"<<r_avail[i];
        if ((i == 1) || (i == 2))
            cout<<"\t  "<<r_charge[i]<<"\t"<<r_avail[i];
        if (i == 3 || i == 4)
            cout<<"\t  "<<r_charge[i]<<"\t"<<r_avail[i];
        // puts(r_cust[i]);
        if ((i == 1) || (i == 2))
            cout<<"\t  "<<r_per[i];
        else if ((i == 3) || (i == 4))
            cout<<"\t  "<<r_per[i];
        else
            cout<<"\t  "<<r_per[i];
    }
    cout<<endl;
}

void features()
{
    int typ;
    cout<<"\nChoose the room type:\n1. Sp. Delux\n2. Del";
    cout<<"\n3. General\n4. Couple\n5. C. Delux"<<endl;
    cin>>typ;
    if (typ > 5){
        cout<<"\nWrong choice!! Choose a number between 1-5 :- "<<endl;
        features();
    }
    switch (typ)
    {
    case 1:
        cout<<endl;
        cout<<" Room number\t>>>   1"<<endl;
        cout<<" Advance\t>>>   750\n"<<endl;
        cout<<"                      FEATURES OF THIS ROOM                       "<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout<<" Room Type\t>>>    Sp.delux"<<endl;
        cout<<" Room charges\t>>>    Rs.1500 per day"<<endl;
        cout<<"\n 1.Bed   \t->    2"<<endl;
        cout<<" 2.Capacity\t->    5"<<endl;
        cout<<" 3.Balcony available     "<<endl;
        cout<<"\n------------------------------------------------------------------"<<endl;
        cout<<"                     ADDITIONAL FEATURES                        "<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout<<" 1.A/C  available "<<endl;
        cout<<" 2.Geyser available"<<endl;
        cout<<" 3.TV available      "<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout<<" NOTE :- Extra bed will cost Rs.50 per bed "<<endl;
        break;
    case 2:
        cout<<" Room number\t>>>   2"<<endl;
        cout<<" Advance\t>>>   500\n"<<endl;
        cout<<"                      FEATURES OF THIS ROOM                       "<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout<<" Room Type\t>>>    Delux"<<endl;
        cout<<" Room charges\t>>>    Rs.1000 per day"<<endl;
        cout<<"\n 1.Bed   \t->    2"<<endl;
        cout<<" 2.Capacity\t->    5"<<endl;
        cout<<"\n------------------------------------------------------------------"<<endl;
        cout<<"                     ADDITIONAL FEATURES                        "<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout<<" 1.Geyser available"<<endl;
        cout<<" 2.TV available      "<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout<<" NOTE :- Extra bed will cost Rs.50 per bed "<<endl;
        break;
    case 3:
        cout<<" Room number\t>>>   3"<<endl;
        cout<<" Advance\t>>>   400\n"<<endl;
        cout<<"                      FEATURES OF THIS ROOM                       "<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout<<" Room Type\t>>>    General"<<endl;
        cout<<" Room charges\t>>>    Rs.750 per day"<<endl;
        cout<<"\n 1.Bed   \t->    2"<<endl;
        cout<<" 2.Capacity\t->    5"<<endl;
        cout<<"\n------------------------------------------------------------------"<<endl;
        cout<<"                     ADDITIONAL FEATURES                        "<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout<<"1.Geyser available"<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout<<" NOTE :- Extra bed will cost Rs.50 per bed "<<endl;
        break;
    case 4:
        cout<<" Room number\t>>>   4"<<endl;
        cout<<" Advance\t>>>   500\n"<<endl;
        cout<<"                      FEATURES OF THIS ROOM                       "<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout<<" Room Type\t>>>    Couple"<<endl;
        cout<<" Room charges\t>>>    Rs.1000 per day"<<endl;
        cout<<"\n 1.Bed   \t->    1"<<endl;
        cout<<" 2.Capacity\t->    2"<<endl;
        cout<<"\n------------------------------------------------------------------"<<endl;
        cout<<"                     ADDITIONAL FEATURES                        "<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout<<"1.Geyser available"<<endl;
        cout<<"2.TV available"<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        break;
    case 5:
        cout<<" Room number\t>>>   5"<<endl;
        cout<<" Advance\t>>>   750\n"<<endl;
        cout<<"                      FEATURES OF THIS ROOM                       "<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout<<" Room Type\t>>>    Couple Delux"<<endl;
        cout<<" Room charges\t>>>    Rs.1500 per day"<<endl;
        cout<<"\n 1.Bed   \t->    1"<<endl;
        cout<<" 2.Capacity\t->    2"<<endl;
        cout<<"\n------------------------------------------------------------------"<<endl;
        cout<<"                     ADDITIONAL FEATURES                        "<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        cout<<"1.A/C available"<<endl;
        cout<<"2.Geyser available"<<endl;
        cout<<"3.TV available"<<endl;
        cout<<"------------------------------------------------------------------"<<endl;
        break;
    }
}

void allocate()
{
    getavail();
    cout<<endl;
    cout<<" Enter the room number in which you want to stay:";
    cin>>room;
    if (r_avail[room - 1] == 'Y')
    {
        fflush(stdin);
        cout<<"\n Enter Name of cust living :";
        gets(r_cust[room - 1]);
        cout<<"\n Enter city name :";
        gets(c_city[room - 1]);
        cout<<"\n Enter nationality :";
        gets(c_nat[room - 1]);
        cout<<"\n For how many days cust want the room :";
        cin>>r_per[room - 1];
        cout<<"\n Enter no. of member in your group :";
        cin>>c_mem[room - 1];
        if ((room == 1) || (room == 2) || (room == 3)){
            if ((c_mem[room - 1] < 1) || (c_mem[room - 1] > 5)){
                cout<<"\n "<<c_mem[room - 1]<<" members cannot be allocated this room.Allowed members are between 1-5.";
                allocate();
            }
            else if ((room == 4) || (room == 5))
                if ((c_mem[room - 1] < 1) || (c_mem[room - 1] > 2))
                {
                    cout<<"\n "<<c_mem[room - 1]<<" members cannot be allocated this room.Allowed members are between 1-2.";
                    allocate();
                }
        }
        cout<<endl;
        cout<<" Enter the date of arrival :"<<endl;
        cout<<"\n------------------------------"<<endl;
        cout<<"\n Year : ";
        cin>>year[room - 1];
        cout<<"\n Month :";
        cin>>month[room - 1];
        cout<<"\n Day :";
        cin>>day[room - 1];
        if ((year[room - 1] > 9999) || (month[room - 1] > 12) || (month[room - 1] < 1) || (day[room - 1] < 1) || (((month[room - 1] == 1) || (month[room - 1] == 3) || (month[room - 1] == 5) || (month[room - 1] == 7) || (month[room - 1] == 8) || (month[room - 1] == 10) || (month[room - 1] == 12)) && (day[room - 1] > 31)) || (((month[room - 1] == 4) || (month[room - 1] == 6) || (month[room - 1] == 9) || (month[room - 1] == 11)) && (day[room - 1] > 30)) || ((month[room - 1] == 2) && ((year[room - 1] % 400 == 0) || ((year[room - 1] % 4 == 0) && (year[room - 1] % 100 != 0))) && (day[room - 1] > 29)) || ((month[room - 1] == 2) && (year[room - 1] % 4 != 0) && (day[room - 1] > 28)))
        {
            cout<<"\n\n!!!!!INVALID DATE........";
            allocate();
        }
        else
        {
            cout<<"\n... Room is allocated to ";
            puts(r_cust[room - 1]);
            cout<<" for "<<r_per[room - 1]<<" days.";
            r_avail[room - 1] = 'N';
        }
    }
    else
    {
        cout<<endl;
        cout<<" ERROR : Room cannot be allocated ..."<<endl;
        cout<<"\n Room is not available...";
    }
}

void deallocate()
{
    cout<<endl;
    cout<<"Enter the room number: ";
    cin>>room;
    cout<<endl;
    if (r_cust[room - 1] == "N.A")
    {
        cout<<"The room is empty........"<<endl;
    }
    else
    {
        cout<<"Enter the name of the person staying in the room:"<<endl;
        fflush(stdin);
        gets(name);
        if (strcmpi(name, r_cust[room - 1]) == 0)
        {
            cout<<"Room number "<<room<<" is deallocated......";
            strcpy(r_cust[room - 1], "N.A");
        }
        else
        {
            cout<<"Invalid name........";
            deallocate();
        }
    }
    g_tot = (r_per[room - 1] * r_charge[room - 1]) - advanc[room - 1] + tot[room - 1];
    cout<<"\n\nYour total bill is "<<g_tot<<endl;
    cout<<"\n\nThanks for staying in this hotel........."<<endl;
}

void cancel()
{
    cout<<endl;
    cout<<"Enter the room number:"<<endl;
    cin>>room;
    cout<<endl;
    if (r_cust[room - 1] == "N.A")
    {
        cout<<"The room is empty........"<<endl;
    }
    else
    {
        cout<<"Enter the name of the person staying in the room:"<<endl;
        fflush(stdin);
        gets(name);
        if (strcmpi(name, r_cust[room - 1]) == 0)
        {
            cout<<"Reservation for room number "<<room<<" is cancelled......"<<endl;
            strcpy(r_cust[room - 1], "N.A");
        }
        else
        {
            cout<<"Invalid name........"<<endl;
            cancel();
        }
    }
    g_tot = advanc[room - 1];
    cout<<"\nYour total bill is "<< g_tot<<endl;
}

void putcust()
{
    int j;
    cout<<endl;
    cout<<"Enter the room number :";
    cin>>room;
    j = strcmp(r_cust[room - 1], "N.A");
    cout<<endl;
    if (j == 0)
    {
        cout<<" Data not available "<<endl;
    }
    else
    {
        cout<<" Room No        : "<< r_no[room - 1]<<endl;
        cout<<" Customer Name  :"<<endl;
        puts(r_cust[room - 1]);
        cout<<" Period         : "<< r_per[room - 1]<<endl;
        cout<<" City           :"<<endl;
        puts(c_city[room - 1]);
        cout<<" Nationality    :"<<endl;
        puts(c_nat[room - 1]);
        cout<<" No of member   : "<< c_mem[room - 1]<<endl;
        cout<<" Arrival Date   : "<< day[room - 1]<< month[room - 1]<< year[room - 1]<<endl;
    }
}

int main(){
    char ans;
    int ch;
    screenheader();
    intro();
    do{
        cout<<"Choose a category:\n"<<endl;
        cout<<"1. Get availability"<<endl;
        cout<<"2. Features of room"<<endl;
        cout<<"3. Room allocation"<<endl;
        cout<<"4. Show customer details"<<endl;
        cout<<"5. Cancellation"<<endl;
        cout<<"6. Room Deallocation"<<endl;
        cout<<"7. Exit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            getavail();
            putavail();
            break;
        case 2:
            features();
            break;
        case 3:
            allocate();
            break;
        case 4:
            putcust();
            break;
        case 5:
            cancel();
            break;
        case 6:
            deallocate();
            break;
        case 7:
            exit(0);
        default:
            printf("\n\n\nWrong choice!!!!\n\nPlease choose 1-6");
        }
        cout<<"\n"<<endl;
        cout<<"Do you want to continue:"<<endl;
        cout<<"Press Y/y to contine or press any key to exit"<<endl;
        fflush(stdin);
        cin>>ans;
    }while(ans == 'y' || ans == 'Y');
    cin.get();
    return 0;
}
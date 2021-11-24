//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Project Name : Zoo Management System
//
// Description   :
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

#define Max_Birds 10
#define Max_Mammals 10
static int Birds_Top = 0;
static int Mammals_Top = 0;

class Animals
{
            public:
                        int ID;
                        string Name;
                        string Cage_Type;         // Wooden_Cage Or Iron_Cage

                        Animals()
                        {
                                    ID  = 0;
                                    Name = "\0";
                                    Cage_Type = "Wooden_Cage";
                        }

                        ~Animals()
                        {
                                    // Object will be destroyed here
                        }
};

class Birds : public Animals
{
            public:

                        string Flying_Type;   //   Flying Or Non_Flying

                        Birds()
                        {
                                    Flying_Type = '\0';
                        }

                        ~Birds()
                        {
                                     // Object will be destroyed here
                        }

                        void Add_New_Bird_Info()
                        {
                                        if(Birds_Top == Max_Birds)
                                        {
                                                        cout << "\n Birds Capacity of Zoo is full, Can't Add New Bird." << endl;
                                                        return;
                                        }
                                        else
                                        {
                                                        cout << "\n Enter Bird ID : " ;
                                                        cin >> ID;
                                                        cout << "\n Enter Bird Name : ";
                                                        cin >> Name;
                                                        cout << "\n Enter Bird Cage Type (Wooden_Cage Or Iron_Cage) : ";
                                                        cin >> Cage_Type;
                                                        cout << "\n Enter Birds Flying Type (Flying Or Non_Flying) : ";
                                                        cin >> Flying_Type;
                                                        Birds_Top++;
                                        }
                        }

                        int Search_Bird_By_ID(int b_ID)
                        {
                                    if(ID == b_ID)
                                    {
                                                cout << "  Bird Name = " << Name;
                                                cout << "  Bird Cage Type = " << Cage_Type;
                                                cout << "  Bird Flying Type = " << Flying_Type;
                                                return 1;
                                    }
                                    return 0;
                        }

                        int Search_Bird_By_Name(string b_Name)
                        {
                                    if(b_Name == Name)
                                    {
                                                cout << "  Bird ID = " << ID;
                                                cout << "  Bird Cage Type = " << Cage_Type;
                                                cout << "  Bird Flying Type = " << Flying_Type;
                                                return 1;
                                    }
                                    return 0;
                        }
                        friend void Count_Birds();
                        friend void Display_All_Bird_Info();
};

class Mammals : public Animals
{
            public:
                        string Catagory;     // Wild   Or  Pet
                        string Diet_Type;     // Veg  or Non-Veg

                        Mammals()
                        {
                                    Catagory = "\0";
                                    Diet_Type = "\0";
                        }

                        ~Mammals()
                        {
                                    // Object will be destroyed here
                        }

                        void Add_New_Mammal_Info()
                        {
                                        if(Mammals_Top == Max_Mammals)
                                        {
                                                        cout << "\n Mammals Capacity of Zoo is full, Can't Add New Mammal." << endl;
                                                        return;
                                        }
                                        else
                                        {
                                                        cout << "\n Enter Mammal ID : " ;
                                                        cin >> ID;
                                                        cout << "\n Enter Mammal Name : ";
                                                        cin >> Name;
                                                        cout << "\n Enter Mammal Cage Type (Wooden_Cage Or Iron_Cage) : ";
                                                        cin >> Cage_Type;
                                                        cout << "\n Enter Mammals Catagory (Wild  Or  Pet) : ";
                                                        cin >> Catagory;
                                                        cout << "\n Enter Mammals Diet Type (Veg  or Non-Veg) : ";
                                                        cin >> Diet_Type;
                                                        Mammals_Top++;
                                        }
                        }

                        int Search_Mammal_By_ID(int m_ID)
                        {
                                    if(ID == m_ID)
                                    {
                                                cout << "  Mammal Name = " << Name;
                                                cout << "  Mammal Cage Type = " << Cage_Type;
                                                cout << "  Mammal Catagory = " << Catagory;
                                                cout << "  Mammal Diet Type = " << Diet_Type;
                                                return 1;
                                    }
                                    return 0;
                        }

                        int Search_Mammal_By_Name(string m_Name)
                        {
                                    if(m_Name == Name)
                                    {
                                                cout << "  Mammal ID = " << ID;
                                                cout << "  Mammal Cage Type = " << Cage_Type;
                                                cout << "  Mammal Catagory = " << Catagory;
                                                cout << "  Mammal Diet Type = " << Diet_Type;
                                                return 1;
                                    }
                                    return 0;
                        }
                        friend void Count_Mammals();
                        friend void Display_All_Mammal_Info();
};


Birds B_obj[Max_Birds];
Mammals M_obj[Max_Mammals];

void Count_Birds()
{
           cout << "\n Count of Birds in Zoo is = "<< Birds_Top <<endl;
}

void Count_Mammals()
{
           cout << "\n Count of Mammals in Zoo is = "<< Mammals_Top <<endl;
}

void Display_All_Birds_Info()
{
            int i = 0;

            if(Birds_Top == 0)
            {
                        cout << "\n There are no birds added in zoo yet..." << endl;
                        return;
            }
            cout << "\n=================**********=================" << endl;
            cout << "Information Of All Birds in Zoo is as follows => " << endl;
            cout << " \nBird ID ||   Bird Name   ||   Bird Cage Type   ||  Bird Flying Type \n\n";

            while(i < Birds_Top)
            {
                            cout << B_obj[i].ID<< "   \t " << B_obj[i].Name << "   \t    "  << B_obj[i].Cage_Type << "   \t      " << B_obj[i].Flying_Type << endl;
                            i++;
            }
             cout << "\n=================**********=================" << endl;
}

void Display_All_Mammals_Info()
{
            int i = 0;

            if(Mammals_Top == 0)
            {
                        cout << "\n There are no Mammals added in zoo yet..." << endl;
                        return;
            }
            cout << "\n=================**********=================" << endl;
            cout << "Information Of All Mammals in Zoo is as follows => " << endl;
            cout << " \nMammal ID ||   Mammal Name   ||   Mammal Cage Type   ||  Mammal Catagory   ||   Mammal Diet Type  \n\n";

            while(i < Mammals_Top)
            {
                            cout << M_obj[i].ID<< "   \t " << M_obj[i].Name << "   \t    "  << M_obj[i].Cage_Type << "   \t      " << M_obj[i].Catagory <<  "   \t      " << M_obj[i].Diet_Type << endl;
                            i++;
            }
             cout << "\n=================**********=================" << endl;
}

int main()
{
                int choice;
                int i = 0, b_ID = 0, ret = 0;
                string B_Name = "\0";

                cout << " ==========================********============================ "<< endl;
                cout << " 1. Add New Bird In Zoo "<< endl;
                cout << " 2. Search Bird In Zoo By ID "<< endl;
                cout << " 3. Search Bird In Zoo By Name "<< endl;
                cout << " 4. Display All Birds In Zoo "<< endl;
                cout << " 5. Count Total Birds In Zoo "<< endl;
                cout << " 6. Add New Mammal In Zoo "<< endl;
                cout << " 7. Search Mammal In Zoo By ID "<< endl;
                cout << " 8. Search Mammal In Zoo By Name "<< endl;
                cout << " 9. Display All Mammals In Zoo "<< endl;
                cout << " 10. Count Total Mammals In Zoo "<< endl;
                cout << " 11. Exit "<< endl;
                cout << " ==========================********============================ "<< endl;

                for(;;)
                {
                            cout << "\n Enter Your Choice : \n"<< endl;
                            cin >> choice;

                            switch(choice)
                            {
                                case 1:
                                                B_obj[Birds_Top].Add_New_Bird_Info();
                                                break;
                                case 2:
                                                i = 0;
                                                ret = 0;
                                                cout << "\n Enter Bird ID to Search : "<< endl;
                                                cin >> b_ID;

                                                while(i < Birds_Top)
                                                {
                                                            ret = B_obj[i].Search_Bird_By_ID(b_ID);

                                                            if(ret)
                                                            {
                                                                    break;
                                                            }
                                                            i++;
                                                }
                                                if(ret == 0)
                                                {
                                                            cout << " No Bird with that ID Found in Zoo."<< endl;
                                                }
                                                break;
                                case 3:
                                                i = 0;
                                                ret = 0;
                                                cout << "\n Enter Bird Name to Search : "<< endl;
                                                cin >> B_Name;

                                                while(i < Birds_Top)
                                                {
                                                            ret = B_obj[i].Search_Bird_By_Name(B_Name);

                                                            if(ret)
                                                            {
                                                                    break;
                                                            }
                                                            i++;
                                                }
                                                if(ret == 0)
                                                {
                                                            cout << " No Bird with that Name Found in Zoo."<< endl;
                                                }
                                                break;
                                case 4:
                                                Display_All_Birds_Info();
                                                break;
                                case 5:
                                                Count_Birds();
                                                break;
                                case 6:
                                                M_obj[Mammals_Top].Add_New_Mammal_Info();
                                                break;
                                case 7:
                                                i = 0;
                                                ret = 0;
                                                cout << "\n Enter Mammal ID to Search : "<< endl;
                                                cin >> b_ID;

                                                while(i < Mammals_Top)
                                                {
                                                            ret = M_obj[i].Search_Mammal_By_ID(b_ID);

                                                            if(ret)
                                                            {
                                                                    break;
                                                            }
                                                            i++;
                                                }
                                                if(ret == 0)
                                                {
                                                            cout << " No Mammal with that ID Found in Zoo."<< endl;
                                                }
                                                break;
                                case 8:
                                                i = 0;
                                                ret = 0;
                                                cout << "\n Enter Mammal Name to Search : "<< endl;
                                                cin >> B_Name;

                                                while(i < Mammals_Top)
                                                {
                                                            ret = M_obj[i].Search_Mammal_By_Name(B_Name);

                                                            if(ret)
                                                            {
                                                                    break;
                                                            }
                                                            i++;
                                                }
                                                if(ret == 0)
                                                {
                                                            cout << " No Mammal with that Name Found in Zoo."<< endl;
                                                }
                                                break;
                                case 9:
                                                Display_All_Mammals_Info();
                                                break;
                                case 10:
                                                Count_Mammals();
                                                break;
                                case 11:
                                                return 0;
                                default:
                                                cout << "\n Enter Valid value\n";
                                                break;
                            }
                }
                return 0;
}


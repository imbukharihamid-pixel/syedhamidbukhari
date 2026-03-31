#include <iostream>
#include <conio.h>

using namespace std;
main()
{
    string userOpt;
    int TOTAL_STUDENTS = 1000; //TOTAL SIZE OF STUDENTS
    int index = 7;

    // DATA TYPE
    float aggregateArray[TOTAL_STUDENTS];
    int ageArray[TOTAL_STUDENTS] = {18, 15, 16, 22, 24, 17, 22};
    float matricArray[TOTAL_STUDENTS] = {1010, 850, 990, 400, 890, 880, 920};
    float ecatArray[TOTAL_STUDENTS] = {372, 282, 373, 290, 250, 305, 315};
    float interArray[TOTAL_STUDENTS] = {1100, 1024, 1050, 1080, 990, 1075, 1120};
    string nameArray[TOTAL_STUDENTS] = {"hamid", "raffay", "abdullah", "hassan", "bilal", "zain", "hamza"};
    string pref1Array[TOTAL_STUDENTS] = {"CS", "IT", "SE", "CS", "IT", "SE", "CS"};
    string pref2Array[TOTAL_STUDENTS] = {"IT", "SE", "CS", "SE", "CS", "IT", "SE"};
    string pref3Array[TOTAL_STUDENTS] = {"SE", "CS", "IT", "IT", "SE", "CS", "IT"};

    // CURD ==> CREATE,UPDATE,READ,DELETE
    while (true)
    { // UNIVERSITY PORTAL
        system("cls");
        cout << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << "-----------UNIVERSITY ADMISSION MANAGEMENT SYSTEM-----------" << endl;
        cout << "------------------------------------------------------------" << endl;

        cout << "USER MENU " << endl;
        cout << "1-ADMIN " << endl;
        cout << "2-STUDENT " << endl;
        cout << "3-EXIT PORTAL " << endl;
        cout << "CHOOSE OPTION : ";

        int userOpt;
        cin >> userOpt;
        cout << "YOU CHOOSED " << userOpt << endl;
        if (userOpt == 1)
        {
            // admin code
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "ADMIN MENU: LOGIN ATTEMPT" << i + 1 << "\n";
                cout << "ENTER YOUR USERNAME : ";
                string username;
                cin >> username;
                cout << "ENTER YOUR PASSWORD : ";
                string password;
                cin >> password;
                if (username == "admin" && password == "1234")
                {
                    while (true)
                    {
                        system("cls");
                        cout << "LOGIN SUCCESSFUL. \n";
                        cout << "1-SHOW ALL STUDENTS .\n";
                        cout << "2-SEARCH STUDENT. \n";
                        cout << "3-UPDATE STUDENT RECORD .\n";
                        cout << "4-GENERATE MERIT LIST .\n";
                        cout << "5-DELETE STUDENT RECORD .\n";
                        cout << "6-LOGOUT \n";
                        cout << "CHOOSE YOUR OPTION : ";
                        string adminopt;
                        cin >> adminopt;
                        if (adminopt == "1")
                        {
                            system("cls");
                            cout << "Name\tAge\tMatric\tInter\tECAT\tP1\tP2\tP3\n";
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << "\t\n";
                                }
                            }
                        }
                        else if (adminopt == "2")
                        {
                            // SEARCH STUDENT BY NAME
                            cout << "ENTER THE NAME OF STUDENT YOU WANT TO SEARCH : ";
                            string search_name;
                            cin >> search_name;
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == search_name)
                                {
                                    found = true;
                                    found_index = i;
                                }
                            }
                            if (found)
                            {
                                cout << "Name\tAge\tMatric\tInter\tECAT\tP1\tP2\tP3\n";
                                cout << nameArray[found_index] << "\t" << ageArray[found_index] << "\t" << matricArray[found_index] << "\t" << interArray[found_index] << "\t"
                                     << ecatArray[found_index] << "\t" << pref1Array[found_index] << "\t" << pref2Array[found_index] << "\t" << pref3Array[found_index] << "\t\n";
                            }
                            else
                            {
                                cout << " NO RECORD FOUND AGAINST THIS NAME " << search_name << endl;
                            }
                        }
                        else if (adminopt == "3")
                        {
                            //UPDATE STUDENT RECORD
                            cout << "ENTER THE NAME OF STUDENT YOU WANT TO UPDATE : ";
                            string search_name;
                            cin >> search_name;
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == search_name)
                                {
                                    found = true;
                                    found_index = i;
                                }
                            }
                            if (found == true)
                            {
                                cout << "-------OLD RECORD------\n";
                                cout << "Name\tAge\tMatric\tInter\tECAT\tP1\tP2\tP3\n";
                                cout << nameArray[found_index] << "\t" << ageArray[found_index] << "\t" << matricArray[found_index] << "\t" << interArray[found_index] << "\t"
                                     << ecatArray[found_index] << "\t" << pref1Array[found_index] << "\t" << pref2Array[found_index] << "\t" << pref3Array[found_index] << "\t\n";

                                cout << "ENTER NEW RECORD .\n";
                                cout << "ENTER YOUR NAME : ";
                                string name;
                                cin >> name;
                                cout << "ENTER YOUR AGE : ";
                                int age;
                                cin >> age;
                                cout << "ENTER YOUR MATRIC MARKS : ";
                                float matric;
                                cin >> matric;
                                cout << "ENTER YOUR INTER MARKS : ";
                                float inter;
                                cin >> inter;
                                cout << "ENTER YOUR ECAT MARKS : ";
                                float ecat;
                                cin >> ecat;
                                cout << "ENTER YOUR PREFRENCES CS,SE or IT.\n";
                                cout << "ENTER YOUR 1ST PREFRENCE : ";
                                string pref1;
                                cin >> pref1;
                                cout << "ENTER YOUR 2ND PREFRENCE : ";
                                string pref2;
                                cin >> pref2;
                                cout << "ENTER YOUR 3RD PREFRENCE : ";
                                string pref3;
                                cin >> pref3;

                                nameArray[found_index] = name;
                                ageArray[found_index] = age;
                                matricArray[found_index] = matric;
                                interArray[found_index] = inter;
                                ecatArray[found_index] = ecat;
                                pref1Array[found_index] = pref1;
                                pref2Array[found_index] = pref2;
                                pref3Array[found_index] = pref3;
                            }
                            else
                            {
                                cout << "NO RECORD FOUND \n";
                            }
                        }
                        else if (adminopt == "4")
                        {
                            // generate list
                            system("cls");
                            for (int i = 0; i < index; i++)
                            {
                                float aggregate = matricArray[i] / 1100.0 * 100.0 * 0.30 + interArray[i] / 1200.0 * 100.0 * 0.40 + ecatArray[i] / 400.0 * 100.0 * 0.30;
                                aggregateArray[i] = aggregate;
                            }

                            // display merit list (Sorted data)
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i; j < index; j++)
                                {
                                    if (aggregateArray[i] < aggregateArray[j])
                                    {
                                        // SWAPPING AGGREGATE
                                        float temp1 = aggregateArray[j];
                                        aggregateArray[j] = aggregateArray[i];
                                        aggregateArray[i] = temp1;

                                        // SWAPPING NAMES
                                        string temp2 = nameArray[j];
                                        nameArray[j] = nameArray[i];
                                        nameArray[i] = temp2;

                                        // SWAPPING AGE
                                        int temp3 = ageArray[j];
                                        ageArray[j] = ageArray[i];
                                        ageArray[i] = temp3;

                                        // SWAPPING MATRIC
                                        float temp4 = matricArray[j];
                                        matricArray[j] = matricArray[i];
                                        matricArray[i] = temp4;

                                        // SWAPPING INTER
                                        float temp5 = interArray[j];
                                        interArray[j] = interArray[i];
                                        interArray[i] = temp5;

                                        // SWAPPING ECAT
                                        float temp6 = ecatArray[j];
                                        ecatArray[j] = ecatArray[i];
                                        ecatArray[i] = temp6;

                                        // SWAPPING PREF1
                                        string temp7 = pref1Array[j];
                                        pref1Array[j] = pref1Array[i];
                                        pref1Array[i] = temp7;

                                        // SWAPPING PREF2
                                        string temp8 = pref2Array[j];
                                        pref2Array[j] = pref2Array[i];
                                        pref2Array[i] = temp8;

                                        // SWAPPING PREF3
                                        string temp9 = pref3Array[j];
                                        pref3Array[j] = pref3Array[i];
                                        pref3Array[i] = temp9;
                                    }
                                }
                            }
                            cout << "NAME\tAGE\tAGGREGATE\n";
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggregateArray[i] << "\n";
                                }
                            }
                            cout << "\n ADMITTED STUDENTS .\n";
                            cout << "1 SEAT FOR CS , 2 SEATS FOR SE , 1 SEAT FOR IT...\n";
                            int cs = 0;
                            int se = 0;
                            int it = 0;
                            for (int i = 0; i < index; i++)
                            {
                                // Preference 1
                                if (pref1Array[i] == "CS" && cs < 1)
                                {
                                    cout << nameArray[i] << " ADMITTED IN CS\n";
                                    cs++;
                                }
                                else if (pref1Array[i] == "SE" && se < 2)
                                {
                                    cout << nameArray[i] << " ADMITTED IN SE\n";
                                    se++;
                                }
                                else if (pref1Array[i] == "IT" && it < 1)
                                {
                                    cout << nameArray[i] << " ADMITTED IN IT\n";
                                    it++;
                                }

                                // Preference 2
                                else if (pref2Array[i] == "CS" && cs < 1)
                                {
                                    cout << nameArray[i] << " ADMITTED IN CS\n";
                                    cs++;
                                }
                                else if (pref2Array[i] == "SE" && se < 2)
                                {
                                    cout << nameArray[i] << " ADMITTED IN SE\n";
                                    se++;
                                }
                                else if (pref2Array[i] == "IT" && it < 1)
                                {
                                    cout << nameArray[i] << " ADMITTED IN IT\n";
                                    it++;
                                }

                                // Preference 3
                                else if (pref3Array[i] == "CS" && cs < 1)
                                {
                                    cout << nameArray[i] << " ADMITTED IN CS \n";
                                    cs++;
                                }
                                else if (pref3Array[i] == "SE" && se < 2)
                                {
                                    cout << nameArray[i] << " ADMITTED IN SE \n";
                                    se++;
                                }
                                else if (pref3Array[i] == "IT" && it < 1)
                                {
                                    cout << nameArray[i] << " ADMITTED IN IT\n";
                                    it++;
                                }

                                // NOT ADMITTED
                                else
                                {
                                    cout << nameArray[i] << " NOT ADMITTED \n";
                                }
                            }
                        }
                        else if (adminopt == "5")
                        {
                            // DELETE RECORD BY NAME
                            cout << "ENTER THE NAME OF STUDENT YOU WANT TO DELETE : ";
                            string search_name;
                            cin >> search_name;
                            bool found = false;
                            int found_index = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == search_name)
                                {
                                    found = true;
                                    found_index = i;
                                }
                            }
                            if (found)
                            {
                                nameArray[found_index] = "";
                                ageArray[found_index] = 0;
                                matricArray[found_index] = 0;
                                interArray[found_index] = 0;
                                ecatArray[found_index] = 0;
                                pref1Array[found_index] = "";
                                pref2Array[found_index] = "";
                                pref3Array[found_index] = "";
                            }
                        }
                        else if (adminopt == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "SELECT CORRECT OPTION .\n";
                        }
                        cout << "PRESS ANY KEY TO CONTINUE ";
                        getch();
                    }
                    cout << "PRESS ANY KEY TO CONTINUE ";
                    getch();
                    break;
                }
                else
                {
                    cout << " USERNAME OR PASSWORD IS INVALID .\n";
                }
                cout << "PRESS ANY KEY TO CONTINUE .";
                getch();
            }
        }
        else if (userOpt == 2)
        {
            // STUDENT PORTAL
            system("cls");
            cout << "\nWELCOME TO UMS STUDENT MENU.\n";
            cout << "ENTER YOUR NAME : ";
            string name;
            cin >> name;
            cout << "ENTER YOUR AGE : ";
            int age;
            cin >> age;
            cout << "ENTER YOUR MATRIC MARKS : ";
            float matric;
            cin >> matric;
            cout << "ENTER YOUR INTER MARKS : ";
            float inter;
            cin >> inter;
            cout << "ENTER YOUR ECAT MARKS : ";
            float ecat;
            cin >> ecat;
            cout << "ENTER YOUR PREFRENCES CS,SE or IT.\n";
            cout << "ENTER YOUR 1ST PREFRENCE : ";
            string pref1;
            cin >> pref1;
            cout << "ENTER YOUR 2ND PREFRENCE : ";
            string pref2;
            cin >> pref2;
            cout << "ENTER YOUR 3RD PREFRENCE : ";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = inter;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;

            index += 1;

            cout << "YOUR DATA HAS BEEN ADDED SUCCESSFULY .\n";
            cout << "PRESS ANY KEY TO CONTINUE";
            getch();
        }
        else if (userOpt == 3)
        {
            break;
        }
        else
        {
            cout << "YOU HAVE ENTERED WRONG OPTION  .";
            getch();
        }
    } // END OF WHILE LOOP
    cout << "\nTHANKS FOR USING THIS SOFTWARE .";
}
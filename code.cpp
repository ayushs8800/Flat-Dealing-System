#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <string.h>
using namespace std;
int count_1 = 10;
int count_2 = 10;
int count_3 = 10;
int d = 0;
class node_1
{
public:
    int data;
    node_1 *next;
} *head_1 = NULL;
class flat
{
    int room_no;
    string fname;
    string lname;
    string address;
    string phone;

public:
    void main_menu();     // to dispay the main menu
    void pricelist();     // to display the price menu of flats
    void add();           // to book a room
    void displayvac();    // to display vacant flats
    void display();       // to display the particular customer record
    void rooms();         // to display alloted rooms
    void edit();          // to edit the customer record
    int check(int);       // to check room status
    void modify(int);     // to modify the record
    int delete_rec(int);  // to delete the record
    void Insert(int);     // to create linked list
    void displaybooked(); // to display booked flats
    void deleteNode(int); // to delete the record from linked list
};
void flat::displayvac()
{
    cout << "\n\t"
         << "Available 1 BHK flats = " << count_1;
    cout << "\n\t"
         << "Available 2 BHK flats = " << count_2;
    cout << "\n\t"
         << "Available 3 BHK flats = " << count_3 << endl;
}
void flat::main_menu()
{
    system("cls");
    cout << endl
         << endl
         << "\t \t |*WELCOME TO SAINI FLAT DEALERS|"
         << endl
         << endl;
    cout << endl;
    int n, p, re, o;
    while (n != 4)
    {
        cout << "\n PLEASE TELL US ABOUT YOURSELF: \n 1.NEW USER \n2.REGISTERED USER \n 3.OWNER \n 4.QUIT " << endl
             << " ";
        cin >> n;
        system("cls");
        switch (n)
        {
        case 1:
            cout << "\n\t WELCOME SIR/MAM" << endl;
            cout << "\n\t\t SOCIETY - SAINI ENCLAVES \n\t\tADDRESS - DWARKA SECTOR -24" << endl;
            cout << "\n\n HOW CAN WE HELP YOU " << endl;
            do
            {
                cout << "\n\n\t PLEASE SELECT AMONG THESE :" << endl
                     << endl;
                cout << " 1.DISPLAY VACANT FLAT INFORMATION";
                cout << "\n 2.DISPLAY PRICE MENU OF ALL FLATS";
                cout << "\n 3.DISPLAY BOOKED FLATS";
                cout << "\n 4.BOOK AN AVAILABLE FLAT";
                cout << "\n 5.EXIT" << endl;
                cout << " ";
                cin >> p;
                system("cls");
                cout << endl;
                switch (p)
                {
                case 1:
                    displayvac();
                    cout << "\n Press any key to continue!!";
                    getch();
                    break;
                case 2:
                    pricelist();
                    break;
                case 3:
                    displaybooked();
                    break;
                case 4:
                    add();
                    break;
                case 5:
                    cout << "\n THANKS FOR VISITING" << endl;
                    break;
                default:
                    cout << "SORRY !, YOU MADE A WRONNG CHOICE" << endl;
                    break;
                }
            } while (p != 5);
            break;
        case 2:
            cout << "\n WELCOME AGAIN SIR/MAM" << endl;
            cout << "\n GLAD TO SEE YOU" << endl;
            do
            {
                cout << "\n\n\t Please select your choice" << endl
                     << endl;
                cout << " 1.Edit Details";
                cout << "\n 2.Display Details";
                cout << "\n 3.Book A New Flat";
                cout << "\n 4.Exit";
                cout << "\n ";
                cin >> re;
                system("cls");
                switch (re)
                {
                case 1:
                    edit();
                    break;
                case 2:
                    display();
                    break;
                case 3:
                    add();
                    break;
                case 4:
                    cout << "\n THANKS FOR VISITING" << endl;
                    break;
                default:
                    cout << "SORRY !, YOU MADE A WRONNG CHOICE" << endl;
                    break;
                }
            } while (re != 4);
            break;
        case 3:
            int i;
            char ch1, password[10];
            cout << "Enter your password : ";
            for (i = 0; i < 10; i++)
            {
                ch1 = getch();
                password[i] = ch1;
                if (ch1 != 13) // 13 is ASCII of Enter key
                    printf("*");
                if (ch1 == 13)
                    break;
            }
            password[i] = '\0';
            if ((strcmp(password, "031929")) == 0)
            {
                cout << "\n\nPassword matched :-) ";
                cout << "\n\n\tWHAT DO YOU WANT SIR ? " << endl
                     << endl;
                do
                {
                    cout << "\n 1.Show all flats status";
                    cout << "\n 2.Show a particular record";
                    cout << "\n 3.Delete or modify a record";
                    cout << "\n 4.Show available flats";
                    cout << "\n 5.Show booked flats";
                    cout << "\n 6.Exit";
                    cout << "\n ";
                    cin >> o;
                    system("cls");
                    switch (o)
                    {
                    case 1:
                        rooms();
                        break;
                    case 2:
                        display();
                        break;
                    case 3:
                        edit();
                        break;
                    case 4:
                        displayvac();
                        break;
                    case 5:
                        displaybooked();
                        break;
                    case 6:
                        break;
                    default:
                        cout << "\n SORRY, YOU MADE A WRONG CHOICE!!";
                        break;
                    }
                } while (o != 6);
                break;
            }
            else
            {
                cout << "\n\nSorry! Wrong Password !!";
                break;
            }
        case 4:
            cout << "\n THANKS FOR VISITING " << endl;
            break;
        default:
            cout << "SORRY !, YOU MADE A WRONG CHOICE " << endl;
            break;
        }
    }
}
void flat::pricelist()
{
    cout << "\nHere's the menu of flats we are offering you : ";
    cout << "\n Room No.\tCategory\t Type \t Area(sq. ft)\tPrice(Rs.)";
    cout << "\n 100-102\t1 BHK\t\tFront Facing\t 683\t\t30 Lac";
    cout << "\n 103-105\t1 BHK\t\tBack Facing\t 683\t\t28 Lac";
    cout << "\n 106-109\t1 BHK Corner\t 2 side open\t 703\t\t32 Lac";
    cout << "\n 200-202\t2 BHK\t\tFront Facing\t 875\t\t40 Lac";
    cout << "\n 203-205\t2 BHK\t\tBack Facing\t 875\t\t38 Lac";
    cout << "\n 206-209\t2 BHK Corner\t 2 side open\t 959\t\t45 Lac";
    cout << "\n 300-302\t3 BHK\t\tFront Facing\t 1314\t\t55 Lac";
    cout << "\n 303-305\t3 BHK\t\tBack Facing\t 1314\t\t53 Lac";
    cout << "\n 306-309\t3 BHK Corner\t 2 side open\t 1398\t\t60 Lac";
}
void flat::add()
{
    system("cls");
    int r, flag;
    ofstream fout("Record.dat", ios::app);
    cout << "\n Enter Room Number";
    cout << "\n **";
    cout << "\n\n Room no:\n From 100-109 for 1 BHK Flats \n From 200-209 for 2 BHK Flats \n From 300-309 for 3 BHK Flats \n ";
    cin >> r;
    if ((r >= 100 && r <= 109) || (r >= 200 && r <= 209) || (r >= 300 && r <= 309))
    {
        flag = check(r);
        if (flag == 1)
            cout << "\n Sorry..!!!Room is already booked";
        else
        {
            room_no = r;
            Insert(r);
            cout << "\n Please provide your details\n";
            cout << " First Name: ";
            cin >> fname;
            cout << " Last Name: ";
            cin >> lname;
            cout << " Address: ";
            cin >> address;
            cout << " Phone No: ";
            cin >> phone;
            d++;
            fout.write((char *)this, sizeof(flat));
            cout << "\n CONGRATS !!! Room is put on hold !!!";
        }
        cout << "\n Press any key to continue!!";
        getch();
        fout.close();
        if (flag != 1)
        {
            if (r >= 100 && r <= 109)
            {
                count_1 -= 1;
            }
            if (r >= 200 && r <= 209)
            {
                count_2 -= 1;
            }
            if (r >= 300 && r <= 309)
            {
                count_3 -= 1;
            }
        }
    }
    else
    {
        cout << "\n Wrong room number entered !!\n";
        getch();
    }
}
void flat::display()
{
    system("cls");
    ifstream fin("Record.dat", ios::in);
    int r, flag;
    cout << "\n Enter room no: ";
    cin >> r;
    while (!fin.eof())
    {
        fin.read((char *)this, sizeof(flat));
        if (room_no == r)
        {
            system("cls");
            cout << "\n Customer Details";
            cout << "\n **";
            cout << "\n\n Room no: " << room_no;
            cout << "\n Name: " << fname << " " << lname;
            cout << "\n Address: " << address;
            cout << "\n Phone no: " << phone;
            flag = 1;
            break;
        }
        else
            flag = 0;
    }
    if (flag == 0)
        cout << "\n Sorry Room no. not found or vacant!!";
    cout << "\n\n Press any key to continue!!";
    getch();
    fin.close();
}
void flat::rooms()
{
    system("cls");
    ifstream fin("Record.dat", ios::in);
    cout << "\n\t\t\tList Of Rooms Allotted in a manner in which they are Booked";
    cout << "\n\t\t\t***";
    cout << "\n\n Room No.\tName\t\tAddress\t\tPhone No.\n";
    while (!fin.eof())
    {
        fin.read((char *)this, sizeof(flat));
        cout << "\n\n " << room_no << "\t\t" << fname << " " << lname;
        cout << "\t\t" << address << "\t\t" << phone;
    }
    cout << "\n\n\n\t\t\tPress any key to continue!!";
    getch();
    fin.close();
}
int flat::check(int r)
{
    int flag = 0;
    node_1 *temp = head_1;
    cout << "\n";
    while (temp != NULL)
    {
        if (temp->data == r)
        {
            flag = 1;
            break;
        }
        temp = temp->next;
    }
    // delete temp;
    return (flag);
}
void flat::edit()
{
    system("cls");
    int choice, r;
    cout << "\n EDIT MENU";
    cout << "\n ****";
    cout << "\n\n 1.Modify Customer Record";
    cout << "\n 2.Delete Customer Record";
    cout << "\n 3.Exit";
    cout << "\n Enter your choice: ";
    cin >> choice;
    system("cls");
    switch (choice)
    {
    case 1:
        cout << "\n Enter room no: ";
        cin >> r;
        modify(r);
        break;
    case 2:
        cout << "\n Enter room no: ";
        cin >> r;
        int c;
        if (d == 0)
        {
            deleteNode(r);
            d++;
        }
        else
        {
            c = delete_rec(r);
            if (c == 1)
            {
                deleteNode(r);
                cout << "\nRecord has been successfully deleted !!\n";
                if (r >= 100 && r <= 109)
                {
                    count_1 += 1;
                }
                if (r >= 200 && r <= 209)
                {
                    count_2 += 1;
                }
                if (r >= 300 && r <= 309)
                {
                    count_3 += 1;
                }
            }
        }
        break;
    case 3:
        break;
    default:
        cout << "\n Wrong Choice!!";
    }
    cout << "\n Press any key to continue!!!";
    getch();
}
void flat::modify(int r)
{
    long pos, flag = 0;
    fstream file("Record.dat", ios::in | ios::out | ios::binary);
    while (!file.eof())
    {
        pos = file.tellg();
        file.read((char *)this, sizeof(flat));
        if (room_no == r)
        {
            cout << "\n Enter New Details";
            cout << "\n *";
            cout << "\n First Name: ";
            cin >> fname;
            cout << "\n Last Name: ";
            cin >> lname;
            cout << " Address: ";
            cin >> address;
            cout << " Phone no: ";
            cin >> phone;
            file.seekg(pos);
            file.write((char *)this, sizeof(flat));
            cout << "\n Record is modified!!";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "\n Sorry Room no. not found or vacant!!";
    file.close();
}
int flat::delete_rec(int r)
{
    int flag = 0, c = 0;
    char ch;
    ifstream fin("Record.dat", ios::in);
    ofstream fout("temp.dat", ios::out);
    fin.seekg(0);
    while (!fin.eof())
    {
        fin.read((char *)this, sizeof(flat));
        if (room_no == r)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "Sorry ! Room No. not found (is vacant) ";
        while (!fin.eof())
        {
            fout.write((char *)this, sizeof(flat));
        }
    }
    if (flag == 1)
    {
        cout << "\n Name: " << fname << " " << lname;
        cout << "\n Address: " << address;
        cout << "\n Phone No: " << phone;
        cout << "\n\n Do you want to delete this record(y/n): ";
        cin >> ch;
        if (ch == 'n' || ch == 'N')
        {
            fout.write((char *)this, sizeof(flat));
        }
        else if (ch == 'y' || ch == 'Y')
        {
            while (!fin.eof())
            {
                if (room_no != r)
                {
                    fout.write((char *)this, sizeof(flat));
                }
            }
            c = 1;
        }
        else
        {
            cout << "Wrong choice ";
        }
    }
    fin.close();
    fout.close();
    remove("Record.dat");
    rename("temp.dat", "Record.dat");
    return c;
}
void flat::deleteNode(int key)
{
    // Store head node
    node_1 *temp = head_1;
    node_1 *prev = NULL;
    // If head node itself holds
    // the key to be deleted
    if (temp != NULL && temp->data == key)
    {
        head_1 = head_1->next; // Changed head
        delete temp;
        // free old head
        return;
    }
    // Else Search for the key to be deleted,
    // keep track of the previous node as we
    // need to change 'prev->next' */
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    // If key was not present in linked list
    if (temp == NULL)
    {
        cout << "\n THERE IS NO FLAT BOOKED AT ALL!!\n";
        return;
    }
    // Unlink the node from linked list
    prev->next = temp->next;
    // Free memory
    delete temp;
}
void flat::Insert(int new_data)
{
    node_1 *new_node = new node_1;
    new_node->data = new_data;
    new_node->next = head_1;
    head_1 = new_node;
}
void flat::displaybooked()
{
    int ch_1 = 0, ch_2 = 0, ch_3 = 0;
    int checkk_1 = 0, checkk_2 = 0, checkk_3 = 0;
    node_1 *temp = head_1;
    while (temp != NULL)
    {
        if (temp->data >= 100 && temp->data <= 109)
        {
            if (ch_1 == 0)
            {
                cout << "\n 1 BHK Booked Flats:";
                ch_1 = 1;
            }
            cout << " " << temp->data << " ";
            checkk_1++;
        }
        if (temp->data >= 200 && temp->data <= 209)
        {
            if (ch_2 == 0)
            {
                cout << "\n 2 BHK Booked Flats:";
                ch_2 = 1;
            }
            cout << " " << temp->data << " ";
            checkk_2++;
        }
        if (temp->data >= 300 && temp->data <= 309)
        {
            if (ch_3 == 0)
            {
                cout << "\n 3 BHK Booked Flats:";
                ch_3 = 1;
            }
            cout << " " << temp->data << " ";
            checkk_3++;
        }
        temp = temp->next;
    }
    delete temp;
    if (checkk_1 == 0)
        cout << "\n ALL 1 BHK FLATS ARE AVAIALABLE";
    if (checkk_2 == 0)
        cout << "\n ALL 2 BHK FLATS ARE AVAIALABLE";
    if (checkk_3 == 0)
        cout << "\n ALL 3 BHK FLATS ARE AVAIALABLE\n";
    cout << "\n Press enter to continue...\n";
    getch();
}
int main()
{
    // remove("Record.dat");
    flat f;
    system("cls");
    cout << "\n\t\t\t**";
    cout << "\n\t\t\t* FLAT DEALING PROJECT *";
    cout << "\n\t\t\t**";
    cout << "\n\n\n\n\t\tMade By:";
    cout << "\n\t\t Gaurav Saini - 2k19/SE/044 ";
    cout << "\n\t\t Krish Saini - 2k19/SE/063 ";
    cout << "\n\n\n\n\n\t\t\t\tPress any key to continue!!";
    getch();
    f.main_menu();
    getch();
    return 0;
}

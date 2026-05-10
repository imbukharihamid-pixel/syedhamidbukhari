#include <iostream>
using namespace std;

int id[100];
string design[100];
float price[100];
int stock[100];
int totalTiles = 0;
int soldTiles[100];
int soldCount = 0;
string ownerPass = "3567";
string customerPass = "1234";

void addTile() {
    id[totalTiles] = totalTiles + 1;
    cout << "Enter Design: ";
    cin >> design[totalTiles];

    cout << "Enter Price: ";
    cin >> price[totalTiles];

    cout << "Enter Stock: ";
    cin >> stock[totalTiles];

    totalTiles++;

    cout << "Tile Added Successfully!\n";
}

void viewStock() {
    cout << "\n--- STOCK ---\n";
    for (int i = 0; i < totalTiles; i++) {
        cout << "ID: " << id[i]
             << " | Design: " << design[i]
             << " | Price: " << price[i]
             << " | Stock: " << stock[i] << endl;
    }
}

void viewSales() {
    cout << "\n--- SALES ---\n";

    if (soldCount == 0) {
        cout << "No sales yet!\n";
    }

    for (int i = 0; i < soldCount; i++) {
        cout << "Sold Tile ID: " << soldTiles[i] << endl;
    }
}
void searchTile() {
    string s;
    cout << "Enter Design: ";
    cin >> s;

    int found = 0;

    for (int i = 0; i < totalTiles; i++) {
        if (design[i] == s) {
            cout << "Found -> ID: " << id[i]
                 << " | Price: " << price[i]
                 << " | Stock: " << stock[i] << endl;
            found = 1;
        }
    }
    if (found == 0) {
        cout << "Tile Not Found!\n";
    }
}
void buyTile() {
    int searchId;
    cout << "Enter Tile ID: ";
    cin >> searchId;
    int found = 0;
    for (int i = 0; i < totalTiles; i++) {
        if (id[i] == searchId) {
            found = 1;

            if (stock[i] > 0) {
                float finalPrice = price[i];

                if (price[i] > 1000) {
                    finalPrice = price[i] - (price[i] * 0.10);
                    cout << "10% Discount Applied!\n";
                }

                stock[i]--;

                soldTiles[soldCount] = searchId;
                soldCount++;

                cout << "\n===== BILL =====\n";
                cout << "Tile: " << design[i] << endl;
                cout << "Original Price: " << price[i] << endl;
                cout << "Final Price: " << finalPrice << endl;
                cout << "Purchase Successful!\n";
            }
            else {
                cout << "Out of Stock!\n";
            }
        }
    }

    if (found == 0) {
        cout << "Tile Not Found!\n";
    }
}
int main() {

    int choice;

    while (true) {
        cout << "\n===== TILE FACTORY SYSTEM =====\n";
        cout << "1. Owner Login\n";
        cout << "2. Customer Login\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
       
        if (choice == 1) {
            string pass;
            cout << "Enter Owner Password: ";
            cin >> pass;
            if (pass == ownerPass) {
                cout << "Owner Login Successful!\n";

                int op;
                while (true) {
                    cout << "\n--- OWNER MENU ---\n";
                    cout << "1. Add Tile\n";
                    cout << "2. View Stock\n";
                    cout << "3. View Sales\n";
                    cout << "4. Exit Owner Menu\n";
                    cout << "Enter choice: ";
                    cin >> op;

                    if (op == 1) addTile();
                    else if (op == 2) viewStock();
                    else if (op == 3) viewSales();
                    else if (op == 4) break;
                    else cout << "Invalid Option!\n";
                }
            }
            else {
                cout << "Wrong Password!\n";
            }
        }
        else if (choice == 2) {
            string pass;
            cout << "Enter Customer Password: ";
            cin >> pass;

            if (pass == customerPass) {
                cout << "Customer Login Successful!\n";

                int cp;
                while (true) {
                    cout << "\n--- CUSTOMER MENU ---\n";
                    cout << "1. View Tiles\n";
                    cout << "2. Search Tile\n";
                    cout << "3. Buy Tile\n";
                    cout << "4. Exit\n";
                    cout << "Enter choice: ";
                    cin >> cp;

                    if (cp == 1) viewStock();
                    else if (cp == 2) searchTile();
                    else if (cp == 3) buyTile();
                    else if (cp == 4) break;
                    else cout << "Invalid Option!\n";
                }
            }
            else {
                cout << "Wrong Password!\n";
            }
        }

        else if (choice == 3) {
            cout << "Exiting System...\n";
            break;
        }
        else {
            cout << "Invalid Choice!\n";
        }
    }
    return 0;
}
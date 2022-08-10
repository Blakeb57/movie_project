#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include <cstdlib>
#include "product.h"
using namespace std;

int product_menu();

int main()
{
    ifstream ifs;
    ofstream ofs;
    product *tmp;
    list<product*> products;
    list<product*>::iterator p;
    string word;
    int choice = 0;

    ifs.open("product.txt");
    if(ifs.fail())
    {
        cout << "Error, no file input: " << endl;
        return 1;
    }

    while(ifs >> word)
    {
        if(ifs.eof())
        {
            break;
        }

        if(word == "| Tickets |")
        {
            tmp = new tickets;
            tmp -> input(ifs);
            products.push_back(tmp);
        }
        else if(word == "| Meal |")
        {
            tmp = new meals;
            tmp -> input(ifs);
            products.push_back(tmp);
        }
        else if(word == "| Drink |")
        {
            tmp = new drinks;
            tmp -> input(ifs);
            products.push_back(tmp);
        }
        else if(word == "| Candy |")
        {
            tmp = new candy;
            tmp -> input(ifs);
            products.push_back(tmp);
        }
        else if(word == "| Popcorn |")
        {
            tmp = new popcorn;
            tmp -> input(ifs);
            products.push_back(tmp);
        }
    }
    ifs.close();

    do
    {
        choice = product_menu();
        switch(choice)
        {
            case 1:
                tmp = new tickets;
                cout << "| Tickets |" << endl;
                tmp -> input(cin);
                products.push_back(tmp);
                break;

            case 2:
                tmp = new meals;
                cout << "| Meal |" << endl;
                tmp -> input(cin);
                products.push_back(tmp);
                break;

            case 3:
                tmp = new drinks;
                cout << "| Drink |" << endl;
                tmp -> input(cin);
                products.push_back(tmp);
                break;

            case 4:
                tmp = new candy;
                cout << "| Candy |" << endl;
                tmp -> input(cin);
                products.push_back(tmp);
                break;

            case 5:
                tmp = new popcorn;
                cout << "| Popcorn |" << endl;
                tmp -> input(cin);
                products.push_back(tmp);
                break;
                
            case 6:
                cout << endl; 
                p = products.begin();
                while(p != products.end())
                {
                    (*p) -> output(cout);
                    p++;
                }
                cout << endl;
                break;

            case 7:
                cout << "We hope you enjoyed your movie experience!" << endl;
                break;

            default:
                cout << "Sorry for the inconvenience, but that isn't a valid option." << endl;
                break;
        }
    } 
    while(choice != 7);
    
    ofs.open("product.txt");
    if(!ofs.fail())
    {
        p = products.begin();
        while(p != products.end())
        {
            (*p) -> output(ofs);
            p++;
        }
        ofs.close();
    }

    return 0;
}

int product_menu()
{
    int select;

    cout << endl;
    cout << "Welcome to the movies!" << endl;
    cout << "Please enjoy yourself, and to select one of the following options just enter its corrosponding number!" << endl;
    cout << "| 1. Movie Tickets |" << endl;
    cout << "| 2. Meals for your movie |" << endl;
    cout << "| 3. Drinks for your movie |" << endl;
    cout << "| 4. Candy for your movie |" << endl;
    cout << "| 5. Popcorn for your movie |" << endl;
    cout << "| 6. Show all you have picked |" << endl;
    cout << "| 7. Leave the movie theatre |" << endl;
    cin >> select;
    return select;
}
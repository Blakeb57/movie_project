#include <iostream>
#include <string>
#include <cctype>
#include "product.h"

using namespace std;

popcorn::popcorn()
{

}

/*
// Case insensitive compare 
int product::compare(string s1, const char *s2)
{
    int n = 0;
    while(s1[n] != '\0') 
    {
        if(toupper(s1[n]) < toupper(*s2))
        {
            return -1;
        }

        if(toupper(s1[n]) > toupper(*s2))
        { 
            return 1;
        }
        ++n; ++s2;
    }
    return 0;
}
*/
void popcorn::input(istream &ins)
{
    // checks if input is from terminal or from file
    string line;
    if(&ins == &cin)
    {
        // getting the flavor of popcorn someone wants
        cout << "Please choose the flavor of your popcorn from the following options:" << endl;
        cout << "Enter: | Butter Popcorn | Caramel Popcorn | Cheddar Popcorn | Plain Popcorn |: ";
        getline(ins, line);
        getline(ins, flavor);

        cout << flavor << endl;
        //checks if input type matches available type options
        //if(/*compare(flavor, "butter popcorn") || compare(flavor, "caramel popcorn") || compare(flavor, "cheddar popcorn") || compare(flavor, "plain popcorn")*/)
        if(flavor != "butter popcorn" || flavor != " caramel popcorn" || flavor != "cheddar popcorn" || flavor != "plain popcorn")
        {
            cout << endl;
            cout << "| Popcorn selected |: " << flavor << endl;
        }
        else
        {
            cout << endl;
            cout << "The flavor you picked isn't a valid option." << endl;
            cout << "Please choose the flavor of your popcorn from the following options:" << endl;
            cout << "Enter: | Butter Popcorn | Caramel Popcorn | Cheddar Popcorn | Plain Popcorn |: ";
            getline(ins, flavor);
      }
        

        //getting the size of the popcorn someone wants
        cout << "Please choose the size of your popcorn:" << endl;
        cout << "Enter: | Small | Medium | Large |: ";
        ins >> size;

        //checks if input size matches available sizes
        //if(compare(size, "small") || compare(size, "medium") || compare(size, "large"))
        if(size != "small" || size != )
        {
            cout << endl;
            cout << "| Size selected |: " << size << endl;
        }
        else
        {
            cout << endl << endl;
            cout << "The Size you picked isn't a valid option." << endl;
            cout << "Please choose the size of your popcorn:" << endl;
            cout << "Enter: | Small | Medium | Large |: ";
            ins >> size;
        }

        //getting any extras someone wants on their popcorn
        cout << "Please choose any of the folling extras you want on your popcorn:" << endl;
        cout << "Enter: | Extra Butter | Extra Salt | Extra Cheddar | Extra Caramel | Extra Bag | None |: ";
        getline(ins, line);
        getline(ins, extras);

        //checks if input extras matches available extras
        // if(compare(extras, "extra butter") || compare(extras, "extra salt") || compare(extras, "extra cheddar") || compare(extras, "extra caramel") 
        // || compare(extras, "extra bag") || compare(extras, "none"))
        if()
        {
            cout << endl;
            cout << "| Extra selected |: " << extras << endl;
        }
        else
        {
            cout << endl << endl;
            cout << "The Extra you picked isn't a valid option." << endl;
            cout << "Please choose one of the folling extras you want on/with your popcorn:" << endl;
            cout << "Enter: | Extra Butter | Extra Salt | Extra Cheddar | Extra Caramel | Extra Bag | None |: ";
            getline(ins, extras);
        }
    }
    else
    {
        //inputs variables from file
        while(ins.peek() == '\n' || ins.peek() == '\r')
        {
            ins.ignore();
        }
        ins >> flavor;
        ins >> size;
        ins >> extras;
    }
}

void popcorn::output(ostream &outs)
{
    //checks if output is to terminal or to file
    if(&outs == &cout)
    {
        outs << "| Popcorn |" << endl;
        outs << "| Flavor of Popcorn |: " << flavor << endl;
        outs << "| Size of Popcorn |: " << size << endl;
        outs << "| Extras for Popcorn |: " << extras << endl;
    }
    else
    {
        outs << "| Popcorn |" << flavor << size << extras << endl;
    }
}


candy::candy()
{

}

void candy::input(std::istream &ins)
{
    //checks if input is from terminal or file
    if(&ins == &cin)
    {
        //getting the type of candy someone wants and having them choose a flavor depending on candy type
        cout << "Please enter if your looking for a chocolate candy or a fruit flavored candy:" << endl;
        cout << "Enter: | Chocolate | Fruit |: ";
        ins >> type;

        //checks if input type is chocolate candy
        //if(compare(type, "chocolate"))
        if()
        {
            cout << "Please choose from one of the following chocolate candies we provide:" << endl;
            cout << "Enter: | M&M's | Junior Mints | Sno-Caps | Reece's Pieces | Whoppers | Crunch Bites |: ";
            getline(ins, flavor);

            //checks to make sure flavor input matches available flavors for candy type
            // if(compare(flavor, "m&m's") || compare(flavor, "junior mints") || compare(flavor, "sno-caps") ||compare(flavor, "reece's pieces") 
            // || compare(flavor, "whoppers") || compare(flavor, "crunch bites"))
            if()
            {
                cout << endl;
                cout << "| Candy selected |: " << flavor << endl;
            }
            else
            {
                cout << endl << endl;
                cout << "The Flavor you picked isn't a valid option." << endl;
                cout << "Please choose from one of the following fruit flavored candies we provide: " << endl;
                cout << "Enter: | M&M's | Junior Mints | Sno-Caps | Reece's Pieces | Whoppers | Crunch Bites |: ";
                getline(ins, flavor);
            }
        }
        else if()       //if(compare(type, "fruit"))
        {
            cout << "Please choose from one of the following fruit flavored candies we provide: " << endl;
            cout << "Enter: | Skittles | Starburst | Gummy Bears | Mike and Ike | Lemonheads | Twizzlers |: ";
            getline(ins, flavor);

            //checks to make sure flavor input matches available falvors for candy type
            // if(compare(flavor, "skittles") || compare(flavor, "starburt") || compare(flavor, "gummy bears")|| compare(flavor, "mike and ike") 
            // || compare(flavor, "lemonheads") || compare(flavor, "twizzlers"))
            if()
            {
                cout << endl;
                cout << "| Candy Selected |: " << flavor << endl;
            }
            else
            {
                cout << endl << endl;
                cout << "The Flavor you picked isn't a valid option." << endl;
                cout << "Please choose from one of the following fruit flavored candies we provide: " << endl;
                cout << "Enter: | Skittles | Starburst | Gummy Bears | Mike and Ike | Lemonheads | Twizzlers |: ";
                getline(ins,  flavor);
            }
        }
        else
        {
            cout << endl << endl;
            cout << "The Type you picked isn't a valid option." << endl;
            cout << "Please enter if your looking for a chocolate candy or a fruit flavored candy:" << endl;
            cout << "Enter: | Chocolate | Fruit |: ";
            ins >> type;
        }

        //getting the size of candy someone wants
        cout << "Please enter the size you would like your candy:" << endl;
        cout << "Enter: | Small | Medium | Large |: ";
        ins >> size;

        //checks if input size macthes available sizes
        // if(compare(size, "small") || compare(size, "medium") || compare(size, "large"))
        if()
        {
            cout << endl;
            cout << "| Size selected |: " << size << endl;
        }
        else
        {
            cout << endl << endl;
            cout << "The Size you picked isn't a valid option." << endl;
            cout << "Please enter the size you would like your candy:" << endl;
            cout << "Enter: | Small | Medium | Large |: ";
            ins >> size;
        }
    }
    else
    {
        //inputs variables from file
        while(ins.peek() == '\n' || ins.peek() == '\r')
        {
            ins.ignore();
        }
        ins >> type;
        ins >> flavor;
        ins >> size;
    }
}
void candy::output(std::ostream &outs)
{
    //checks if output is to terminal or to file
    if(&outs == &cout)
    {
        outs << "| Candy |" << endl;
        outs << "| Type of Candy |: " << type << endl;
        outs << "| Flavor of Candy |: " << flavor << endl;
        outs << "| Size of Candy |: " << size << endl;
    }
    else
    {
        outs << "| Candy |" << type << flavor << size << endl;
    }
}

drinks::drinks()
{

}

void drinks::input(std::istream &ins)
{
    //checks if input is from terminal or file
    if(&ins == &cin)
    {
        //getting the brand of drink someone wants and depending on brand chosen depends on flavor available
        cout << "We offer both Pepsi and Coke products, Please choose which brand you want:" << endl;
        cout << "Enter: | Pepsi | Coke |: ";
        ins >> brand;

        //checks if input is pepsi product and if so lists avaialble flavors
        //checks if input is coke product and if so lists available flavors
        // if(compare(brand, "pepsi"))
        if()
        {
            cout << endl << endl;
            cout << "Please choose which Pepsi product you want:" << endl;
            cout << "Enter: | Mountain Dew | Diet Mountain Dew | Diet Pepsi | Pepsi | Sierra Mist | Aquafina |: ";
            getline(ins,  flavor);

            //checks if input is one of the available pepsi products
            if(compare(flavor, "mountain dew") || compare(flavor, "diet mountain dew") || compare(flavor, "diet pepsi") || compare(flavor, "pepsi")
            || compare(flavor, "sierra mist") || compare(flavor, "aquafina"))
            {
                cout << endl;
                cout << "| Drink selected |: " << flavor << endl;
            }
            else
            {
                cout << endl << endl;
                cout << "The Flavor you picked isn't a valid option." << endl;
                cout << "Please input the Pepsi product you want:" << endl;
                cout << "Enter: | Mountain Dew | Diet Mountain Dew | Diet Pepsi | Pepsi | Sierra Mist | Aquafina |: ";
                getline(ins, flavor);
            }
        }
        else if()               //if(compare(brand, "coke"))
        {
            cout << "Please choose which Coke product you want:" << endl;
            cout << "Enter: | Coca-Cola | Diet Coke | Sprite | Minute Maid | Dasani | Fanta Orange | Barq's Rootbeer |: ";
            getline(ins, flavor);

            //checks if input is on the available coke products
            // if(compare(flavor, "coca-cola") || compare(flavor, "diet coke") || compare(flavor, "sprite") || compare(flavor, "minute maid") 
            // || compare(flavor, "dasani") || compare(flavor, "fanta orange") || compare(flavor, "barq's rootbeer"))
            if()
            {
                cout << endl;
                cout << "| Drink selected |: " << flavor << endl;
            }
            else
            {
                cout << endl << endl;
                cout << "The Flavor you picked isn't a valid option." << endl;
                cout << "Please input the Coke product you want:" << endl;
                cout << "Enter: | Coca-Cola | Diet Coke | Sprite | Minute Maid | Dasani | Fanta Orange | Barq's Rootbeer |: ";
                getline(ins, flavor);
            }
        }
        else
        {
            cout << endl << endl;
            cout << "The Brand you picked isn't a valid option." << endl;
            cout << "We offer both Pepsi and Coke products, Please choose which brand you want:" << endl;
            cout << "Enter: | Pepsi | Coke |: ";
            ins >> brand;
        }

        //getting if person wants their drink slushied or not, water isn't available to be slushied
        // if(compare(flavor, "coca-cola") || compare(flavor, "diet coke") || compare(flavor, "sprite") || compare(flavor, "minute maid") 
        // || compare(flavor, "fanta orange") || compare(flavor, "barq's rootbeer") || compare(flavor, "mountain dew") || compare(flavor, "diet mountain dew") 
        // || compare(flavor, "diet pepsi") || compare(flavor, "pepsi") || compare(flavor, "sierra mist"))
        if()
        {
            cout << "Please choose if you would like your drink to be a slushi (water excluded):" << endl;
            cout << "Enter: | Slushi Drink | Don't Slushi Drink |: ";
            getline(ins, slushi);

            //checks if slushi input is one of the available options
            // if(compare(slushi, "slushi drink") || compare(slushi, "don't slushi drink"))
            if()
            {
                cout << endl;
                cout << "| Drink slushi type selected |: " << slushi << endl;
            }
            else
            {
                cout << endl << endl;
                cout << "The option you picked isn't a valid option." << endl;
                cout << "Please choose if you would like your drink to be a slushi (water excluded):" << endl;
                cout << "Enter: | Slushi Drink | Don't Slushi Drink |: ";
                getline(ins, slushi);
            }
        }
        else if()//if(compare(flavor, "aquafina") || compare(flavor, "dasani"))
        {
            slushi == "Not Available";
            ins >> slushi;
        }

        //getting if person wants drink in bottle or cup form, the decision alters the possible sizes of drink
        cout << "Please enter if you would like your drink to come in a bottle or in a cup:" << endl;
        cout << "Enter; | Bottled | Cup |: ";
        ins >> bottle_cup;

        //checks if input bottle_cup matches available options
        // if(compare(bottle_cup, "bottled") || compare(bottle_cup, "cup"))
        if()
        {
            cout << endl;
            cout << "| Drink container selected |: " << bottle_cup << endl;
        }
        else
        {
            cout << endl << endl;
            cout << "The option you picked isn't a valid option." << endl;
            cout << "Please enter if you would like your drink to come in a bottle or in a cup:" << endl;
            cout << "Enter: | Bottled | Cup |: ";
            ins >> bottle_cup;
        }

        //checks if bottle_cup is a cup and if so lists the 3 size options
        // if(compare(bottle_cup, "cup"))
        if()
        {
            cout << "Please enter the size you would like your drink to come in:" << endl;
            cout << "Enter: | Small | Medium | Large |: " << endl;
            ins >> size;

            //checks if size matches available size options given
            // if(compare(size, "small") || compare(size, "medium") || compare(size, "large"))
            if()
            {
                cout << endl;
                cout << "| Size selected |: " << size << endl;
            }
            else
            {
                cout << endl << endl;
                cout << "The option you picked isn't a valid option." << endl;
                cout << "Please enter the size you would like your drink to come in:" << endl;
                cout << "Enter: | Small | Medium | Large |: " << endl;
                ins >> size;
            }
        }

        //checks if bottle_cup is a bottle and if so lists the 2 size options
        // if(compare(bottle_cup, "bottled"))
        if()
        {
            cout << "Please enter the size you want your bottled drink to come in, 8oz is our Small bottle and 16oz is our medium:" << endl;
            cout << "Large size is NOT available for bottled drinks:" << endl;
            cout << "Enter: | Small | Medium |: " << endl;
            ins >> size;

            //checks is size matches available size options given
            // if(compare(size, "small") || compare(size, "medium") || compare(size, "large"))
            if()
            {
                cout << endl;
                cout << "| Size selected |: " << size << endl;
            }
            else
            {
                cout << endl << endl;
                cout << "The Size you picked isn't a valid option." << endl;
                cout << "Please enter the size you want your bottled drink to come in, 8oz is our Small bottle and 16oz is our medium:" << endl;
                cout << "Large size is NOT available for bottled drinks:" << endl;
                cout << "Enter: | Small | Medium |: " << endl;
                ins >> size;
            }
        }
    }
    else
    {
        //inputs variables from a file
        while(ins.peek() == '\n' || ins.peek() == '\r')
        {
            ins.ignore();
        }
        ins >> brand;
        ins >> flavor;
        ins >> slushi;
        ins >> bottle_cup;
        ins >> size;
    }
}

void drinks::output(std::ostream &outs)
{
    //checks if output is to terminal or to file
    if(&outs == &cout)
    {
        outs << "| Drink |" << endl;
        outs << "| Brand of drink|: " << brand << endl;
        outs << "| Flavor of drink|: " << flavor << endl;
        outs << "| Is Drink Slushied|: " << slushi << endl;
        outs << "| Is drink bottled or cupped|: " << bottle_cup << endl;
        outs << "| Size of drink|: " << size << endl;
    }
    else
    {
        outs << "| Drink |" << brand << flavor << slushi << bottle_cup << size << endl;
    }
}

meals::meals()
{

}

void meals::input(std::istream &ins)
{
    string line;
    //checks if input is from terminal or from a file
    if(&ins == &cin)
    {
        //getting if a person would want an entree or dessert
        cout << "Please enter if you would like and entree or dessert item:" << endl;
        cout << "Enter: | Entree | Dessert |: ";
        ins >> type;

        //checks if input type matches available type
        // if(compare(type, "entree") || compare(type, "dessert"))
        if()
        {
            cout << endl;
            cout << "| Meal course selected |: " << type << endl;
            
        }
        else
        {
            cout << endl << endl;
            cout << "The Type of meal you picked isn't a valid option." << endl;
            cout << "Please enter if you would like and entree or dessert item:" << endl;
            cout << "Enter: | Entree | Dessert |: ";
            ins >> type;
        }

        //checks if type macthes to meal option entree
        getline(ins, line);
        // if(compare(type, "entree"))
        if()
        {
            cout << "Please choose an Entree from our available options:" << endl;
            cout << "All Entrees come with a side EXCEPT FOR PIZZA!" << endl;
            cout << "Enter: | Pizza | Cheeseburger | Hamburger | Fried Chicken Sandwich | Grilled Chicken Sandwich |: ";
            getline(ins, meal);

            //checks if input meal matches available meals for entrees
            // if(compare(meal, "pizza") || compare(meal, "cheeseburger") || compare(meal, "hamburger") || compare(meal, "fried chicken sandwich") 
            // || compare(meal, "grilled chicken sandwich"))
            if()
            {
                cout << endl;
                cout << "| Meal selected |: " << meal << endl;
            }
            else
            {
                cout << endl << endl;
                cout << "The Entree meal you picked isn't a valid option." << endl;
                cout << "Please choose an Entree from our available options:" << endl;
                cout << "All Entrees come with a side EXCEPT FOR PIZZA!" << endl;
                cout << "Enter: | Pizza | Cheeseburger | Hamburger | Fried Chicken Sandwich | Grilled Chicken Sandwich |: ";
                getline(ins, meal);
            }

            //checks if meal isnt pizza and is so lets the person choose a side for their meal
            // if(compare(meal, "cheeseburger") || compare(meal, "hamburger") || compare(meal, "fried chicken sandwich") 
            // || compare(meal, "grilled chicken sandwich"))
            if()
            {
                cout << "Please choose a side to go with your meal from our available options:" << endl;
                cout << "| Fries | Chips | Mac N Cheese |: ";
                getline(ins, sides);

                //checks if input side matchs available sides
                // if(compare(sides, "fries") || compare(sides, "chips") || compare(sides, "mac n cheese"))
                if()
                {
                    cout << endl;
                    cout << "| Side selected |: " << sides << endl;
                }
                else
                {
                    cout << endl << endl;
                    cout << "The side for your meal that your picked isnt a valid option." << endl;
                    cout << "Please choose a side to go with your meal from our available options:" << endl;
                    cout << "| Fries | Chips | Mac N Cheese |: ";
                    getline(ins, sides);
                }
            }
            else
            {
                sides == "Not Available";
                ins >> sides;
            }
                
            //getting the size of the meal someone wants
            cout << "Please enter the size you would like your meal from our available options:" << endl;
            cout << "| Small | Medium | Large |: ";
            ins >> size;

            //checks if size picked by someone matches available sizes
            // if(compare(size, "small") || compare(size, "medium") || compare(size, "large"))
            if()
            {
                cout << endl;
                cout << "| Size selected |: " << size << endl;
            }
            else
            {
                cout << endl << endl;
                cout << "The size you picked for your meal isn't an available option." << endl;
                cout << "Please enter the size you would like your meal from our available options:" << endl;
                cout << "| Small | Medium | Large |: ";
                ins >> size;
            }
        }
        else if()       //if(compare(type, "dessert"))
        {
            cout << "Please choose a Dessert from our available options:" << endl;
            cout << "Please note that ONLY: Chocolate Ice Cream, Vanilla Ice Cream, Brownies, and Frozen Yogurt are available for extre toppings." << endl;
            cout << "| Chocolate Ice Cream |Vanilla Ice Cream | Brownies | Chocolate Cookies | Chocolate Cupcake | Frozen Yogurt|: ";
            getline(ins, meal);

            //checks if Dessert chosen matches with available desserts
            // if(compare(meal, "chocolate ice cream") || compare(meal, "vanilla ice cream") || compare(meal, "brownies") || compare(meal, "chocolate cookies") 
            // || compare(meal, "chocolate cupcake") || compare(meal, "frozen yogurt"))
            if()
            {
                cout << endl;
                cout << "| Dessert selected |: " << meal << endl;
            }
            else
            {
                cout << endl << endl;
                cout << "The Dessert you picked isn't an available option." << endl;
                cout << "Please choose a Dessert from our available options:" << endl;
                cout << "| Chocolate Ice Cream |Vanilla Ice Cream | Brownies | Chocolate Cookies | Chocolate Cupcake | Frozen Yogurt|: ";
                getline(ins, meal);
            }

            //checks if the dessert chosen by someone is available for extra toppings
            // if(compare(meal, "chocolate ice cream") || compare(meal, "vanilla ice cream") || compare(meal, "brownies") || compare(meal, "frozen yogurt"))
            if()
            {
                cout << "Please enter one extra topping you would like to add to your Dessert, that we have available:" << endl;
                cout << "| Warm Fudge | Warm Caramel | Sprinkles | Chocolate Chips | Peanut Butter |: ";
                getline(ins, sides);

                //checks if input side matches available sides for Dessert
                // if(compare(sides, "warm fudge") || compare(sides, "warm caramel") || compare(sides, "sprinkes") || compare(sides, "chocolate chips") 
                // || compare(sides, "peanut butter"))
                if()
                {
                    cout << endl;
                    cout << "| Topping selected |: " << sides << endl;
                }
                else
                {
                    cout << endl << endl;
                    cout << "The topping you entered for your Dessert isn't an available option." << endl;
                    cout << "Please enter one extra topping you would like to add to your Dessert, that we have available:" << endl;
                    cout << "| Warm Fudge | Warm Caramel | Sprinkles | Chocolate Chips | Peanut Butter |: ";
                    getline(ins, sides);
                }
            }

            //getting the size of the Dessert someone wishes to order, size options vary by Dessert
            cout << "Please enter the size you would like for your Dessert:" << endl;
            cout << "Brownies, Chocolate Cookies, and Chocolate Cupcakes come in only 1 size (medium size specifically)" << endl;
            cout << "Chocolate Ice Cream, Vanilla Ice Cream, and Frozen Yogurt comes in three sizes:" << endl;
            cout << "| Small | Medium | Large |: ";
            ins >> size;

            //checking if Dessert size matches available size options
            // if(compare(meal, "chocolate ice cream") || compare(meal, "vanilla ice cream") || compare(meal, "frozen yogurt"))
            if()
            {
                // if(compare(size, "small") || compare(size, "medium") || compare(size, "large"))
                if()
                {
                    cout << endl;
                    cout << "| Dessert size selected |: " << size << endl;
                }
                else
                {
                    cout << endl << endl;
                    cout << "The size you entered in for your Dessert isn't an available option:" << endl;
                    cout << "Please enter the size you would like for your Dessert:" << endl;
                    cout << "Chocolate Ice Cream, Vanilla Ice Cream, and Frozen Yogurt comes in three sizes:" << endl;
                    cout << "| Small | Medium | Large |: ";
                    ins >> size;
                }
            }

            //checking if Dessert picked is a dessert option that comes only in 1 size
            // if(compare(meal, "brownies") || compare(meal, "chocolate cookies") || compare(meal, "chocolate cupcakes"))
            if()
            {
                size == "medium";
                ins >> size;
            }
        }
    }
    else
    {
        //inputs variables from a file
        while(ins.peek() == '\n' || ins.peek() == '\r')
        {
            ins.ignore();
        }
        ins >> type;
        ins >> meal;
        ins >> sides;
        ins >> size;
    }
}

void meals::output(std::ostream &outs)
{
    //checks if output is to the terminal or to a file
    if(&outs == &cout)
    {
        outs << "| Meal |" << endl;
        outs << "| Entree or Dessert |: " << type << endl;
        outs << "| Food chosen for Meal |: " << meal << endl;
        outs << "| Side/Topping for Meal |: " << sides << endl;
        outs << "| Size of the Meal |: " << size << endl;
    }
    else
    {
        outs << "| Meal |" << type << meal << sides << size;
    }
}

void tickets::input(std::istream &ins)
{
    //checking if input is from terminal or from a file
    string line;
    if(&ins == &cin)
    {
        //getting which movie someone wants to see
        cout << "Please choose which movie you want to get tickets for:" << endl;
        cout << "Enter: | Nope | Minions: The Rise of Gru | Thor: Love and Thunder | Top Gun: Maverick |: ";
        getline(ins, line);
        getline(ins, movie);

        //checking if movie input matches available movie options
        // if(compare(movie, "nope") || compare(movie, "minions: the rise of gru") || compare(movie, "thor: love and thunder") || compare(movie, "top gun: maverick"))
        if()
        {
            cout << endl;
            cout << "| Movie selected |: " << movie << endl;
        }
        else
        {
            cout << endl << endl;
            cout << "The movie you selected is not a valid movie option." << endl;
            cout << "Please choose which movie you want to get tickets for:" << endl;
            cout << "Enter: | Nope | Minions: The Rise of Gru | Thor: Love and Thunder | Top Gun: Maverick |: ";
            getline(ins, line);
            getline(ins, movie);
        }

        //getting what time soneone would want to view the movie they want to see
        cout << "Please choose what movie time you wish to get your tickets for:" << endl;
        cout << "Enter: | 12:00 | 2:30 | 5:00 | 7:30 | 10:00 |: ";
        ins >> time;

        //checking if input for movie time matches available times
        // if(compare(time, "12:00") || compare(time, "2:30") || compare(time, "5:00") || compare(time, "7:30") || compare(time, "10:00"))
        if()
        {
            cout << endl;
            cout << "| Movie time selected |: " << time << endl;
        }
        else
        {
            cout << endl << endl;
            cout << "The movie time you picked for your ticket isn't a valid option." << endl;
            cout << "Please choose what movie time you wish to get your tickets for:" << endl;
            cout << "Enter: | 12:00 | 2:30 | 5:00 | 7:30 | 10:00 |: ";
            ins >> time;
        }

        //getting the viewing experience someone wants to see the movie in
        cout << "Please choose if you would like the Ultrascreen viewing experience or normal viewing experience." << endl;
        cout << "Enter: | Ultrascreen | Normal |: ";
        ins >> luxury;

        //checking if input for viewing experience matches avialble options
        // if(compare(luxury, "ultrascreen") || compare(luxury, "normal"))
        if()
        {
            cout << endl;
            cout << "| Movie experience selected |: " << luxury << endl;
        }
        else
        {
            cout << endl << endl;
            cout << "The viewing experience you chose isn't a valid option." << endl;
            cout << "Please choose if you would like the Ultrascreen viewing experience or normal viewing experience." << endl;
            cout << "Enter: | Ultrascreen | Normal |: ";
            ins >> luxury;
        }

        //getting how many tickets someone wants to get for their movie
        cout << "Please enter how many tickets you would like to get for the movie." << endl;
        cout << "The minimum ticket purchase amount is 1 and the maximum ticket purchase amount is 10: ";
        ins >> amount;

        //checking if the amount of tickets entered is between 1 and 10
        if(amount < 1 || amount > 10)
        {
            cout << endl << endl;
            cout << "The amount of tickets you entered for you movie screening is an invalid amount." << endl;
            cout << "Please enter how many tickets you would like to get for the movie." << endl;
            cout << "The minimum ticket purchase amount is 1 and the maximum ticket purchase amount is 10: ";
            ins >> amount;
        }
    }
    else
    {
        while(ins.peek() == '\n' || ins.peek() == '\r')
        {
            ins.ignore();
        }
        ins >> movie;
        ins >> time;
        ins >> luxury;
        ins >> amount;
    }
}

void tickets::output(std::ostream &outs)
{
    //checks if output is to terminal or to a file
    if(&outs == &cout)
    {
        cout << "| Tickets |" << endl;
        cout << "| Movie on Ticket |: " << movie << endl;
        cout << "| Movie time |: " << time << endl;
        cout << "| Movie Experience |: " << luxury << endl;
        cout << "| Amount of Tickets |: " << amount << endl;
    }
    else
    {
        outs << "| Tickets |" << movie << time << luxury << amount;
    }
}
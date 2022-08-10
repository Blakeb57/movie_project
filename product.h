#include <iostream>

class product
{
    public:
        virtual void input(std::istream &ins) = 0;
        virtual void output(std::ostream &outs) = 0;
        //int compare(std::string s1, const char* s2);
};

class popcorn:public product
{
    public:
        popcorn();
        void input(std::istream &ins);
        void output(std::ostream &outs);

    private:
        std::string flavor;   //flavor of popcorn (butter popcorn, caramel popcorn, cheddar popcorn, plain popcorn)
        std::string size;   //size of popcorn (small, medium, large)
        std::string extras; //extra additions to popcorn (extra butter, extra salt, extra chedder, extra carmal, extra bag)
};

class candy:public product
{
    public:
        candy();
        void input(std::istream &ins);
        void output(std::ostream &outs);

    private:
        std::string type;   //different candy flavors (two groups, chocolates and fruits, then specific candy brands)
        std::string flavor; //type of candy flavor chosen
        std::string size;   //sizes of candy (small medium or large)
};

class drinks:public product
{
    public:
        drinks();
        void input(std::istream &ins);
        void output(std::ostream &outs);

    private:
        std::string size;       //size of drink (small, medium, or large)
        std::string bottle_cup; //choose between bottle version of drink or tap version
        std::string brand;      //choose between pepsi or coke products
        std::string flavor;     //choose the flavor of your drink
        std::string slushi;     //choose if you want your drink to be a slushi 
};

class meals:public product
{
    public:
        meals();
        void input(std::istream &ins);
        void output(std::ostream &outs);

    private:
        std::string type;   //choose between an entree and dessert
        std::string meal;   //choose food item wanted
        std::string size;   //choose size of meal item obtained
        std::string sides;  //choose what side you would like with your entree
};

class tickets:public product
{
    public:
        tickets() {amount = 0;}
        void input(std::istream &ins);
        void output(std::ostream &outs);

    private:
        int amount;         //amount of tickets purchased
        std::string time;   //time of the show
        std::string luxury;  //choose between luxury screening and normal screening  
        std::string movie;  //choose which movie you want to see
};
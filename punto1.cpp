#include <string>
#include <iostream>
#include <sstream> 
#include <stdexcept>
using namespace std;
class Weapon {
    public:
        virtual void use() = 0;
        virtual string getName() = 0;
        virtual int getPower() = 0;
        virtual int getDurability() = 0;
        virtual string getType() = 0;
        virtual ~Weapon() {} 
    };

class MagicalItem : public Weapon {
    protected:
        string name;
        int magicalPower;
        int durability;
        string rarity;
        string origin;
    
    public:
        virtual void recharge() = 0;
    
        string getName() override { return name; }
        int getPower() override { return magicalPower; }
        int getDurability() override { return durability; }
        string getType() override { return "Magical Item"; }
        virtual ~MagicalItem() {}
    };

class Staff: public MagicalItem {
    private:
        int length;
    public:
        Staff(string name, int magicalPower, int durability, string rarity, string origin, int length)
            : length(length) {
            this->name = name;
            this->magicalPower = magicalPower;
            this->durability = durability;
            this->rarity = rarity;
            this->origin = origin;
        }
    
        void use() override {
            cout << "Throwing a spell with the staff" << endl;
        }
    
        void recharge() override {
            cout << "The staff is recharging its magic" << endl;
        }
    };
    

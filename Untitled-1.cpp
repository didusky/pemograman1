#include <iostream>
#include <string>

class Hero {
private:
    std::string name;
    int hp;
    int mana;
    int cooldown;

public:
    
    Hero(std::string heroName, int heroHp, int heroMana, int heroCooldown)
        : name(heroName), hp(heroHp), mana(heroMana), cooldown(heroCooldown) {}

    
    std::string getName() const {
        return name;
    }

    int getHp() const {
        return hp;
    }

    int getMana() const {
        return mana;
    }

    int getCooldown() const {
        return cooldown;
    }

    
    void setHp(int newHp) {
        hp = newHp;
    }

    void setMana(int newMana) {
        mana = newMana;
    }

    void setCooldown(int newCooldown) {
        cooldown = newCooldown;
    }

    
    void display() const {
        std::cout << "Hero Name: " << name << std::endl;
        std::cout << "HP: " << hp << std::endl;
        std::cout << "Mana: " << mana << std::endl;
        std::cout << "Cooldown: " << cooldown << std::endl;
    }
};

int main() {
    
    Hero hero("Claude", 1000, 500, 10);

    
    hero.display();

    
    hero.setHp(900);
    hero.setMana(450);
    hero.setCooldown(10);

    
    hero.display();

    return 0;
}

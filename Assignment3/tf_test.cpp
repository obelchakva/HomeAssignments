/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #3
*/
#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Prime.h"

TEST(TransformerTest, InitializationTest) {
    Weapon weapon("Laser");
    auto alliance = std::make_shared<Alliance>("Cybertron");

    Transformer transformer("Optimus", 100, 50, weapon, alliance);
    EXPECT_EQ(transformer.getName(), "Optimus");
    EXPECT_EQ(transformer.getPowerLevel(), 100);
    EXPECT_EQ(transformer.getSpeed(), 50);

    transformer.setPowerLevel(120);
    transformer.setSpeed(60);
    EXPECT_EQ(transformer.getPowerLevel(), 120);
    EXPECT_EQ(transformer.getSpeed(), 60);
}

TEST(TransformerTest, AttackTest) {
    Weapon weapon("Sword");
    auto alliance = std::make_shared<Alliance>("Cybertron");

    Transformer transformer("Megatron", 80, 40, weapon, alliance);
    EXPECT_EQ(transformer.attack(), "Attack with Sword");
}

TEST(AutobotTest, InitializationTest) {
    Weapon weapon("Blaster");
    auto alliance = std::make_shared<Alliance>("Cybertron");

    Autobot autobot("Bumblebee", 70, 55, weapon, true, alliance);

    EXPECT_EQ(autobot.getName(), "Bumblebee");
    EXPECT_EQ(autobot.getPowerLevel(), 70);
    EXPECT_EQ(autobot.getSpeed(), 55);
    EXPECT_TRUE(autobot.getCanFly());
}

TEST(AutobotTest, AttackTest) {
    Weapon weapon("Particle Cannon");
    auto alliance = std::make_shared<Alliance>("Cybertron");

    Autobot autobot("Ironhide", 90, 45, weapon, false, alliance);
    EXPECT_EQ(autobot.attack(), "Attack with Particle Cannon (Autobot)");
}

TEST(DecepticonTest, InitializationTest) {
    Weapon weapon("Flamethrower");
    std::vector<std::string> abilities = {"Invisibility", "Teleportation"};
    auto alliance = std::make_shared<Alliance>("Cybertron");

    Decepticon decepticon("Starscream", 85, 60, weapon, abilities, alliance);

    EXPECT_EQ(decepticon.getName(), "Starscream");
    EXPECT_EQ(decepticon.getPowerLevel(), 85);
    EXPECT_EQ(decepticon.getSpeed(), 60);
    EXPECT_EQ(decepticon.getSpecialAbilities(), abilities);
}

TEST(DecepticonTest, AttackTest) {
    Weapon weapon("Shadow Blade");
    auto alliance = std::make_shared<Alliance>("Cybertron");

    Decepticon decepticon("Soundwave", 75, 50, weapon, {}, alliance);
    EXPECT_EQ(decepticon.attack(), "Attack with Shadow Blade (Decepticon)");
}

TEST(PrimeTest, InitializationTest) {
    Weapon weapon("Matrix of Leadership");
    auto alliance = std::make_shared<Alliance>("Cybertron");

    Prime prime("Optimus Prime", 100, 70, weapon, true, alliance);

    EXPECT_EQ(prime.getName(), "Optimus Prime");
    EXPECT_EQ(prime.getPowerLevel(), 100);
    EXPECT_EQ(prime.getSpeed(), 70);
    EXPECT_TRUE(prime.getCanFly());
}

TEST(PrimeTest, AttackTest) {
    Weapon weapon("Energy Axe");
    auto alliance = std::make_shared<Alliance>("Cybertron");

    Prime prime("Optimus Prime", 100, 70, weapon, true, alliance);
    EXPECT_EQ(prime.attack(), "Attack with Energy Axe (Autobot) (Prime)");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #6*/
#include "TemplateClass.h"
#include "TestClasses.h"
#include <gtest/gtest.h>

// Тесты для Class1
TEST(Class1Test, BarReturnsTrue) {
    Class1 obj;
    TemplateClass<Class1> test(obj, 5, {});
    EXPECT_TRUE(test.foo());
}

TEST(Class1Test, BarReturnsFalse) {
    Class1 obj;
    TemplateClass<Class1> test(obj, -1, {});
    EXPECT_FALSE(test.foo());
}

// Тесты для Class2
TEST(Class2Test, BarReturnsTrue) {
    Class2 obj;
    TemplateClass<Class2> test(obj, 0, {1.0f, 2.0f});
    EXPECT_TRUE(test.foo());
}

TEST(Class2Test, BarReturnsFalse) {
    Class2 obj;
    TemplateClass<Class2> test(obj, 0, {});
    EXPECT_FALSE(test.foo());
}

// Тесты для Class3
TEST(Class3Test, BarReturnsTrue) {
    Class3 obj;
    TemplateClass<Class3> test(obj, -3, {1.0f, 2.0f, 3.0f});
    EXPECT_TRUE(test.foo());
}

TEST(Class3Test, BarReturnsFalse) {
    Class3 obj;
    TemplateClass<Class3> test(obj, -2, {1.0f, 2.0f, 3.0f});
    EXPECT_FALSE(test.foo());
}

// Тесты для специализаций
TEST(SpecializationTest, IntAlwaysTrue) {
    TemplateClass<int> test(0, 0, {});
    EXPECT_TRUE(test.foo());
}

TEST(SpecializationTest, DoubleAlwaysFalse) {
    TemplateClass<double> test(0.0, 0, {});
    EXPECT_FALSE(test.foo());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

#include <gtest/gtest.h>
#include "module.h"

TEST(ModuleTests, FunktionGibtErwartetenWertZurueck) {
    int input = 5; 
    int result = my_function(input); 
    EXPECT_EQ(result, 10);
}

TEST(ModuleTests, ZweiterTest) {
    int input = -3; 
    int result = my_function(input); 
    EXPECT_EQ(result, -6);
}
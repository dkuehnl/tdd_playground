#include <gtest/gtest.h>
#include <memory>
#include "class.h"

class ClassTesting : public ::testing::Test {
    protected: 
        std::unique_ptr<TestClass> test_class; 

        void SetUp() override {
            test_class = std::make_unique<TestClass>("Testname",48);
        }
};

TEST_F(ClassTesting, TestGetName) {
    EXPECT_EQ(test_class->get_name(), "Testname");
}

TEST_F(ClassTesting, TestGetNumber) {
    EXPECT_EQ(test_class->get_number(), 48);
}

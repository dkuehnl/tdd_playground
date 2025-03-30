# Füge Google Test hinzu (vorausgesetzt, gtest ist systemweit installiert)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Test-Executable erstellen
add_executable(test_module test_module.cpp)
add_executable(test_class test_class.cpp)
 
# Falls dein Produktions-Code als Bibliothek eingebunden werden soll, kannst du diesen Schritt anpassen
target_link_libraries(test_module PRIVATE my_library GTest::GTest GTest::Main pthread)
target_link_libraries(test_class PRIVATE my_library GTest::GTest GTest::Main pthread)

# Test-Executable zu CTest hinzufügen
add_test(NAME ModuleTests COMMAND $<TARGET_FILE:test_module>)
add_test(NAME ClassTest COMMAND $<TARGET_FILE:test_class>)
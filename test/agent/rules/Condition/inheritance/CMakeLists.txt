add_executable(
        Test_agent_rules_Condition_inheritance
        test.cpp
)
target_link_libraries(
        Test_agent_rules_Condition_inheritance
        environment
        GTest::gtest_main
)
target_include_directories(
        Test_agent_rules_Condition_inheritance PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/src"
)

gtest_discover_tests(Test_agent_rules_Condition_inheritance)

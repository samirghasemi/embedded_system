// #include <Arduino.h>
#include <stdio.h>
#include <unity.h>
#include "main.cpp"
#include "p2_data.c"
using namespace std;

// const int LOW = 0;
// const int HIGH = 1;


// //e -> f
int temp_room1 = 0;
int temp_room2 = 0;
int temp_room3 = 0;
int temp_room4 = 0;

void test_temp_room1(void){
    int res = 0;
    if(p2_Y.X_OUTPUT[0]>20+0.6){
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);

    res = 0;
    if(p2_Y.X_OUTPUT[0] < 15 - 0.6){
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);

}

void test_temp_room2(void){
    int res = 0;
    if(p2_Y.X_OUTPUT[1]>20+0.6){
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
    res = 0;
    if(p2_Y.X_OUTPUT[1] < 15 - 0.6){
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
}

void test_temp_room3(void){
    int res = 0;
    if(p2_Y.X_OUTPUT[2]>20+0.6){
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
    res = 0;
    if(p2_Y.X_OUTPUT[2] < 15 - 0.6){
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
}

void test_temp_room4(void){
    int res = 0;
    if(p2_Y.X_OUTPUT[3]>20+0.6){
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
    res = 0;
    if(p2_Y.X_OUTPUT[3] < 15 - 0.6){
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
}


// OurState state;
int main(){
    p2_initialize();

    UNITY_BEGIN();
    for (int i = 0; i < 10; ++i) {
        p2_step();
        RUN_TEST(test_temp_room1);
        RUN_TEST(test_temp_room2);
        RUN_TEST(test_temp_room3);
        RUN_TEST(test_temp_room4);
    }
    
    
    UnityEnd();
    return -1;
}

// void setup() {
//   p2_initialize();
// }

// void loop() {
//     // p2_step();
// }
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

void test_temp_high_room1(void){
    int res = 0;
    if(p2_Y.X_OUTPUT[0]>20+0.6){
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
}

void test_temp_high_room2(void){
    int res = 0;
    if(p2_Y.X_OUTPUT[1]>20+0.6){
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
}

void test_temp_high_room3(void){
    int res = 0;
    if(p2_Y.X_OUTPUT[2]>20+0.6){
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
}

void test_temp_high_room4(void){
    int res = 0;
    if(p2_Y.X_OUTPUT[3]>20+0.6){
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
}

void test_temp_low_room1(void){
    int res = 0;
    if(p2_Y.X_OUTPUT[0] < 15 - 0.6){
        printf("room1 %d\n" , p2_Y.H_OUTPUT[0]);
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
}

void test_temp_low_room2(void){
    int res = 0;
    if(p2_Y.X_OUTPUT[1] < 15 - 0.6){
        printf("room2 %d\n" , p2_Y.H_OUTPUT[1]);
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
}

void test_temp_low_room3(void){
    int res = 0;
    if(p2_Y.X_OUTPUT[2] < 15 - 0.6){
        printf("room3 %d\n" , p2_Y.H_OUTPUT[2]);
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
}

void test_temp_low_room4(void){
    int res = 0;
    if(p2_Y.X_OUTPUT[3] < 15 - 0.6){
        printf("room4 %d\n" , p2_Y.H_OUTPUT[3]);
        res = 1 ;
    } 
    TEST_ASSERT_EQUAL(0,res);
}

// OurState state;
int main(){
    p2_initialize();

    UNITY_BEGIN();
    for (int i = 0; i < 2; ++i) {
        p2_step();
        printf("room1 %d\n" , p2_Y.X_OUTPUT[0]);
        printf("room2 %d\n" , p2_Y.X_OUTPUT[1]);
        printf("room3 %d\n" , p2_Y.X_OUTPUT[2]);
        printf("room4 %d\n" , p2_Y.X_OUTPUT[3]);

        // RUN_TEST(test_temp_high_room1);
        // RUN_TEST(test_temp_high_room2);
        // RUN_TEST(test_temp_high_room3);
        // RUN_TEST(test_temp_high_room4);
        // RUN_TEST(test_temp_low_room1);
        // RUN_TEST(test_temp_low_room2);
        // RUN_TEST(test_temp_low_room3);
        // RUN_TEST(test_temp_low_room4);
        // temp1 ++;
        // printf("Character is");
    }
    // RUN_TEST(test11);
    
    
    UnityEnd();
    return -1;
}

// void setup() {
//   p2_initialize();
// }

// void loop() {
//     // p2_step();
// }
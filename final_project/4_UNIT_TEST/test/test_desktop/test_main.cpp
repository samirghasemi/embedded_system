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
    // printf("room1 : %lf\n",p2_Y.X_OUTPUT[0]);

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

void test_check_heater(void){
    float h1 =  p2_Y.H_OUTPUT[0];
    float h2 =  p2_Y.H_OUTPUT[1];
    float h3 =  p2_Y.H_OUTPUT[2];
    float h4 =  p2_Y.H_OUTPUT[3];
    // printf("H : %lf , %lf , %lf , %lf\n",h1, h2 , h3 , h4);
    // printf("ROOM : %lf , %lf \n",p2_Y.HEATER1_OUTPUT , p2_Y.HEATER2_OUTPUT);

    int res = 0;
    if (h1 == 1)
    {
        TEST_ASSERT_TRUE(p2_Y.HEATER1_OUTPUT == 1 || p2_Y.HEATER2_OUTPUT == 1);
    }
    if (h2 == 1)
    {
        TEST_ASSERT_TRUE(p2_Y.HEATER1_OUTPUT == 2 || p2_Y.HEATER2_OUTPUT == 2);
    }
    if (h3 == 1)
    {
        TEST_ASSERT_TRUE(p2_Y.HEATER1_OUTPUT == 3 || p2_Y.HEATER2_OUTPUT == 3);
    }
    if (h4 == 1)
    {
        TEST_ASSERT_TRUE(p2_Y.HEATER1_OUTPUT == 4 || p2_Y.HEATER2_OUTPUT == 4);
    }
}


// OurState state;
int main(){
    p2_initialize();

    UNITY_BEGIN();
    for (int i = 0; i < 50; ++i) {
        p2_step();
        RUN_TEST(test_temp_room1);
        RUN_TEST(test_temp_room2);
        RUN_TEST(test_temp_room3);
        RUN_TEST(test_temp_room4);
        RUN_TEST(test_check_heater);
        printf("next step : %d\n",i);

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
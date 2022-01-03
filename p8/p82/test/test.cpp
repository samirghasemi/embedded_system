#include <Arduino.h>
#include <unity.h>
#include "main.cpp"

void test1(void){
   TEST_ASSERT_EQUAL(LOW,untitled_Y.out11);
   TEST_ASSERT_EQUAL(LOW,untitled_Y.out10);
   TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
   TEST_ASSERT_EQUAL(LOW,untitled_Y.out7);
   TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
   TEST_ASSERT_EQUAL(HIGH,untitled_Y.out4);
   TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}

void test2(void){
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out11);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out10);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out7);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out4);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}

void test3(void){
    // TEST_ASSERT_EQUAL(HIGH,untitled_Y.out11);
    TEST_ASSERT_EQUAL(HIGH,untitled_Y.out10);
    // TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out7);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out4);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}

// OurState state;
void setup(){

    UNITY_BEGIN();
    //start
    delay(1000);
    untitled_step();
    RUN_TEST(test1);
    
    //f
    untitled_U.f = 1; 
    untitled_step();
    RUN_TEST(test2);
    untitled_U.f = 0; 
    // //c
    untitled_U.f = 1; 
    untitled_step();
    RUN_TEST(test3);
    untitled_U.f = 1;

    UnityEnd();

}

// uint8_t i=0;
// uint8_t max=10;
void loop(){
    // Serial.println("hi!");
}
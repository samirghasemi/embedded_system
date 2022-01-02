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

void reload(){
    untitled_U.b = digitalRead(12);
    untitled_U.a = digitalRead(13);
    untitled_U.c = digitalRead(11);
    untitled_U.d = digitalRead(10);
    untitled_U.e = digitalRead(9);
    untitled_U.f = digitalRead(8); 
    untitled_step();
    // digitalWrite(7, untitled_Y.out3);
    // digitalWrite(6, untitled_Y.out4);
    // digitalWrite(5, untitled_Y.out5);
    // digitalWrite(4, untitled_Y.out7);
    // digitalWrite(3, untitled_Y.out8);
    // digitalWrite(2, untitled_Y.out10);
    // digitalWrite(A0, untitled_Y.out11);
}

void setup(){

    UNITY_BEGIN();
    //start
    // state.untitled_initialize();
    delay(1000);
    reload();
    RUN_TEST(test1);
    
    int press;
    //f
    untitled_U.f = 1; 
    // press = 8;
    // digitalWrite(press, HIGH);
    // delay(1000);
    untitled_step();
    // reload();
    RUN_TEST(test2);
    untitled_U.f = 0; 

    // digitalWrite(press, LOW);

    // //c
    // press = 11;
    // digitalWrite(press, HIGH);
    // delay(2000);
    untitled_U.f = 1; 
    // reload();
    untitled_step();
    RUN_TEST(test3);
    untitled_U.f = 1; 

    // digitalWrite(press, LOW);


    
    
    UnityEnd();

}

// uint8_t i=0;
// uint8_t max=10;
void loop(){
    // Serial.println("hi!");
}
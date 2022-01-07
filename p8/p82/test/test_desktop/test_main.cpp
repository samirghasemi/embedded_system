// #include <Arduino.h>
#include <unity.h>
#include "main.cpp"
const int LOW = 0;
const int HIGH = 1;
//b -> 6 -> 4
void test1(void){
   TEST_ASSERT_EQUAL(LOW,untitled_Y.out11);
   TEST_ASSERT_EQUAL(LOW,untitled_Y.out10);
   TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
   TEST_ASSERT_EQUAL(LOW,untitled_Y.out7);
   TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
   TEST_ASSERT_EQUAL(HIGH,untitled_Y.out4);
   TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}
//f -> b
void test2(void){
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out11);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out10);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out7);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out4);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}
//c -> 1 -> 11 10 
void test3(void){
    TEST_ASSERT_EQUAL(HIGH,untitled_Y.out11);
    TEST_ASSERT_EQUAL(HIGH,untitled_Y.out10);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out7);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out4);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}
//b -> 1 -> 11 10
void test4(void){
    TEST_ASSERT_EQUAL(HIGH,untitled_Y.out11);
    TEST_ASSERT_EQUAL(HIGH,untitled_Y.out10);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out7);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out4);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}
//b -> 1 -> 11 10 
void test5(void){
    TEST_ASSERT_EQUAL(HIGH,untitled_Y.out11);
    TEST_ASSERT_EQUAL(HIGH,untitled_Y.out10);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out7);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out4);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}
//f -> 1 -> 11 10
void test6(void){
    TEST_ASSERT_EQUAL(HIGH,untitled_Y.out11);
    TEST_ASSERT_EQUAL(HIGH,untitled_Y.out10);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out7);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out4);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}
//b -> 1 -> 11 10 
void test7(void){
    TEST_ASSERT_EQUAL(HIGH,untitled_Y.out11);
    TEST_ASSERT_EQUAL(HIGH,untitled_Y.out10);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out7);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out4);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}
//d -> 4 -> 7 7
void test8(void){
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out11);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out10);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
    TEST_ASSERT_EQUAL(HIGH,untitled_Y.out7);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out4);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}
//a ->4 -> 7 7
void test9(void){
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out11);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out10);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
    TEST_ASSERT_EQUAL(HIGH,untitled_Y.out7);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out4);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}
//e -> b
void test10(void){
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out11);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out10);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out7);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out4);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}

//e -> f
void test11(void){
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out11);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out10);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out8);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out7);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out5);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out4);
    TEST_ASSERT_EQUAL(LOW,untitled_Y.out3);
}

// OurState state;
int main(){

    UNITY_BEGIN();
    //start
    // delay(1000);
    untitled_step();
    RUN_TEST(test1);
    
    //f
    untitled_U.f = 1; 
    untitled_step();
    RUN_TEST(test2);
    untitled_U.f = 0; 
    
    //c
    untitled_U.c = 1; 
    untitled_step();
    RUN_TEST(test3);
    untitled_U.c = 0;

    //b
    untitled_U.b = 1; 
    untitled_step();
    RUN_TEST(test4);
    untitled_U.b = 0;

    //b
    untitled_U.b = 1; 
    untitled_step();
    RUN_TEST(test5);
    untitled_U.b = 0;
    
    //f
    untitled_U.f = 1; 
    untitled_step();
    RUN_TEST(test6);
    untitled_U.f = 0;
    
    //b
    untitled_U.b = 1; 
    untitled_step();
    RUN_TEST(test7);
    untitled_U.b = 0;
    
    //d
    untitled_U.d = 1; 
    untitled_step();
    RUN_TEST(test8);
    untitled_U.d = 0;
    
    //a
    untitled_U.a = 1; 
    untitled_step();
    RUN_TEST(test9);
    untitled_U.a = 0;
    
    //e
    untitled_U.e = 1; 
    untitled_step();
    RUN_TEST(test10);
    untitled_U.e = 0;

    //f
    untitled_U.f = 1; 
    untitled_step();
    RUN_TEST(test11);
    untitled_U.f = 0;
    
    UnityEnd();
    return 1;
}

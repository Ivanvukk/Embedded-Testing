#include "build/temp/_test_itoae.c"
#include "itoae.h"
#include "unity.h"


























static uint8_t _buf[ 20 ];

 void _fill_with_0xff(void)

{

    int i;

    for (i = 0; i < sizeof(_buf); i++){

        _buf[i] = 0xff;

    }

}











void setUp(void)

{



}



void tearDown(void)

{



}











void test_basic( void )

{

    _fill_with_0xff();

    itoae(_buf, 123, 0, 0, '0');

    UnityAssertEqualString((const char*)(("123")), (const char*)((_buf)), (

   ((void *)0)

   ), (UNITY_UINT)(59));



    _fill_with_0xff();

    itoae(_buf, -123, 0, 0, '0');

    UnityAssertEqualString((const char*)(("-123")), (const char*)((_buf)), (

   ((void *)0)

   ), (UNITY_UINT)(63));

}



void test_dpp( void )

{

    _fill_with_0xff();

    itoae(_buf, 123, 1, 0, '0');

    UnityAssertEqualString((const char*)(("12.3")), (const char*)((_buf)), (

   ((void *)0)

   ), (UNITY_UINT)(70));



    _fill_with_0xff();

    itoae(_buf, 123, 2, 0, '0');

    UnityAssertEqualString((const char*)(("1.23")), (const char*)((_buf)), (

   ((void *)0)

   ), (UNITY_UINT)(74));



    _fill_with_0xff();

    itoae(_buf, 123, 3, 0, '0');

    UnityAssertEqualString((const char*)(("0.123")), (const char*)((_buf)), (

   ((void *)0)

   ), (UNITY_UINT)(78));



    _fill_with_0xff();

    itoae(_buf, 123, 4, 0, '0');

    UnityAssertEqualString((const char*)(("0.0123")), (const char*)((_buf)), (

   ((void *)0)

   ), (UNITY_UINT)(82));

}

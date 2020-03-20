//
// Pruebas para la implementacion de la clase 
// para la lista circular doblemente enlazada y la clase Job. 
// Camila Vazquez Rodriguez
// 801-18-7684
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "DoubleCircularList.h"

TEST_CASE( "DCL", "[dcl]" ) {
    Job J(1,2,3);
    REQUIRE(J.toString() == "[1 2 3]");

    
//no nodes
    DoubleCircularList A;
    REQUIRE(A.isEmpty() == 1);
    REQUIRE(A.getCurrent() == NULL);
    REQUIRE(A.removeCurrent() == NULL);
    
//one node
    DoubleCircularList B;
    B.add(Job(1,2,3));
    REQUIRE(B.toString() == "[1 2 3]");
    REQUIRE(B.isEmpty() == 0);
    REQUIRE(B.getCurrent()->data.Getid() == 1);
    REQUIRE(B.removeCurrent() == B.getCurrent());
    REQUIRE(B.getCurrent() == NULL);
    B.next();
    REQUIRE(B.getCurrent() == NULL);


//two nodes
    
    DoubleCircularList C;
    REQUIRE(C.isEmpty() == 1);
    C.add(Job(4,5,6));
    C.add(Job(7,8,9));
    REQUIRE(C.isEmpty() == 0);
    REQUIRE(C.getCurrent()->data.Getid() == 4);
    REQUIRE(C.toString() == "[4 5 6][7 8 9]");
    C.next();
    REQUIRE(C.getCurrent()->data.Getid() == 7);
    C.next(); 
    REQUIRE(C.removeCurrent() == C.getCurrent());
    REQUIRE(C.getCurrent()->data.Getid() == 7);
 
}

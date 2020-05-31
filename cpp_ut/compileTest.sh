#!/bin/bash

INC_DIR=/usr/include/gtest/
LIB_DIR=/usr/lib/

#g++ -std=c++11 -isystem $INC_DIR -pthread binarySearch.cpp  $LIB_DIR/libgtest.a
#g++ -std=c++11 -isystem $INC_DIR -pthread test.cpp  $LIB_DIR/libgtest.a
g++ -std=c++11 -isystem $INC_DIR -pthread stack_test.cpp  $LIB_DIR/libgtest.a

// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Oct 2021
// This program uses for loop

#include <iostream>

int main() {
// this function uses for loop

// process
for (int counter = 1000; counter <= 2000; counter++) {
    ((counter % 5) == 4) ?
    std::cout << counter << '\n' : std::cout << counter << ' ';
}
}

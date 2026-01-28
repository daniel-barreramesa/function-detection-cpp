#include<iostream>
#include<string>
#include<cmath>

std::string transalate(std::string ecuation);

int detect_x(std::string ecuation);

double solve(std::string ecuation);
double solve_parentheses(std::string ecuation);
double solve_functions(std::string ecuation);
double solve_powers(std::string ecuation);
double solve_products(std::string ecuation);
double solve_sum(std::string ecuation);
double solve_num(std::string ecuation);

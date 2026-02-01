#include<iostream>
#include<string>
#include<vector>

std::string transalate(std::string ecuation);

int detect_x(std::string ecuation);

std::string second_solve(std::string ecuation);
double solve(std::string ecuation);
std::string solve_parentheses(std::string ecuation);
std::string solve_functions(std::string ecuation);
std::string solve_powers(std::string ecuation);
std::string solve_products(std::string ecuation);
std::string solve_sum(std::string ecuation);
std::string solve_num(std::string ecuation);

double return_num(std::string ecuation);

int search_minpos(std::vector<std::string> ecuation_parts);
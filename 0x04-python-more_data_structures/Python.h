#ifndef PYTHON_H
#define PYTHON_H

#include <stdio.h>
#include <stdlib.h>

void square_matrix_simple(int matrix[]);
void search_replace(int my_list[], int search, int replace);
void uniq_add(int my_list[]);
void common_elements(int set_1[], int set_2[]);
void only_diff_elements(int set_1[], int set_2[]);
int number_keys(int a_dictionary[]);
void print_sorted_dictionary(int a_dictionary[]);
void update_dictionary(int a_dictionary[], int key, int value);
void simple_delete(int a_dictionary[], int key);
void multiply_by_2(int a_dictionary[]);
int best_score(int a_dictionary[]);
void multiply_list_map(int my_list[], int number);
int roman_to_int(char roman_string[]);
float weight_average(float my_list[]);
void square_matrix_map(int matrix[]);
void complex_delete(int a_dictionary[], int value);
void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);

#endif /* PYTHON_H */

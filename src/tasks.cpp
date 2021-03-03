#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    // напишите код здесь ...
    if (lhs!= nullptr & rhs!= nullptr) {
        int temp = *lhs;
        *lhs = *rhs;
        *rhs = temp;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    // напишите код здесь ...
    if (num_rows<=0 | num_cols<=0) {
        return nullptr;
    }
    int **arr = new int *[num_rows];
    for (int i = 0; i < num_rows; ++i) {
        arr[i]= new int[num_cols];
    }
    for (int i=0; i< num_rows; i++) {
        for (int j=0; j<num_cols; j++) {
            arr[i][j] = init_value;
        }
    }
    return arr;

}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    // напишите код здесь ...
    if (arr_2d_source == nullptr | arr_2d_target == nullptr | num_rows <=0 | num_cols <=0)  {
        return false;
    }
        for (int i=0; i<num_rows; i++) {
            for (int j=0; j<num_cols; j++) {
                arr_2d_target[i][j] = arr_2d_source[i][j];
            }
        }
        return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    // напишите код здесь ...
    if (arr.size() > 0) {
        for (int i = 0; i < arr.size() / 2; i++) {
            int x = arr[i];
            arr[i] = arr[arr.size() - i-1];
            arr[arr.size() - i-1] = x;
        }
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    // напишите код здесь ...
    if (arr_begin != nullptr & arr_end != nullptr ) {
        while (arr_end > arr_begin) {
            swap_args(arr_begin, arr_end);
            arr_end--;
            arr_begin++;
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    // напишите код здесь ...
    if (arr != nullptr & size > 0) {
        int *maxElement = arr;
        for (int i = 0; i < size; i++) {
            if (arr[i] > *maxElement) {
                maxElement = &arr[i];
            }
        }
        return maxElement;
    }
    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    // напишите код здесь ...
    vector<int> odd_numbers;
    if (arr.size() == 0) {
        return odd_numbers;
    }
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i]%2==1 | arr[i]%2== -1) {
            odd_numbers.push_back(arr[i]);
        }
    }
    return odd_numbers;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> common_elements;
    for (int i = 0; i< arr_a.size(); i++) {
        for (int j = 0; j < arr_b.size(); j++) {
            if (arr_a[i] == arr_b[j]) {
                common_elements.push_back(arr_a[i]);
            }
        }
    }
    return common_elements;
}

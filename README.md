# push_swap

## Description
`push_swap` is a project that sorts an array using two stacks.

## Features
- Sorting algorithm implemented in C.
- Makefile for building the project.

## Prerequisites
- GCC compiler
- Make

## Installation
1. Clone the repository:
    ```sh
    git clone https://github.com/sborshikHlama/push_swap.git
    ```
2. Navigate into the project directory:
    ```sh
    cd push_swap
    ```

## Usage
1. Build the project using Makefile:
    ```sh
    make
    ```
2. Run the program:
    ```sh
    ./push_swap [arguments]
    ```

## Project Structure
- `src/`: Source files for the project.
- `include/`: Header files for the project.
- `Makefile`: Build script.

![plates-pixel-art-icon-crockery-260nw-2366265597](https://github.com/sborshikHlama/push_swap/assets/100703861/dfba4f95-38e7-4591-85e4-fa5cd0bbd614)



Creating an alogorithm to sort to stacks of numbers

Only these moves are allowed:

sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).

sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).

ss : sa and sb at the same time.

pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.

pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.

ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.

rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.

rr : ra and rb at the same time.

rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.

rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.

rrr : rra and rrb at the same time.

## Contribution
1. Fork the repository.
2. Create a new branch:
    ```sh
    git checkout -b my-feature-branch
    ```
3. Make your changes and commit them:
    ```sh
    git commit -m "Add some feature"
    ```
4. Push to the branch:
    ```sh
    git push origin my-feature-branch
    ```
5. Open a pull request.

## License
This project is licensed under the MIT License.

#include <bits/stdc++.h>

using namespace std;
//5 * 4!
//4 * 3!
//5 * 4 * 3 * 2 * 1 * 1
//
int changeValue(int &number) {
    //pass by reference/ address
     return number = number * 2;
}

enum BRICK_TYPE {
    SOLID = 10,
    METAL = 20,
    DEFAULT = 30
};

struct Brick {
    int x = 10;
    int y = 20;
    string color = "black";
    BRICK_TYPE type = DEFAULT;
} brick1;

struct Node {
    int data;
    struct Node *next;
};

struct Node *head, struct Node *newNode, malloc(sizeof(struct Node));
//constructor
//new instance

// union Ball {
//     int x = 10;
//     int y = 20;
//     string color = "black";
// } ball1;

int main(){
    // Ball ball2;


    return 0;
}
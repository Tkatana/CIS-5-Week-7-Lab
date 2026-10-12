

// Lab 7 — Tyler Quintana
// CIS 5 Week 07 · Two arrays

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {


const int N = 5;

cout << "Quiz scores" << endl;

int quiz [N] = { 45, 72, 97, 88, 95};

for (int i = 0; i < 5; i++ ){
cout << "[" << i << "] " << quiz[i] << endl; }

int qs = 0;

for (int i = 0; i < 5; i++) {

qs += quiz[i];


}

cout << "Sum: " << qs << endl;

int tq = quiz[0];

for (int i = 1; i < 5; i++) {

if (quiz[i] > tq)  {

tq = quiz[i];
} 

}

cout << "Top Score: " << tq << endl;
cout << "------------" << endl;

cout << "Lab scores" << endl;

int lab [N] = { 84, 22, 97, 79, 99};

for (int i = 0; i < 5; i++ ){
cout << "[" << i << "] " << lab[i] << endl; }

int ls = 0;

for (int i = 0; i < 5; i++) {

ls += lab[i];


}

cout << "Sum: " << ls << endl;

int tl = lab[0];

for (int i = 1; i < 5; i++) {

if (lab[i] > tl)  {

tl = lab[i];
} 

}

cout << "Highest Score: " << tl << endl;

 
 return 0;
}

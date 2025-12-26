#include <stdio.h>
#include<stdlib.h>
struct Address {
char city[20];
int pin;
};
struct Student {
int roll;
char name[20];
struct Address addr;
};
int main() {
system("getmac");
struct Student s = {1, "Noor", {"Mysore", 35}};
printf("%d %s %s %d", s.roll, s.name, s.addr.city, s.addr.pin);
return 0;
}

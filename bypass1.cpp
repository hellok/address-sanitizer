#include<stdlib.h>
#include<iostream>
class Test{
    public:
    void a(){
        int write = 0;
        int position = 0;
        while (write!=1) {
            buffer[position] = write;
            scanf("%d", &write);
            scanf("%d", &position);
            printf("%p\n", &buffer[position]);
        }
    }
    private:
    int buffer[10];
};
class Command{
    public:
    Command(){
        command[0] = 'l';
        command[1] = 's';
        command[2] = '\0';
    }
    void a(){
        system(command);
    }
    //private:
    char command[10];
};
int main(){
    Command c1 = Command();
    Test aTest = Test();
    printf("%p\n",&c1.command);
    aTest.a();
    c1.a();
}
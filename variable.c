//runtime exeution 
    /* variable data is store on ram - volatile memory
    non - volatile memory - seconary storage - hardisk
    VARIABLE:
    - used to specify the location of data
    - label for location of data
    -it maybe change during exection 
    Syntax:
    Data_type var_name:
    Basic Data type: int,float,double,char
    static var:
    -retains it value between multi time functioncall
    constant var:
    -#define - create constant
    -#pre process - process dir
    -#micro -define MIN(a,b) ((a)<(b))?(a):(b))
    #undefine 
    */
#include<stdio.h>
#define pi 3.14
//#undef pi
//#define MIN(a,b) ((a)<(b))?(a):(b)
void test_call(){
    static int test_val=0;
    test_val= test_val +1;
    printf("test_val=%d\n",test_val);
}
void area_cal(){
    float area;
    int radius=5;
    area =pi*radius*radius;
    printf("Area =%f\n",area);
}
//#undef pi
int main(){
    int x=10;
    auto int y=20; //normal variable
    printf("\nx=%dy=%d\n",x,y);
    test_call();
    area_cal();
    printf("pi=%f",pi);
}

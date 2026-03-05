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
// 1:30
fuctions:
 libary fuction  - predefined fuction 
 -matchematical libary,etc.
 it can be called whereever is required
 userdefined :
 use will create their fuction


    */
#include<stdio.h>
#include<math.h>
#include<string.h>
#define pi 3.14
//#undef pi
//#define MIN(a,b) ((a)<(b))?(a):(b)
// #define Roll_call(a,b) ((a) > 10 ? 1 : 2)
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
//table
void table_call(){
    static int rd=8;
    printf("rd = %d\n",rd);
    for(int i=1;i<5;i++){
        printf("%d x %d = %d\n",i,rd,i*rd);
        rd ++;
    }
    
}
void Roll_call_av(){ 
    // printf("%d\n", Roll_call(5, 20));
    for(int i=01;i<64;i++){
         printf("91231280%02d@gmail.com\n", i);
        //  printf("the func name %s\n",__func__);
    }
}
// void table_call_ag(){
//     static int rd;
//     printf("rd = %d\n",rd);
//     for(int i=1;i<5;i++){
//         printf("%d x %d = %d\n",i,rd,i*rd);
//         rd ++;
//     }
// }
//#undef pi


int main(){
    int x=10;
    auto int y=20; //normal variable
    printf("\nx=%dy=%d\n",x,y);
    test_call();
    area_cal();
    table_call();
    // table_call_ag();
    table_call();
    printf("pi=%f",pi);
    Roll_call_av();
    printf("\n%0.2f",pow(4,5));
    printf("\n%01d",9*9*2*7);
    printf("File: %s\n", __FILE__);
    printf("Line: %d\n", __LINE__);
    char check_date[]= __DATE__ ;
    char check_time[]=__TIME__;
    if(strcmp(data,"Mar 5 2026")==0){
        if(strcmp(time,"00:00:00")>0){
            printf("happy birthday");

        }
    
    }  
     
    }
    




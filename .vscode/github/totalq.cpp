Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@Vikashgupta95239 
Vikashgupta95239
/
C-bootcam
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
Initial commit
 main
@Vikashgupta95239
Vikashgupta95239 committed 13 days ago 
0 parents commit 5d2d83bb1a03ba44d4b400c13b397b93899a66ef
Show file tree Hide file tree
Showing 555 changed files with 7,934 additions and 0 deletions.
Filter changed files
 2  
.gitattributes
@@ -0,0 +1,2 @@
# Auto detect text files and perform LF normalization
* text=auto
 BIN +48.9 KB 
.vscode/Assignment 12.pdf
Binary file not shown.
 BIN +49.1 KB 
.vscode/Assignment 13.pdf
Binary file not shown.
 25  
.vscode/Write_a_recursive_function_to_calculate_HCF_of_two_numbers.cpp
@@ -0,0 +1,25 @@
#include<iostream>
#include<conio.h>
void hcf(int a,int b);
using namespace std;
int main(){
int a,b;
cout<<"enter the two number";
cin>>a>>b;
hcf(a,b);
return 0;
}
void hcf(int a,int b)
{
    if(b==0)
    return;
    else
    {
    hcf(b,a%b);
    cout<<" "<<b;
    exit(0);
    }



}
 BIN +50.7 KB 
.vscode/Write_a_recursive_function_to_calculate_HCF_of_two_numbers.exe
Binary file not shown.
 20  
.vscode/Write_a_recursive_function_to_calculate_factorial_of_a_given_number.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
int fect(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<fect(n);
return 0;
}
int fect(int n)
{

    if(n==0||n==1)
    {
    return 1;
    }
    return (n*fect(n-1));
}
 BIN +50.2 KB 
.vscode/Write_a_recursive_function_to_calculate_factorial_of_a_given_number.exe
Binary file not shown.
 20  
.vscode/Write_a_recursive_function_to_calculate_sum_of_first_N_natural_evan_numbers.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
int Esum(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<Esum(n);
return 0;
}
int Esum(int n)
{

    if(n==1)
    {
    return 2;
    }
    return (2*n+Esum(n-1));
}
 BIN +50.2 KB 
.vscode/Write_a_recursive_function_to_calculate_sum_of_first_N_natural_evan_numbers.exe
Binary file not shown.
 20  
.vscode/Write_a_recursive_function_to_calculate_sum_of_first_N_natural_numbers.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
int sum(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<sum(n);
return 0;
}
int sum(int n)
{

    if(n==1)
    {
    return 1;
    }
    return (n+sum(n-1));
}
 BIN +50.2 KB 
.vscode/Write_a_recursive_function_to_calculate_sum_of_first_N_natural_numbers.exe
Binary file not shown.
 20  
.vscode/Write_a_recursive_function_to_calculate_sum_of_first_N_natural_odd_numbers.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
int Esum(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<Esum(n);
return 0;
}
int Esum(int n)
{

    if(n==1)
    {
    return 1;
    }
    return ((2*n-1)+Esum(n-1));
}
 BIN +50.2 KB 
.vscode/Write_a_recursive_function_to_calculate_sum_of_first_N_natural_odd_numbers.exe
Binary file not shown.
 20  
.vscode/Write_a_recursive_function_to_calculate_sum_of_first_N_square_numbers.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
int sum(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<sum(n);
return 0;
}
int sum(int n)
{

    if(n==1)
    {
    return 1;
    }
    return (n*n+sum(n-1));
}
 BIN +50.2 KB 
.vscode/Write_a_recursive_function_to_calculate_sum_of_first_N_square_numbers.exe
Binary file not shown.
 34  
.vscode/Write_a_recursive_function_to_print_binary_of_a_given_decimal_number.cpp
@@ -0,0 +1,34 @@
#include<iostream>
#include<conio.h>
void binary(int );
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
int r=0;
while(n)
{
r=n%2;
cout<<r;
n=n/2;
}
//binary(n);
return 0;
}
// void binary(int n)
// {
//     if(n==0)
//     return;
//     binary(n>>1);
//     cout<<(n&1);
// }
// 2nd method ;
// void binary(int n)
// {
//     if(n==0)
//     return;
//     binary(n/2);
//     cout<<(n%2);
// // }

 BIN +50.1 KB 
.vscode/Write_a_recursive_function_to_print_binary_of_a_given_decimal_number.exe
Binary file not shown.
 20  
...ite_a_recursive_function_to_print_first_N_evan_natural_numbers_in_reverse_order_order.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
void evanrev(int n);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
evanrev(n);
return 0;
}
void evanrev(int n)
{
    if(n>0)
    {
    cout<<" "<<2*n;
    evanrev(n-1);
    }

}
 BIN +50.2 KB 
...ite_a_recursive_function_to_print_first_N_evan_natural_numbers_in_reverse_order_order.exe
Binary file not shown.
 17  
.vscode/Write_a_recursive_function_to_print_first_N_evan_natural_numbers_order.cpp
@@ -0,0 +1,17 @@
#include<iostream>
#include<conio.h>
void evan(int n);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
evan(n);
return 0;
}
void evan(int n)
{
    if(n>1)
    evan(n-1);
    cout<<" "<<2*n;
}
 BIN +50.2 KB 
.vscode/Write_a_recursive_function_to_print_first_N_evan_natural_numbers_order.exe
Binary file not shown.
 17  
.vscode/Write_a_recursive_function_to_print_first_N_natural_numbers_in_reverse_order.cpp
@@ -0,0 +1,17 @@
#include<iostream>
#include<conio.h>
void naturalrev(int n);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
naturalrev(n);
return 0;
}
void naturalrev(int n)
{
    if(n>0)
    cout<<" "<<n;
    naturalrev(n-1);
}
 BIN +50.2 KB 
.vscode/Write_a_recursive_function_to_print_first_N_natural_numbers_in_reverse_order.exe
Binary file not shown.
 19  
.vscode/Write_a_recursive_function_to_print_first_N_odd_natural_numbers.cpp
@@ -0,0 +1,19 @@
#include<iostream>
#include<conio.h>
void odd(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
odd(n);
return 0;
}
void odd(int n)
{
    if(n>1)
    {
    odd(n-1);
    }
    cout<<" "<<(2*n-1);
}
 BIN +50.2 KB 
.vscode/Write_a_recursive_function_to_print_first_N_odd_natural_numbers.exe
Binary file not shown.
 20  
.vscode/Write_a_recursive_function_to_print_first_N_odd_natural_numbers_reverse_order.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
void odd(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
odd(n);
return 0;
}
void odd(int n)
{
    if(n>=1)
    {
        cout<<" "<<(2*n-1);
    odd(n-1);
    }

}
 BIN +50.2 KB 
.vscode/Write_a_recursive_function_to_print_first_N_odd_natural_numbers_reverse_order.exe
Binary file not shown.
 17  
.vscode/Write_a_recursive_function_to_print_first_N_square_natural_numbers_order.cpp
@@ -0,0 +1,17 @@
#include<iostream>
#include<conio.h>
void square(int n);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
square(n);
return 0;
}
void square(int n)
{
    if(n>1)
    square(n-1);
    cout<<" "<<n*n;
}
 BIN +50.2 KB 
.vscode/Write_a_recursive_function_to_print_first_N_square_natural_numbers_order.exe
Binary file not shown.
 20  
.vscode/Write_a_recursive_function_to_print_first_N_terms_of_Fibonacci_series_.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
using namespace std;
int fibonacci(int);
int main(){
int n;
cout<<"enter the number";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<" "<<fibonacci(i);
}
return 0;
}
int fibonacci(int n)
{
    if(n==0||n==1)
    return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
 BIN +50.7 KB 
.vscode/Write_a_recursive_function_to_print_first_N_terms_of_Fibonacci_series_.exe
Binary file not shown.
 18  
.vscode/Write_a_recursive_function_to_print_octal_of_a_given_decimal_number.cpp
@@ -0,0 +1,18 @@
#include<iostream>
#include<conio.h>
void octal(int );
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
octal(n);
return 0;
}
void octal(int n)
{
    if(n==0)
    return;
    octal(n/8);
    cout<<(n%8);
}
 BIN +50.2 KB 
.vscode/Write_a_recursive_function_to_print_octal_of_a_given_decimal_number.exe
Binary file not shown.
 20  
.vscode/_Write_a_program_in_C_to_count_the_digits_of_a_given_number_using_recursion.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
int digitsum(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<digitsum(n);
return 0;
}
int digitsum(int n)
{  int c=0;
    if(n==0)
      return 0;
      c++;
    n%10+digitsum(n/10);

     return c;
}
 BIN +50.7 KB 
.vscode/_Write_a_program_in_C_to_count_the_digits_of_a_given_number_using_recursion.exe
Binary file not shown.
 19  
.vscode/_Write_a_recursive_function_to_calculate_sum_of_digits_of_a_given_number.cpp
@@ -0,0 +1,19 @@
#include<iostream>
#include<conio.h>
int digitsum(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<digitsum(n);
return 0;
}
int digitsum(int n)
{
    if(n==0)
      return 0;

    return (n%10+digitsum(n/10));

}
 BIN +50.7 KB 
.vscode/_Write_a_recursive_function_to_calculate_sum_of_digits_of_a_given_number.exe
Binary file not shown.
 20  
.vscode/_Write_a_recursive_function_to_print_first_N_natural_numbers.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
void natural(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
natural(n);
return 0;
}
void natural(int n)
{
    if(n>0)
    {
    natural(n-1);
    cout<<"  "<<n;
    }

}
 BIN +50.2 KB 
.vscode/_Write_a_recursive_function_to_print_first_N_natural_numbers.exe
Binary file not shown.
 24  
...structor/Define_a_class_Counter_and_Write_a_program_to_Show_Counter_using_Constructor.cpp
@@ -0,0 +1,24 @@
#include<iostream>
#include<conio.h>
using namespace std;
class counter
{
private:
static int count;
public:
counter() 
{
    count++;
}
void display()
{
    cout<<count;
}
};
int counter::count;
int main(){
    counter c,b,d;
    c.display();

return 0;
}
 BIN +49.8 KB 
...structor/Define_a_class_Counter_and_Write_a_program_to_Show_Counter_using_Constructor.exe
Binary file not shown.
 20  
.../Define_a_class_Cube_and_calculate_Volume_of_Cube_and_initialise_it_using_constructor.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
using namespace std;
class cube_volum
{
    private:
    int side;
    int volum;
    public:
    cube_volum(int s)
    {
        side=s;
        cout<<side*side*side;
    }
};
int main()
{
cube_volum v(5);
return 0;
}
 BIN +49.6 KB 
.../Define_a_class_Cube_and_calculate_Volume_of_Cube_and_initialise_it_using_constructor.exe
Binary file not shown.
 42  
..._Date_and_write_a_program_to_Display_Dateand_initialise_date_object_using_constructor.cpp
@@ -0,0 +1,42 @@
#include<iostream>
#include<conio.h>
using namespace std;
class Date
{
    private:
    int date,month,year;
    public:
    Date(int d,int m,int y)
    {
        date=d;
        month=m;
        year=y;


    }
    void display()
    {
        if(date>31||month>12)
        {
            cout<<"you have enter wrong input"<<endl;
        }
        else
        cout<<date<<"/"<<month<<"/"<<year<<endl;

    }
    Date()
    {
        cout<<"default constructor"<<endl;

    }
    ~Date()
    {
        cout<<"bye........"<<endl;
    }
};
int main(){
    Date Date(12,4,29);
    Date.display();

return 0;
}
 BIN +52.3 KB 
..._Date_and_write_a_program_to_Display_Dateand_initialise_date_object_using_constructor.exe
Binary file not shown.
 24  
...nt_and_create_a_static_variable__Increment_this_variable_in_a_display_increment_value.cpp
@@ -0,0 +1,24 @@
#include<iostream>
#include<conio.h>
using namespace std;
class increment
{
private:
static int count;
public:
increment()
{
    count++;
}
int display()
{
    return count;
}
};
int increment::count;

int main(){
increment c ,cc, coc, clc, ccp, ce, cccc;
cout<<c.display();
return 0;
}
 BIN +49.9 KB 
...nt_and_create_a_static_variable__Increment_this_variable_in_a_display_increment_value.exe
Binary file not shown.
 39  
...tudent_details_using_constructor_nd_define_member_function_to_display_all_the_details.cpp
@@ -0,0 +1,39 @@
#include<iostream>
#include<conio.h>
using namespace std;
class student
{
private:
int id;
char name[30];
char branch[20];
public:
student()
{
    cout<<"Enter the sudent id"<<endl;
    cin>>id;
    cout<<"Enter the student name"<<endl;
    fflush(stdin);
    cin.getline(name,30);
    //fgets(name,30,stdin);
    // scanf("%[^\n]s",name);

    cout<<"Enter the student branch"<<endl;
    fflush(stdin);
    cin.getline(branch,30);
    //scanf("%s",branch);
}
void display()
{
    cout<<"student id"<<id<<endl;
    cout<<"student name"<<name<<endl;
    cout<<"student branch"<<branch<<endl;
}
};

int main()
{
student s;
s.display();
return 0;
}
 BIN +52.1 KB 
...tudent_details_using_constructor_nd_define_member_function_to_display_all_the_details.exe
Binary file not shown.
 28  
...end function/Create_an_Integer_class_and_overload_logical_not_operator_for_that_class.cpp
@@ -0,0 +1,28 @@
#include<iostream>
using namespace std;
class integer 
{
int n;
public:
// integer(int i):n(i){}
void setdata(int i)
{
    n=i;
}
int getdata()
{
return n;
}
int operator!()
{
    return -n;
}
};
int main()
{
    integer x;
    x.setdata(5);
    int m;
    m=x.getdata();
    cout<<!m;
}
 BIN +49.8 KB 
...end function/Create_an_Integer_class_and_overload_logical_not_operator_for_that_class.exe
Binary file not shown.
 41  
...C___program_to_add_two_complex_numbers_using_operator_overloaded_by_a_friend_function.cpp
@@ -0,0 +1,41 @@
//Write a C++ program to add two complex numbers using operator overloaded by a friend function
//friend function
#include<iostream>
using namespace std;
class complex 
{
    private:
    int real;
    int imaginary;
    public:
    void setdata(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    void display()
    {
        cout<<"real part  "<<real<<endl<<"imaginary part   "<<imaginary<<endl;

    }
    friend complex operator+(complex c1,complex c2);
};

     complex operator+(complex c1,complex c2)//+ operator overload 
    {
      complex temp;
      temp.real=c1.real+c2.real;
      temp.imaginary=c1.imaginary+c2.imaginary;
      return temp;
    }


int main()
{
    complex c1,c2,c3;
     c1.setdata(5,6);
     c2.setdata(5,6);
     c3=c1+c2;//+operator overload
     c3.display();

}
 BIN +51.1 KB 
...C___program_to_add_two_complex_numbers_using_operator_overloaded_by_a_friend_function.exe
Binary file not shown.
 77  
...ment_Write_a_C___program_to_overload_unary_operators_that_is_increment_and_decrement_.cpp
@@ -0,0 +1,77 @@
// Write a C++ program to overload unary operators that is increment and decremen
#include <iostream>
using namespace std;
class increment
{
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "value of a  " << a << endl
             << "value of b is  " << b << endl;
    }
    increment operator++() // pre decrement operator

    {
        cout << "pre increment call " << endl;
        increment temp;
        temp.a = ++a;
        temp.b = ++b;
        return temp;
    }
    increment operator++(int useless) // post decrement operator
    {
        cout << "pre increment call " << endl;
        increment temp;
        temp.a = a++;
        temp.b = b++;
        return temp;
    }
    increment operator--() // pre decrement operator
    {
        cout << "pre decrement call " << endl;
        increment temp;
        temp.a = --a;
        temp.b = --b;
        return temp;
    }

    increment operator--(int useless) // post decrement operator

    {
        cout << "post decrement call " << endl;
        increment temp;
        temp.a = a--;
        temp.b = b--;
        return temp;
    }
};
int main()
{
    // increment i1,i2;
    // i1.setdata(5,6);
    // ++i1;
    // //i1++;
    // i1.display();

    increment i1, i2, i3, i4;
    i1.setdata(5, 6);
    (--i1).display();
    // post increment
    i2.setdata(2, 3);
    (i2--).display();

       //pre incrment 
       i3.setdata(15, 16);
    (++i3).display();
    // post increment
    i2.setdata(23, 33);
    (i2++).display();
}
 BIN +52.9 KB 
...ment_Write_a_C___program_to_overload_unary_operators_that_is_increment_and_decrement_.exe
Binary file not shown.
 43  
...de/constructor/Operator overloading and friend function/assignment_operator_overload_.cpp
@@ -0,0 +1,43 @@
// Create a complex class and overload assignment operator for that class
#include<iostream>
#include<stdlib.h>
using namespace std;
class complex 
{
int real,img;
public:
void setdata(int x,int y)
{
    real=x;
    img=y;
}
void display()
{
    cout<<"real "<<real<<endl<<"img "<<img<<endl;

}
// complex operator=(complex c)
// { 
// real=c.real;
// img=c.img;
// }
complex & operator=(complex &c)
{  
    real=c.real;
    img=c.img;
    return c;

}
};
int main()
{
    complex c1,c2,c3,c4;
    c1.setdata(4,5);
  c2=c1;
  c4=c2;
  c1=c2=c3;

  c4.display();

  //c2.display();
}
 BIN +51.1 KB 
...de/constructor/Operator overloading and friend function/assignment_operator_overload_.exe
Binary file not shown.
 27  
...r/Operator overloading and friend function/complex_class_name_same_as_member_variable.cpp
@@ -0,0 +1,27 @@
// Define a class Complex with appropriate instance variables and member functions.
// One of the functions should be setData() to set the properties of the object. Make
// sure the names of formal arguments are the same as names of instance variables
#include<iostream>
using namespace std;
class complex {
private:
int real,img;
public:
void setdata(int real,int img)
{
    this->real=real;
    this->img=img;
}
void display()
{
    cout<<"real "<<real<<endl<<"img "<<img<<endl;
}


};
int main()
{
    complex c;
    c.setdata(5,6);
    c.display();
}
 BIN +51 KB 
...r/Operator overloading and friend function/complex_class_name_same_as_member_variable.exe
Binary file not shown.
 89  
...d friend function/complex_class_overload_plus_substrct_multiply_and_equal_to_operator.cpp
@@ -0,0 +1,89 @@
/*1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include<iostream>
using namespace std;
class complex 
{
    private:
    int real;
    int imaginary;
    public:
    void setdata(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    void display()
    {
        cout<<"real part  "<<real<<endl<<"imaginary part   "<<imaginary<<endl;

    }
    // complex operator+(complex c3)//+ operator overload 
    // {
    //   complex temp;
    //   temp.real=real+c3.real;
    //   temp.imaginary=imaginary+c3.imaginary;
    //   return temp;

    // }
    //    complex operator-(complex c3)//- operator overload 
    // {
    //   complex temp;
    //   temp.real=real-c3.real;
    //   temp.imaginary=imaginary-c3.imaginary;
    //   return temp;

    // }
    //        complex operator * (complex c3)//* operator overload 
    // {
    //   complex temp;
    //   temp.real=real*c3.real;
    //   temp.imaginary=imaginary*c3.imaginary;
    //   return temp;

    // }
    int operator==(complex c3)
    {
     if(real==c3.real&&imaginary==c3.imaginary)
     return 1;
     else
     return 0; 
    }

};
int main()
{
    // complex c1,c2,c3;
    //  c1.setdata(5,6);
    //  c2.setdata(5,6);
    //  c3=c1+c2;//+operator overload
    //  c3.display();
    // complex c1,c2,c3;
    //  c1.setdata(10,12);
    //  c2.setdata(5,6);
    //  c3=c1-c2;//- operator overload
    //  c3.display();

    //     complex c1,c2,c3;//* operator overload 
    //  c1.setdata(10,12);
    //  c2.setdata(5,6);
    //  c3=c1*c2;
    //  c3.display();
         complex c1,c2;//* operator overload 
     c1.setdata(10,12);
     c2.setdata(5,6);
    int c3;
    c3=c1==c2;
     if(c3==1)
     {
        cout<<" both number equal"<<endl;
     }
     else
     cout<<"not equal number number"<<endl;

}
 BIN +50.9 KB 
... friend function/complex_class_overload_plus_substrct_multiply_and_equal_to_operator1.cpp
Binary file not shown.
 37  
...erator overloading and friend function/complex_class_overloading_inserstion_excersion.cpp
@@ -0,0 +1,37 @@
/*Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/
#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
    complex(int x,int y )
    {
        real=x;
        img=y;
    }
    complex(){}
    // friend ostream & operator<<(ostream &os,complex &c)
    // {
    //     os<<"real="<<c.real<<"img="<<c.img<<endl;
    //     return os;
    // }
    // .............cout<<c<<c2; we use & for printing multiple value
        friend void operator>>(ostream &os,complex c)
    {
        os<<"real="<<c.real<<"img="<<c.img<<endl;

    }
};
int main()
{
    complex c(5,6),c2(5,0);
    cout>>c;
    // cout<<c<<c2;


}
 BIN +50.9 KB 
...erator overloading and friend function/complex_class_overloading_inserstion_excersion.exe
Binary file not shown.
 37  
...tor overloading and friend function/consider_class_number_and_overload_unary_operator.cpp
@@ -0,0 +1,37 @@
/*Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.*/ 
#include<iostream>
using namespace std;
class number
{
int x,y,z;
public:
void input()
{
    cout<<"Enter three number";
    cin>>x>>y>>z;
}
void display()
{
    cout<<"x==>"<<x<<"\ny==>"<<y<<"\nz==>"<<z<<endl;
}
 void operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
};
int main()
{
    number n;
    n.input();
    -n;
    n.display();
}
 BIN +51.5 KB 
...tor overloading and friend function/consider_class_number_and_overload_unary_operator.exe
Binary file not shown.
 76  
.vscode/constructor/Operator overloading and friend function/create_a_c_string.cpp
@@ -0,0 +1,76 @@
// 6. Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.
#include<iostream>
#include<cstring>
using namespace std;
class Cstring
{
    char str[100];
    public:
    void input()
    {
        cin.getline(str,100);
    }
    void display()
    {
        cout<<str;
    }
    Cstring operator+(Cstring c)
    {
        Cstring m;
        strcpy(m.str,str);
        strcat(m.str,c.str);
        return m;
    }
    int operator==(Cstring t);

};
int Cstring::operator==(Cstring t)
{
    // for(int i=0;str[i]!='\0';i++)
    // {
    //     for(int j=0;str[j]='\0';j++)
    //    {
    //     if(str[i]!=t.str[j])
    //     {
    //         return 0;
    //     }
    //     else
    //     {
    //         return 1;
    //     }
    //    }

    // }
    int r=strcmp(str,t.str);
    return r;

}
int main()
{
    Cstring s1,s2,s3;
    int result=0;
    cout<<"enter first string"<<endl;
    s1.input();
    cout<<"enter second string"<<endl;
    s2.input();
    cout<<" first string      :   "<<endl;
    s1.display();
    cout<<" second string      :   "<<endl;
    s2.display();
    s3=s1+s2;
    cout<<"concatinate string is   "<<endl;
    s3.display(); 
    cout<<endl;
    result=s1==s2;
    if(result==0)
    {
        cout<<"equal string"<<endl;

    }
    else
    {
        cout<<"not equal string"<<endl;
    }
}
 BIN +52.8 KB 
.vscode/constructor/Operator overloading and friend function/create_a_c_string.exe
Binary file not shown.
 95  
...erator overloading and friend function/create_a_time_class_using_operator_overloading.cpp
@@ -0,0 +1,95 @@
/*Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time*/
#include<iostream>
using namespace std;
class Time
{
    private:
    int hour,minutes,second;
    public:
    // void set_time()
    // {
    //     cout<<"Enter the hour :"<<endl;
    //     cin>>hour;
    //     cout<<"Enter the Minutes :"<<endl;
    //     cin>>minutes;
    //     cout<<"Enter the Second :"<<endl;
    //     cin>>second;
    //     minutes=minutes+second/60;
    //     second=second%60;
    //     hour=hour+minutes/60;
    //     minutes=minutes%60;
    //     if(hour>24)
    //     {
    //         cout<<"invalid time"<<endl;
    //         return;
    //     }
    // }
    friend int operator>>(istream &input,Time &t)
    {
        cout<<"Enter the hour :"<<endl;
        input>>t.hour;
        cout<<"Enter the Minutes :"<<endl;
        input>>t.minutes;
        cout<<"Enter the Second :"<<endl;
        input>>t.second;
        t.minutes=t.minutes+t.second/60;
        t.second=t.second%60;
        t.hour=t.hour+t.minutes/60;
        t.minutes=t.minutes%60;
        if(t.hour>24)    
            return 1;
        else
        return 0;

    }
    friend void operator<<(ostream &output,Time &t)
    {
        cout<<t.hour<<":"<<t.minutes<<":"<<t.second<<endl;
    }
    int operator==(Time t2)
    {
        long int time,time2;
        time=hour*60*60+minutes*60+second;
        time2=t2.hour*60*60+t2.minutes*60+t2.second;
        if(time==time2)
        {
            return 1;
        }
        else
        return 0;
    }
};
int main()
{  int x;
    Time t1,t2;
    cout<<"-------Enter the First time-----------"<<endl;
    if(cin>>t1)
    {
        cout<<"invalid time"<<endl;
    }
    cout<<"-------Enter the second time----------"<<endl;
    if(cin>>t2)
    {
        cout<<"invalid time"<<endl;
    }


    if(t1==t2)
    {  cout<<"both time are equal"<<endl;
     cout<<t1;

    }
    else
    {
        cout<<"both time are not equal"<<endl;
    }


}
 BIN +53 KB 
...erator overloading and friend function/create_a_time_class_using_operator_overloading.exe
Binary file not shown.
 49  
... overloading and friend function/create_coordinate_class__and_overload_comma_operator.cpp
@@ -0,0 +1,49 @@
// Create a Coordinate class for 3 variables x,y and z and overload comma operator
// such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
// c3 are objects of 3D coordinate class
#include<iostream>
using namespace std;
class cordinate3d
{
    double x,y,z;
    public:
    cordinate3d()
    {
        x=y=z=0;
    }
    // cordinate3d(double x,double y,double z)
    // {
    //     this->x=x;
    //     this->y=y;
    //     this->z=z;
    // }
    cordinate3d(double a,double b,double c)
    {
            x=a;
            y=b;
            z=c;
    }
    cordinate3d operator,(cordinate3d obj)
    {

    cordinate3d temp;
    temp.x=obj.x;
    temp.y=obj.y;
    temp.z=obj.z;
    return obj;
    }
    void display()
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
    } 


};
int main()
{
    cordinate3d c1(3,45,6),c2(1,23,4),c3;
    c1.display();
     c3=(c1,c2);
     c3.display();

}
 BIN +51.3 KB 
... overloading and friend function/create_coordinate_class__and_overload_comma_operator.exe
Binary file not shown.
 85  
.vscode/constructor/Operator overloading and friend function/denominator_numenitor.cpp
@@ -0,0 +1,85 @@

/*Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
Output*/
#include<iostream>
using namespace std;
class fraction
{
long num;
long deno;
public:
fraction (long n=0, long d=0)
{
num=n;
deno=d;
}
friend void operator>>(istream &in,fraction &f)
{
    cout<<"\n numeroter   ";
    in>>f.num;
  cout<<"\n denominator ";
    in>>f.deno;
}
friend void operator<<(ostream &out,fraction &f)
{
    out<<f.num<<"/"<<f.deno;
}

fraction operator++()
{
    ++num;
    ++deno;
    return (*this);
}
fraction operator++(int s)
{
    fraction tmp=*this;
   // fraction temp;
    num++;
    deno++;
    return tmp;
}
};
int main()
{
    fraction f1,f2;
    cout<<"\n f1        :";
    cout<<f1;
    cout<<"\n f2        :";
    cout<<f2;
    cout<<endl;
    cout<<"\n\n Enter the 1st fraction\n";
    cin>>f1;
    cout<<f1;
    cout<<"           "<< endl;
    f1++;
    cout<<f1;
    cout<<"\n ++f      ";
    ++f1;
    cout<<f1;
     cout<<"\n\n Enter the second fraction value\n";
     cin>>f2;
     cout<<"\n f2     =++f1";
     cout<<"\n f2        : ";
     cout<<f2;
     f2=f1++;
     cout<<"\n\n f2=f1++";
     cout<<"\n f1    :";
     cout<<f1;
     cout<<"\nf2      :";
     cout<<f2;
     return 0;


}

 BIN +54.4 KB 
.vscode/constructor/Operator overloading and friend function/denominator_numenitor.exe
Binary file not shown.
 42  
...e/constructor/Operator overloading and friend function/distance_class_inches_and_feet.cpp
@@ -0,0 +1,42 @@
// /*Create a Distance class having 2 instance variable feet and inches. Also create
// default constructor and parameterized constructor takes 2 variables . Now overload ()
// function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
// inches = a+b + 15*/
#include<iostream>
using namespace std;
class Distance
{
  private:
  int feet,inch;
  public:
  Distance()
  {
    feet=0;
    inch=0;
  }
  Distance(int x,int y)
  {
    feet=x;
    inch=y;

  }
Distance operator()(int a,int b,int c)
  {
  Distance d;
  d.feet= a + c + 5;
  d.inch=a+b + 15;
  return d;
  }
  void display()
  {
    cout<<feet<<endl<<inch<<endl;
  }
};
int main()
{
  Distance d(5,10),d1;
  Distance d2;
  d1=d(5,6,7);
  //d.display();
  d1.display();
}
 BIN +51 KB 
...e/constructor/Operator overloading and friend function/distance_class_inches_and_feet.exe
Binary file not shown.
 23  
.vscode/constructor/Operator overloading and friend function/masti_with_cin_cout.cpp
@@ -0,0 +1,23 @@
#include<iostream>
#include<windows.h>
using namespace std;
class masti
{
    public:
     char name[200];
    friend void operator>>(istream &input_lo_bachaa,masti &t)
    {   
        input_lo_bachaa>>t.name;
    }
    friend void operator<<(ostream &print_karo,masti &t)
    {
        print_karo<<"welcome to masti class ==>"<<t.name<<endl;
    }
};
int main()
{
    system("cls");
masti m;
cin>>m;
cout<<m;
}
 BIN +51.4 KB 
.vscode/constructor/Operator overloading and friend function/masti_with_cin_cout.exe
Binary file not shown.
 60  
.vscode/constructor/Operator overloading and friend function/matrix_class.cpp
@@ -0,0 +1,60 @@
/*Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
Output */
#include<iostream>
using namespace std;
class Matrix
{
int a[3][3];
public:
void input();
void display();
void operator-();
};
void Matrix::input()
{
    cout<<"enter the 9 elemend of matrix"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
}
void Matrix::operator-()
{

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=-a[i][j];
        }
    }
}
void Matrix::display()
{

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    Matrix m;
    m.input();
    -m;
    m.display();
}
 BIN +51.2 KB 
.vscode/constructor/Operator overloading and friend function/matrix_class.exe
Binary file not shown.
 60  
...uctor/Operator overloading and friend function/matrix_separate_number_of_zero_and_one.cpp
@@ -0,0 +1,60 @@
#include<iostream>
using namespace std;
int main()
{
int a[3][3],i,j;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{  
    for(j=0;j<3;j++)
    {

        cin>>a[i][j];
          if(a[i][j]==0||a[i][j]==1)
    {
    }
    else
    {
        printf("you have enter wrong input");
        exit(0);
    }
    }

}
// while(n>=0)
// {
//     int row=0;
//     int col=0;
//     if(a[row][col]==0&&a[row][col+1]==1)
//     { 
//         int temp;
//         temp=a[row][col+1];
//         a[row][col+1]=a[row][col];
//         a[row][col]=temp;
//         col++;
//     }
//     n--;
// }
for(i=0;i<3;i++)
{
    for(j=0;j<2;j++)
    {
        if(a[i][j]==0 && a[i][j+1]==1)
    { 
        int temp;
        temp=a[i][j+1];
        a[i][j+1]=a[i][j];
        a[i][j]=temp;
    }
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");

}
}
 BIN +83.3 KB 
...uctor/Operator overloading and friend function/matrix_separate_number_of_zero_and_one.exe
Binary file not shown.
 51  
.vscode/constructor/Operator overloading and friend function/my_string_class.cpp
@@ -0,0 +1,51 @@
/*Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/
#include<iostream>
using namespace std;
class mystring
{
char str[1000];
public:
void input();
void display();
void operator!();
};
void mystring::input()
{
    cin.getline(str,1000);
}
void mystring::display()
{
    puts(str);
}
void mystring::operator !()
{
for(int i=0;str[i];i++)
{
    if(str[i]>=65 && str[i]<=90)
    {
        str[i]=str[i]+32;
    }
    else if(str[i]>=97 && str[i]<=122)
    {
        str[i]=str[i]-32;
    }
}
}
int main()
{
    mystring s;
    cout<<"enter the strig:"<<endl;
    s.input();
    !s;
    cout<<"you have entered string "<<endl;
    s.display();
}

 BIN +51.2 KB 
.vscode/constructor/Operator overloading and friend function/my_string_class.exe
Binary file not shown.
 43  
...e/constructor/Operator overloading and friend function/operator_overloading_in_string.cpp
@@ -0,0 +1,43 @@
/*Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings*/
#include<iostream>
#include<cstring>
using namespace std;
class string
{
    private:
    char str1[500];
    char str2[500];
    char con[1000];
    public:
    void input()
    {
        cout<<"enter the name "<<endl;
        cin.getline(str1,500);
        // cout<<"enter the 2nd name "<<endl;
        // cin.getline(str2,500);
    }
    void display()
    {
        cout<<"you have entered string\n"<<con<<endl;

    }
    string operator+(string s)
    {
        string s;
        return strcat(str1,s.str1);
    }

};
int main()
{
    string s1,s2,s3;
    s1.input();
    cout<<"enter the second string"<<endl;
    s2.input();

    s3=s1+s2
    s3.display();

}
 15  
.vscode/constructor/Operator overloading and friend function/overload_arrow_operator.cpp
@@ -0,0 +1,15 @@
/*Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function*/
#include<iostream>
using namespace std;
class Marks
{
int marks;
public:
void printmarks()
{

}
};
 0  
...verloading and friend function/overload_insertion_extraction_operator_in_complex_claass.c
Empty file.
 41  
.vscode/constructor/Operator overloading and friend function/overload_subscript_operator.cpp
@@ -0,0 +1,41 @@
// 3. Overload subscript operator [] that will be useful when we want to check for an index
// out of bound.
#include<iostream>
using namespace std;
class Array
{
int a[100];
const int size=100;
public:
Array(){};
void setArray(int n,int index)
{
  if(index>=size)
  {
    cout<<"Array out of range exception"<<endl;
    exit(0);
  }  
  a[index]=n;

}
void display(int index)
{
cout<<a[index]<<endl;
}
int operator[](int index)
{
    if(index>=size)
    {
        cout<<"Array index out of Bound"<<endl;
        exit(0);
    }
    return a[index];
}
};
int main()
{
    Array b;
    b.setArray(5,10);
    // b.display(10);
    cout<<b[10];
}
 BIN +51.2 KB 
.vscode/constructor/Operator overloading and friend function/overload_subscript_operator.exe
Binary file not shown.
 91  
.vscode/constructor/Operator overloading and friend function/persion.cpp
@@ -0,0 +1,91 @@
#include<iostream>
using namespace std;
class person
{
    int age;
    int rank;

public:
    int getAge()
    {
        return age;
    }
    int getRank()
    {
        return rank;
    }
    person(int a , int r)
    {
        cout<<"Parameter constructor called"<<endl;
        age = a;
        rank = r;
    }
    person(const person &p)
    {
        cout<<"Copy constructor called"<<endl;
        age = p.age;
        rank = p.rank;
    }
    person()
    {
        cout<<"Default constructor called"<<endl;

    }
   person operator+(person p)
    {
    cout<<"Operator + called"<<endl;

      person temp;
      temp.age = age + p.age;
      temp.rank = rank + p.rank;
      return temp;
    }

  person operator++() //Pre Increment
    {
       person temp;
       temp.rank = ++rank;
       temp.age = ++age;
       return temp;
    }
   person operator++(int useless) //Post Increment
    {
       person temp;
       temp.rank = rank++;
       temp.age = age++;
       return temp;
    }
    void display()
    {
     cout<<"Person age "<<age<<" and Rank "<<rank<<endl;
    }
   friend ostream& operator<<(ostream &os, person p);
};
ostream& operator<<(ostream &printkaro , person p)
{

 printkaro<<"Operator called"<<endl;
 printkaro<<"Person age "<<p.age<<" and Rank "<<p.rank<<endl;
 return printkaro;
}

int main()
{
    person p1(20,23);
    person p2 = p1;
    person p3 = p1+ p2;

    (++p3).display();
    (p3++).display();
     p3.display();

    cout<<p3<<p1;


    cout<<"Prateek age "<<p1.getAge()<<" and Rank "<<p1.getRank()<<endl;
    cout<<"Jatin age "<<p2.getAge()<<endl;
    cout<<"Utkarsh age "<<p3.getAge()<<" and Rank "<<p3.getRank()<<endl;


}

 BIN +53.9 KB 
.vscode/constructor/Operator overloading and friend function/persion.exe
Binary file not shown.
 54  
.vscode/constructor/Operator overloading and friend function/reverse_form_of_spiral.cpp
@@ -0,0 +1,54 @@
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],i,j,k;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
} 
int top,bottom,left,right;
top=0;
bottom=2;
left=1;
right=2;
int count=0;
while(count<=8)
{
    for(i=left;i>=top;i--)
    {
        printf("%d ",a[left][i]);
        count++;

    }
        for(i=top;i<=right;i++)
    {
        printf("%d ",a[right][i]);
        count++;
    }

   for(i=left;i>=0;i--)
    {
        printf("%d ",a[i][bottom]);
        count++;
    }
       for(i=left;i>=0;i--)
    {
        printf("%d ",a[top][i]);
        count++;
    }

    // if(count==8)
    // {
    //     break;
    // }

}
}

 BIN +83.5 KB 
.vscode/constructor/Operator overloading and friend function/reverse_form_of_spiral.exe
Binary file not shown.
 21  
.vscode/constructor/Operator overloading and friend function/reverse_spiral.py
@@ -0,0 +1,21 @@
# n=int(input("enter the row "))
# m=int(input("enter the column"))
# A basic code for matrix input from user

R = int(input("Enter the number of rows:"))
C = int(input("Enter the number of columns:"))

# Initialize matrix
matrix = []
print("Enter the entries rowwise:")

for i in range(R):		 
	a =[]
	for j in range(C):	 
		a.append(int(input()))
	matrix.append(a)
for i in range(R):
	for j in range(C):
		print(matrix[i][j], end = " ")
	print()

 38  
...e/constructor/Operator overloading and friend function/rotate_matrix_anticlock_wise_gfg.c
@@ -0,0 +1,38 @@
#include <stdio.h>
int main()
{
    int i, j, A[3][3], B[3][3];
    printf("enter the 9 element of the matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    // int m=2;
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         B[i][j] = A[j][m];
    //         // printf("%d ",A[j][m]);
    //         // printf("%d%d",j,m);

    //     }
    //     m--;
    // }
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         printf("%d ", B[i][j]);
    //     }
    //     printf("\n");
    // }
     for (j = 0; j < 9; j++)
        {
            printf("%d ", A[j]);
        }
}

 BIN +47.5 KB 
...constructor/Operator overloading and friend function/rotate_matrix_anticlock_wise_gfg.exe
Binary file not shown.
 92  
.vscode/constructor/Operator overloading and friend function/ruppe_dolller_conversion.cpp
@@ -0,0 +1,92 @@
#include<iostream>
using namespace std;
class Dollar
{
    float d;
  public:
    Dollar()
    {
        cout<<"DC for Dollar"<<endl;
    }
    Dollar(float y)
    {
        cout<<"PC called for Dollar"<<endl;
        d = y;
    }
    float getD()
    {
        return d;
    }
    void display()
    {
        cout<<d<<endl;
    }

    operator float()
    {
      cout<<"float() called for Dollar"<<endl;
      return d;
    }
};
class Rupee
{
   float r;

   public :
       Rupee(){ cout<<"DC of Rupee"<<endl;}

      Rupee(Dollar d1)
     {
          cout<<"Rupee(Dollar) called for Rupee"<<endl;
          r = d1.getD()*100;
     }

     operator Dollar()
     {
         cout<<"Dollar() called for Rupee"<<endl;
         return r/100;
     }
       Rupee(float x)
       {
           r = x;
           cout<<"PC of Rupee"<<endl;
       }
       void display()
       {
           cout<<"Display of Rupee "<<r<<endl;
       }

        operator float()
        {
            cout<<"float() of Rupee called"<<endl;
            return r;
        }
};                                       
int main()
{
    float x = 10;
    Rupee r1 = x;

    r1.display();

    float y;
    y = (float)r1;

    cout<<y<<endl;

    float a = 20;
    Dollar d1 = a;

    d1.display();

    a = (float)d1;
    cout<<a<<endl;

    r1 = (Rupee)d1;
    r1.display();

    d1 = r1;
    d1.display();

    return 0;
}
 67  
...tor/Operator overloading and friend function/sum_of_matrix_using_operator_overloading.cpp
@@ -0,0 +1,67 @@
/*Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
Outpu*/
#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3],b[3][3],sum[3][3];
    public:
    void input();
    void display();
    void operator+(Matrix m);
};
void Matrix::input()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
}
void Matrix::display()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>> a[i][j];
        }
        cout<<endl;
    }
}
//Matrix Matrix::operator+(Matrix m2
void Matrix::operator+(Matrix m2)

{
    //Matrix m;
    int i,j;
    int m[i][j];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        { 

            m[i][j]=a[i][j]+m2.a[i][j];


        }
    }
    //return m;
}
int main()
{
    Matrix m,m1,m3;
    m.input();
    cout<<"enter the element of second matrix"<<endl;
    m1.input();
    m3.display();
}
 BIN +51.1 KB 
...tor/Operator overloading and friend function/sum_of_matrix_using_operator_overloading.exe
Binary file not shown.
 19  
.vscode/constructor/Operator overloading and friend function/tempCodeRunnerFile.cpp
@@ -0,0 +1,19 @@
#include<iostream>
using namespace std;
class distance
{
  private:
  int feet,inch;
  public:
  distance()
  {
    feet=0;
    inch=0;
  }
  distance(int x,int y)
  {
    feet=x;
    inch=y;
    cout<<feet<<endl<<inch<<endl;
  }
};
 11  
.vscode/constructor/Operator overloading and friend function/try.cpp
@@ -0,0 +1,11 @@
#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int b=++a+a+++--a;
    // cout<<--a;
    cout<<b;
    // +--a;
    return 0;  
} 
 BIN +49.4 KB 
.vscode/constructor/Operator overloading and friend function/try.exe
Binary file not shown.
 31  
...e/constructor/bank_class_and_read_prt_and_calculate_simple_interest_using_constructor.cpp
@@ -0,0 +1,31 @@
#include<iostream>
#include<conio.h>
using namespace std;

class bank{
    private:
    int principle;
    int rate;
    int year;
    float simple_interest;
    public:
    bank()
    {
        cout<<"enter the principle"<<endl;
        cin>>principle;
        cout<<"enter  the rate of interest"<<endl;
        cin>>rate;
        cout<<"enter the year"<<endl;
        cin>>year;
    }
    float si()
    {
        simple_interest=(principle*rate*year)/100.0;
        return simple_interest;
    }
};
int main(){
bank b;
cout<<b.si();
return 0;
}
 BIN +51.6 KB 
...e/constructor/bank_class_and_read_prt_and_calculate_simple_interest_using_constructor.exe
Binary file not shown.
 27  
.vscode/constructor/box_class_and_calculate_volume_of_box_using_constructor.cpp
@@ -0,0 +1,27 @@
#include<iostream>
#include<conio.h>
using namespace std;
class box
{
private:
int length;
int breadth;
int hight;
public:
box(int l,int b,int h)
{
    length=l;
    breadth=b;
    hight=h;
}
int display_volume()
{
    return length*breadth*hight;
}
};
int main()
{
box box(10,20,30);
cout<<box.display_volume();
return 0;
}
 BIN +49.8 KB 
.vscode/constructor/box_class_and_calculate_volume_of_box_using_constructor.exe
Binary file not shown.
 BIN +49.2 KB 
.vscode/function/Assignment 10.pdf
Binary file not shown.
 BIN +49.2 KB 
.vscode/function/Assignment 11.pdf
Binary file not shown.
 20  
.vscode/function/Write_a_function_to_calculate_HCF_of_two_numbers___TSRS.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
using namespace std;
int HCF(int,int);
int main()
{
    int a,b;
    cout<<"enter the two numbwer";
    cin>>a>>b;
    cout<<HCF(a,b);
}
int HCF(int x,int y)
{
    int i;
    for(i=x*y;i>=1;i--)
    {
        if((x%i==0)&&(y%i==0))
        return i;
    }  
}
 BIN +50.7 KB 
.vscode/function/Write_a_function_to_calculate_HCF_of_two_numbers___TSRS.exe
Binary file not shown.
 21  
.vscode/function/Write_a_function_to_calculate_the_factorial_of_a_number___TSRS.cpp
@@ -0,0 +1,21 @@
#include<iostream>
#include<conio.h>
int fect(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<fect(n);
return 0;
}
int fect(int n)
{
    int i,fec=1;
    for(i=1;i<=n;i++)
    {
        fec=fec*i;

    }
    return fec;
}
 BIN +50.2 KB 
.vscode/function/Write_a_function_to_calculate_the_factorial_of_a_number___TSRS.exe
Binary file not shown.
 29  
..._the_number_of_combinations_one_can_make_from_n_items_nd_r_selected_at_a_time___TSRS_.cpp
@@ -0,0 +1,29 @@
#include<iostream>
#include<conio.h>
int fect(int);
int combination(int ,int);
using namespace std;
int main(){
int n,r;
cout<<"enter the number of item";
cin>>n;
cout<<"enter the set of selection of item";
cin>>r;
cout<<combination(n,r);
return 0;
}
int combination(int n,int r)
{
 int c=(fect(n)/(fect(r)*fect(n-r)));
return c;
}
int fect(int n)
{
    int i,fec=1;
    for(i=1;i<=n;i++)
    {
        fec=fec*i;

    }
    return fec;
}
 BIN +50.9 KB 
..._the_number_of_combinations_one_can_make_from_n_items_nd_r_selected_at_a_time___TSRS_.exe
Binary file not shown.
 28  
...e_the_number_of_permutation_one_can_make_from_n_items_nd_r_selected_at_a_time___TSRS_.cpp
@@ -0,0 +1,28 @@
#include<iostream>
#include<conio.h>
int fect(int);
int permutation(int ,int);
using namespace std;
int main(){
int n,r;
cout<<"enter the number of item";
cin>>n;
cout<<"enter the set of selection of item";
cin>>r;
cout<<permutation(n,r);
return 0;
}
int fect(int n)
{
    int i,fec=1;
    for(i=1;i<=n;i++)
    {
        fec=fec*i;
    }
    return fec;
}
int permutation(int n,int r)
{
 int c=(fect(n)/fect(n-r));
return c;
}
 BIN +50.9 KB 
...e_the_number_of_permutation_one_can_make_from_n_items_nd_r_selected_at_a_time___TSRS_.exe
Binary file not shown.
 26  
...tion/Write_a_function_to_check_whether_a_given_number_contains_a_given_digit_or_not__.cpp
@@ -0,0 +1,26 @@
#include<iostream>
#include<conio.h>
void digitcheck(int,int);
using namespace std;
int main(){
int n,c;
cout<<"enter the number";
cin>>n;
cout<<"enter the digit do you want check";
cin>>c;
digitcheck(n,c);
return 0;
}
void digitcheck(int n,int c)
{   int m;
    for(int i=0;i<=n;i++)
    {
      m=n%10;
      n=n/10;
      if(m==c)
      {
      printf("digit is present"); 
      break;
      }  
    }
}
 BIN +83.5 KB 
...tion/Write_a_function_to_check_whether_a_given_number_contains_a_given_digit_or_not__.exe
Binary file not shown.
 18  
...ven_number_is_even_or_odd__Return_1_if_the_number_is_even__otherwise_return_0___TSRS_.cpp
@@ -0,0 +1,18 @@
#include<iostream>
#include<conio.h>
using namespace std;
int eoddnumber(int );
int main(){
int n;
cout<<"enter the number";
cin>>n;
cout<<eoddnumber(n);
return 0;
}
int eoddnumber(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}
 BIN +50.2 KB 
...ven_number_is_even_or_odd__Return_1_if_the_number_is_even__otherwise_return_0___TSRS_.exe
Binary file not shown.
 32  
.vscode/function/Write_a_function_to_find_the_next_prime_number_of_a_given_number___TSRS.cpp
@@ -0,0 +1,32 @@
#include <iostream>
#include <conio.h>
int nextprime(int);
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
     cout<<nextprime(n);
}
int nextprime(int n)
{
    int i, j, c = 0;
    for (i = n+1; i <= n * n; i++)
    {         
        c = 0;
        for (j = 2; j < n; j++)
        {
            if (i % j == 0)
            c++; 
            break;     
        }
        if (c == 0)
        {
           return i;
           break;
        }


    }
}
 BIN +50.7 KB 
.vscode/function/Write_a_function_to_find_the_next_prime_number_of_a_given_number___TSRS.exe
Binary file not shown.
 24  
.vscode/function/Write_a_function_to_print_all_prime_factors_of_a_given_number.cpp
@@ -0,0 +1,24 @@
#include<iostream>
#include<conio.h>
void primefector(int );
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
primefector(n);
return 0;
}
void primefector(int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
          while(n%i==0)
          {
            cout<<"  "<<i;
            n=n/i;
          }

    }
}
 BIN +50.7 KB 
.vscode/function/Write_a_function_to_print_all_prime_factors_of_a_given_number.exe
Binary file not shown.
 19  
.vscode/function/Write_a_function_to_print_first_N_natural_numbers__TSRN.cpp
@@ -0,0 +1,19 @@
#include<iostream>
#include<conio.h>
void natural(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
natural(n);
return 0;
}
void natural(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}
 BIN +83.3 KB 
.vscode/function/Write_a_function_to_print_first_N_natural_numbers__TSRN.exe
Binary file not shown.
 20  
.vscode/function/Write_a_function_to_print_first_N_odd_natural_numbers___TSRN.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
void natural(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
natural(n);
return 0;
}
void natural(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2)
        printf("%d ",i);
    }
}
 BIN +83.3 KB 
.vscode/function/Write_a_function_to_print_first_N_odd_natural_numbers___TSRN.exe
Binary file not shown.
 24  
.vscode/function/Write_a_function_to_print_first_N_terms_of_Fibonacci_series__TSRN.cpp
@@ -0,0 +1,24 @@
#include<iostream>
#include<conio.h>
void fibonacci(int);
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
fibonacci(n);
return 0;
}
void fibonacci(int n)
{
    int i,sum,a=1,b=-1;
    for(i=1;i<=n;i++)
    {   
       sum=a+b;
       cout<<"  "<<sum;
      b=a;
      a=sum;

    }

}
 BIN +50.7 KB 
.vscode/function/Write_a_function_to_print_first_N_terms_of_Fibonacci_series__TSRN.exe
Binary file not shown.
 16  
...ode/function/Write_a_program_in_C_to_find_the_square_of_any_number_using_the_function.cpp
@@ -0,0 +1,16 @@
#include<iostream>
#include<conio.h>
void square(int );
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
square(n);
return 0;
}
void square(int n )
{
  cout<<"square="<<n*n;

}
 BIN +50.2 KB 
...ode/function/Write_a_program_in_C_to_find_the_square_of_any_number_using_the_function.exe
Binary file not shown.
 20  
.vscode/function/_Write_a_function_to_calculate_LCM_of_two_numbers___TSRS.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
using namespace std;
int LCM(int,int);
int main()
{
    int a,b;
    cout<<"enter the two numbwer";
    cin>>a>>b;
    cout<<LCM(a,b);
}
int LCM(int x,int y)
{
    int i;
    for(i=1;i<=x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        return i;
    }  
}
 BIN +50.7 KB 
.vscode/function/_Write_a_function_to_calculate_LCM_of_two_numbers___TSRS.exe
Binary file not shown.
 30  
...ode/function/_Write_a_function_to_check_whether_a_given_number_is_Prime_or_not___TSRS.cpp
@@ -0,0 +1,30 @@
#include<iostream>
#include<conio.h>
using namespace std;
int prime(int);
int main(){
int n,m=1;
cout<<"enter the number";
cin>>n;
m=prime(n);
if(m==0)
cout<<"prime number";
if(m>=1)
cout<<"not prime";
}
int prime(int n)
{
    int i,c=0;
    for(i=2;i<=int(n/2);i++)
    {  
        if(n%i==0)
        {
        c++; 
        break; 
        }
    }
    // cout<<c;
    // if(c==1)
    // cout<<"not prime";
      return c;
}
 BIN +50.6 KB 
...ode/function/_Write_a_function_to_check_whether_a_given_number_is_Prime_or_not___TSRS.exe
Binary file not shown.
 41  
.vscode/function/_Write_a_function_to_print_PASCAL_Triangle___TSRN.cpp
@@ -0,0 +1,41 @@
#include<iostream>
#include<conio.h>
int fect(int);
int combination(int ,int);
void pascal(int);

using namespace std;
int main(){
int n,r;
cout<<"enter the number of item";
cin>>n;
pascal(n);
return 0;
}
int fect(int n)
{
    int i,fec=1;
    for(i=1;i<=n;i++)
    {
        fec=fec*i;

    }
    return fec;
}
int combination(int n,int r)
{
 int c=(fect(n)/(fect(r)*fect(n-r)));
return c;
}
 void pascal(int n)
 {
    int i,j;
    for(i=0;i<=n;i++)
 {
    for(j=0;j<=i;j++)
    {
        cout<<" "<<combination(i,j);
    }
    cout<<"\n";
 }
 }
 BIN +50.8 KB 
.vscode/function/_Write_a_function_to_print_PASCAL_Triangle___TSRN.exe
Binary file not shown.
 36  
...unction/_Write_a_function_to_print_all_Prime_numbers_between_two_given_numbers___TSRN.cpp
@@ -0,0 +1,36 @@
#include <iostream>
#include <conio.h>
int nextprime(int,int);
using namespace std;
int main()
{
    int n,m;
    cout << "enter the two number";
    cin >> n>>m;
     nextprime(n,m);
}
int nextprime(int n,int m)
{
    int i, j, c = 0;
    for (i =n; i <= m ; i++)
    {         
        c = 0;
        for (j = 2; j<=n; j++)
        {
            if (i % j == 0)
            {
            c++; 
            break; 
            }

        }
        if (c == 0)
        {  cout<<" "<<i;



        }


    }
}
 BIN +50.7 KB 
...unction/_Write_a_function_to_print_all_Prime_numbers_between_two_given_numbers___TSRN.exe
Binary file not shown.
 35  
.vscode/function/_Write_a_function_to_print_first_N_prime_numbers__TSRN.cpp
@@ -0,0 +1,35 @@
#include <iostream>
#include <conio.h>
int nextprime(int);
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
     nextprime(n);
}
int nextprime(int n)
{
    int i, j, c = 0;
    for (i =2; i <= n ; i++)
    {         
        c = 0;
        for (j = 2; j<=i; j++)
        {
            if (i % j == 0)
            {
            c++; 
            break;     
            }
        }
        if (c == 0)
        {  cout<<" "<<i;



        }


    }
}
 BIN +50.7 KB 
.vscode/function/_Write_a_function_to_print_first_N_prime_numbers__TSRN.exe
Binary file not shown.
 23  
.vscode/function/_Write_a_function_to_print_first_N_terms_of_Fibonacci_series__TSRN.cpp
@@ -0,0 +1,23 @@
#include<iostream>
#include<conio.h>
void fibonacci(int );
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;
fibonacci(n);
return 0;
}
void fibonacci(int n)
{
    int a=1,b=-1,i,sum=0;
    for(i=0;i<=n;i++)
    {
        sum=a+b;
        cout<<sum;
        b=a;
        a=sum;

    }
}
 BIN +50.7 KB 
.vscode/function/_Write_a_function_to_print_first_N_terms_of_Fibonacci_series__TSRN.exe
Binary file not shown.
 5  
.vscode/function/tempCodeRunnerFile.cpp
@@ -0,0 +1,5 @@
int combination(int n,int r)
{
 int c=(fect(n)/(fect(r)*fect(n-r)));
return c;
}
 46  
.vscode/nptl.py
@@ -0,0 +1,46 @@
# def intreverse(n):

#     res=0

#     while(n > 0):

#         lastDig = n %10
#         res = res *10 + lastDig
#         n = n //10
#     return res
def sumprimes(I):


 # Function for check that the number is prime
    def check_prime(number):



 # Negative numbers and 1 are not simple
        if number < 2:


            return False
 # Check all dividers before sqrt(number)
        for i in range(2, int(number ** 0.5) + 1):


 # If the number has divisor it is not prime
            if not number % i:

                return False
            return True
 # Sum primes
    total = 0
 # Check all number in the list
    for i in I:



 # If number is prime add it to result
        if check_prime(i):


            total += i

        return total
 306  
.vscode/project/number_gusseing.c
@@ -0,0 +1,306 @@

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <windows.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RESET "\x1b[0m"

// create matrix 4*4
void createMatrix(int arr[][4])
{
    int n = 15;
    int num[n], i, j;
    for (i = 0; i < 15; i++) // These 1-15 number will be in th matrix
        num[i] = i + 1;

    srand(time(NULL)); // for random number generation

    int lastIndex = n - 1, index;

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        {
            if (lastIndex >= 0)
            {
                index = rand() % (lastIndex + 1); // idea : performing % operation by (lastIndex+1)
                arr[i][j] = num[index];           // will give index , so put that num[index] number in matrix
                num[index] = num[lastIndex--];    // and replace last number with this indexed positioned number
            }                                     // and finally lastIndex--
        }
    arr[i - 1][j - 1] = 0; // last number is zero
}

// showing matrix
void showMatrix(int arr[][4])
{
    int i, j;
    printf("--------------------\n");
    for (i = 0; i < 4; i++)
    {
        printf("|");
        for (j = 0; j < 4; j++)
        {
            if (arr[i][j] != 0)
                printf("%2d | ", arr[i][j]);
            else
                printf("   | ");
        }
        printf("\n");
    }

    printf("--------------------\n");
}

// winning check by this function
int winner(int arr[][4])
{
    int i, j, k = 1;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++, k++)
            if (arr[i][j] != k && k != 16)
                break;
        if (j < 4)
            break;
    }

    if (j < 4)
        return 0;
    return 1;
}

// swap function to swap two numbers
void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    printf("");
}

// Reads the user input character and return ascii value of that
int readEnteredKey()
{
    char c;
    c = _getch();
    if (c == -32)
        c = _getch();

    return c;
}

// shift up function
int shiftUp(int arr[][4])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            if (arr[i][j] == 0)
                break;
        if (j < 4)
            break;
    }
    if (i == 3) // shifting not possible
        return 0;

    // Successfully swapped two numbers !
    swap(&arr[i][j], &arr[i + 1][j]);
    return 1; // Success
}

int shiftDown(int arr[][4])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            if (arr[i][j] == 0)
                break;
        if (j < 4)
            break;
    }
    if (i == 0) // shifting not possible
        return 0;
    swap(&arr[i][j], &arr[i - 1][j]); // swap numbers

    return 1; // shift up success
}

int shiftRight(int arr[][4])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            if (arr[i][j] == 0)
                break;
        if (j < 4)
            break;
    }
    if (j == 0) // shifting not possible
        return 0;

    swap(&arr[i][j], &arr[i][j - 1]);

    return 1; // shift up success
}

int shiftLeft(int arr[][4])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            if (arr[i][j] == 0)
                break;
        if (j < 4)
            break;
    }

    if (j == 3) // shifting not possible
        return 0;

    swap(&arr[i][j], &arr[i][j + 1]);
    return 1; // shift up success
}

// Game rules
void gameRule(int arr[][4])
{
    system("cls");

    int i, j, k = 1;

    printf("\t\t  MATRIX PUZZLE\n");
    printf("\n");
    printf(ANSI_COLOR_RED "                 RULE OF THIS GAME                 \n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED "\n1.You can move only 1 step at a time by arrow key " ANSI_COLOR_RESET);
    printf("\n\tMove Up   : by Up arrow key ");
    printf("\n\tMove Down : by Down arrow key");
    printf("\n\tMove Left : by Left arrow key");
    printf("\n\tMove Right: by Right arrow key");

    printf(ANSI_COLOR_RED "\n2.You can move number at empty position only " ANSI_COLOR_RESET);
    printf("\n");
    printf(ANSI_COLOR_RED "\n3. For each valid move : your total number of move will decreased by 1 \n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED "4. Wining situation : " ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED " Number in a 4*4 matrix should be in order from 1 to 15 " ANSI_COLOR_RESET);
    printf("\n\n            winning situation:         \n");

    printf(ANSI_COLOR_YELLOW "---------------------\n" ANSI_COLOR_RESET);

    for (i = 0; i < 4; i++)
    {
        printf(ANSI_COLOR_YELLOW "| " ANSI_COLOR_RESET);
        for (j = 0; j < 4; j++)
        {
            if (arr[i][j] != 0)
                printf(ANSI_COLOR_YELLOW "%2d | " ANSI_COLOR_RESET, 4 * i + j + 1);
            else
                printf(ANSI_COLOR_YELLOW "   |" ANSI_COLOR_RESET);
        }
        printf("\n");
    }

    printf(ANSI_COLOR_YELLOW "---------------------\n" ANSI_COLOR_RESET);
    printf("\n5.You can exit the game at any time by pressing 'E' or 'e' ");

    printf("\nSo Try to win in minimum no of move \n");

    printf("\nEnter any key to start.....   ");

    int x = readEnteredKey();
}

// main function
int main()
{
    int arr[4][4];    // matrix
    int maxTry = 4; // maximum move
    char name[20];
    for (int k = 0; k < 3; k++)
        printf("\n");
    printf("Player Name: ");
    scanf("%s", name);

    system("cls"); // to clear screen

    while (1)
    {
        createMatrix(arr); // calling function to create  matrix
        gameRule(arr);     // game rule function calling

        while (!winner(arr)) // checking for winning situation
        {
            system("cls");
            if (!maxTry) // for remaining zero move
                break;

            printf("\n\n  Player Name:  %s ,  Move remaining : %d\n\n", name, maxTry);

            showMatrix(arr); // show matrix

            int key = readEnteredKey(); // this will return ascii code of user entered key

            switch (key) // maping
            {
            case 101: // ascii of E

            case 69: // ascii of e
                printf("\a\a\a\a\a\a\n     Thanks for Playing ! \n\a");
                printf("\nHit 'Enter' to exit the game \n");
                key = readEnteredKey();
                return 0;

            case 72: // arrow up
                if (shiftUp(arr))
                    maxTry--;
                break;
            case 80: // arrow down
                if (shiftDown(arr))
                    maxTry--;
                break;
            case 77: // arrow  right
                if (shiftRight(arr))
                    maxTry--;
                break;
            case 75: // arrow left
                if (shiftLeft(arr))
                    maxTry--;
                break;
            default:

                printf("\n\n      \a\a Not Allowed \a");
            }

        }

        if (!maxTry)
            printf(ANSI_COLOR_RED "\n\a          YOU LOSE !          \a\a\n" ANSI_COLOR_RESET);
        else
            printf(ANSI_COLOR_GREEN "\n\a!!!!!!!!!!!!!Congratulations  %s for winning this game !!!!!!!!!!!!!\n\a" ANSI_COLOR_RESET, name);

        fflush(stdin); // Will clear the buffer
        char check;
        printf(ANSI_COLOR_GREEN "\nWant to play again ? \n" ANSI_COLOR_RESET);
        printf("enter 'y' to play again:  ");
        scanf("%c", &check);

        // Leave the game here itself !
        if ((check != 'y') && (check != 'Y'))
            break;

        maxTry = 4;
    }
    return 0;
}
 BIN +52.6 KB 
.vscode/project/number_gusseing.exe
Binary file not shown.
 1  
.vscode/project/tempCodeRunnerFile.c
@@ -0,0 +1 @@

 114  
.vscode/project/tick_tak.c
@@ -0,0 +1,114 @@
#include <stdio.h>
#include <conio.h>
void printBoard();
int checkWin();
void system();   

char board[]={'0','1','2','3','4','5','6','7','8','9'};

void main(){
    int player=1,input;
    printBoard();
   char mark;

    while (1)
    {   
        if(player%2==0)
        {
            player=2;
            mark='0';
        }
        else
        {
            player=1;
             mark='X';
        }
        // player=(player%2=;=0) ? 2 : 1;
        // char mark=(player==1) ? 'X' :'O'
        printf("Please enter Number For Player %d\n",player);
        scanf("%d",&input);
    if(input<1 || input>9){
        printf("invalid input");
    }

    board[input]=mark;
    printBoard();
    int result=checkWin();
    if(result==1){
        printf("Player %d is the Winner",player);
        return;
    }else if(result==0){
        printf("draw");
        return;
    }
    player++;
    }


}

void printBoard(){
    system("cls");
    printf("\n\n");
    printf("=== TIC TAC TOE ===\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[1],board[2],board[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[4],board[5],board[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[7],board[8],board[9]);
    printf("     |     |     \n");
    printf("\n\n");
}


int checkWin(){

    if(board[1]==board[2] && board[2]==board[3])
    {
        return 1;
    }
    if(board[1]==board[4] && board[4]==board[7])
    {
        return 1;
    }
    if(board[7]==board[8] && board[8]==board[9])
    {
        return 1;
    }
    if(board[3]==board[6] && board[6]==board[9])
    {
        return 1;
    }
    if(board[1]==board[5] && board[5]==board[9])
    {
        return 1;
    }
    if(board[3]==board[5] && board[5]==board[7])
    {
        return 1;
    }
    if(board[2]==board[5] && board[5]==board[8])
    {
        return 1;
    }
    if(board[4]==board[5] && board[5]==board[6])
    {
        return 1;
    }

    int count=0;
    for (int i = 1; i <=9; i++)
    {
        if(board[i]=='X' || board[i]=='O'){
            count++;
        }
    }

    if(count==9){
        return 0;
    }
    return -1;
}
 BIN +48.9 KB 
.vscode/project/tick_tak.exe
Binary file not shown.
 50  
.vscode/project/tick_tak_project.c
@@ -0,0 +1,50 @@
#include<stdio.h>
#include<string.h>
void Bord();
char board[]={'0','1','2','3','4','5','6','7','8','9'};
void Bord()
{
    printf("\n\n");
    printf("=== TIC TAC ===\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[1],board[2],board[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[4],board[5],board[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",board[7],board[8],board[9]);
    printf("     |     |     \n");
    printf("\n\n");
}
int main()
{ 
   int player=1,input;
   char marks;
   Bord();
   while(1)
{

    if(player%2==0)
    {
        player=2;
        marks='0';
    }
    else
    {
    player=1;
    marks='X';
    }
    printf("enter the player number %d \n",player);
    scanf("%d ",&input);
    if(input<1||input>9)
    {
        printf("invalid input");
    }

    board[input]=marks;
    player++;
      Bord();
}

}
 BIN +48.2 KB 
.vscode/project/tick_tak_project.exe
Binary file not shown.
 9  
.vscode/settings.json
@@ -0,0 +1,9 @@
{
    "files.associations": {
        "write_a_recursive_function_to_print_first_n_evan_natural_numbers_in_reverse_order_order": "cpp",
        "iostream": "cpp",
        "Q7.C": "cpp",
        "typeinfo": "c"
    },
    "C_Cpp.errorSquiggles": "disabled"
}
 34  
.vscode/toc_lab/Q1.c
@@ -0,0 +1,34 @@

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n, count = 0;
    printf("what are the binary number do you to enter");
    scanf("%d", &n);
    int a[n], i;
    printf("enter the %d binary number\n", n);
    for (int j = 0; j < n; j++)
   {
         scanf("%d", &a[j]);
        if(a[j]!=0||a[j]!=1){}
        else
        {
            printf("you have entered wrong input");
          exit(0);
        }
   }
   for (i = 0; i < n-2; i++)
   {
        if(a[i]==1&&a[i+1]==1&&a[i+2]==1)
        {
        printf("yes machine accepting three consecutive one............\n");
        break;
        }
    }
    if(i==n-2)
    {
      printf("machine not accepting three consecutive one");
    }
       return 0;
}
 BIN +48.1 KB 
.vscode/toc_lab/Q1.exe
Binary file not shown.
 34  
.vscode/toc_lab/Q2.c
@@ -0,0 +1,34 @@


// 2 desing a program for string a machine that always ending with 101;
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("what are the binary number do you to enter");
  scanf("%d", &n);
  int a[n], i;
  printf("enter the %d binary number", n);
  for (int j = 0; j < n; j++)
  {
    scanf("%d", &a[j]);
    if (a[j] != 0 || a[j] != 1)
    {
    }
    else
    {
      printf("you have entered wrong input");
      exit(0);
    }
  }

  if (a[n - 1] == 1 && a[n - 2] == 0 && a[n - 3] == 1)
  {
    printf("yes machine ending with 101............\n");
  }
  else
  {
    printf(" machine not ending with 101............\n");
  }
}
 BIN +48.1 KB 
.vscode/toc_lab/Q2.exe
Binary file not shown.
 12  
.vscode/toc_lab/Q3.c
@@ -0,0 +1,12 @@
//3 desing a program for accepting decimal number divisible by 2;
#include<stdio.h>
int main()
{
    int n;
    printf("enter the decimal number ");
    scanf("%d",&n);
    if(n&1)
    printf("not divisible by 2");
    else
    printf("divisible by 2");
}
 BIN +47.5 KB 
.vscode/toc_lab/Q3.exe
Binary file not shown.
 42  
.vscode/toc_lab/Q4.c
@@ -0,0 +1,42 @@
//4 design a program for starting a machine which accepting staring having equal number of 0, and 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("what are the binary number do you to enter");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the %d binary number",n);
    for (int j = 0; j < n; j++)
  {
    scanf("%d", &a[j]);
    if (a[j] != 0 || a[j] != 1)
    {
    }
    else
    {
      printf("you have entered wrong input");
      exit(0);
    }
  }
    int one=0,zero=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            one++;
        }
        if(a[i]==0)
        {
        zero++;
        }
    }
    if(one==zero)

        printf("yes having equal zero and one............\n");  

        else
           printf("not having equal zero and one............\n");  

}
 BIN +48.1 KB 
.vscode/toc_lab/Q4.exe
Binary file not shown.
 37  
.vscode/toc_lab/Q5.c
@@ -0,0 +1,37 @@
// 5 desing a program for reading a machine which count number one's and 0's in a given string
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("what are the binary number do you to enter");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the %d binary number",n);
    for (int j = 0; j < n; j++)
  {
    scanf("%d", &a[j]);
    if (a[j] != 0 || a[j] != 1)
    {
    }
    else
    {
      printf("you have entered wrong input");
      exit(0);
    }
  }
    int one=0,zero=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            one++;
        }
        if(a[i]==0)
        {
        zero++;
        }
    }
    printf("Number of zero is  %d\nNumber of one is %d ",zero,one);
}

 BIN +48 KB 
.vscode/toc_lab/Q5.exe
Binary file not shown.
 56  
.vscode/toc_lab/Q6.c
@@ -0,0 +1,56 @@
//6 write a program to find 2's complement of given binary number 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("what are the binary number do you to enter");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the %d binary number",n);
     for (int j = 0; j < n; j++)
  {
    scanf("%d", &a[j]);
    if (a[j] != 0 || a[j] != 1)
    {
    }
    else
    {
      printf("you have entered wrong input");
      exit(0);
    }
  }
    int onescomple[n];
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
           {
            onescomple[i]=0;
           }
            else
            {
            onescomple[i]=1;
            }
    }
    for(int j=n-1;j>=0;j--)
    {   

        if(onescomple[j]==1)
        {
            onescomple[j]=0;
        }
        else
        {
          onescomple[j]=1;
          break;
        }
    }
    printf("2's complement of binary number is");
    for(i=0;i<n;i++)
    {
        printf("%d",onescomple[i]);
    }
}



 BIN +48 KB 
.vscode/toc_lab/Q6.exe
Binary file not shown.
 4  
.vscode/toc_lab/tempCodeRunnerFile.c
@@ -0,0 +1,4 @@
        if(a[i]>1)
        {
            printf("you have enter wrong input try again....");
        }
 BIN +43.5 KB 
Assignment - 7 Updated.pdf
Binary file not shown.
 BIN +236 KB 
Assignment - 8 Updated.pdf
Binary file not shown.
 BIN +160 KB 
Assignment 1.pdf
Binary file not shown.
 BIN +50.7 KB 
Assignment 3.pdf
Binary file not shown.
 BIN +49 KB 
Program.exe
Binary file not shown.
 9  
Q11_formate_HH__MM.c
@@ -0,0 +1,9 @@
#include<stdio.h>
int main()
{
    int hh ,mm;
    printf("enter the formate HH:MM ");
    scanf("%d:%d",&hh,&mm);
    printf("hour=%d minute=%d",hh,mm);

}
 BIN +47.5 KB 
Q11_formate_HH__MM.exe
Binary file not shown.
 19  
Q3.c
@@ -0,0 +1,19 @@
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j>=6-i&&j<=4+i)
        {
            printf("* ");
            j++;
        }
            else
            printf(" ");
        }
        printf("\n");
    }
}
 BIN +47.5 KB 
Q3.exe
Binary file not shown.
 16  
Q4.c
@@ -0,0 +1,16 @@
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
 BIN +47.3 KB 
Q4.exe
Binary file not shown.
 13  
WAP_swap_two_value.cpp
@@ -0,0 +1,13 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a,b,t;
cout<<"enter the two number";
cin>>a>>b;
t=a;
a=b;
b=t;
cout<<"a ="<<a<<" b ="<<b;
return 0;
}
 BIN +50.6 KB 
WAP_swap_two_value.exe
Binary file not shown.
 8  
WAP_the_name_of_user_in_double_quote.cpp
@@ -0,0 +1,8 @@
#include<iostream>
using namespace std;
int main()

{       
    cout<<"\"vikash\"";

}
 BIN +49.5 KB 
WAP_the_name_of_user_in_double_quote.exe
Binary file not shown.
 15  
WAP_to_chack_alphabet_upper_case_lower_case_special_character_and_digit.c
@@ -0,0 +1,15 @@
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character to check upper case or not");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("upper case character");
    else if(ch>='a'&&ch<='b')
    printf("lower case");
    else if(ch>='0'&&ch<='9')
    printf("digit");
    else
    printf("specail character");
}
 BIN +47.5 KB 
WAP_to_chack_alphabet_upper_case_lower_case_special_character_and_digit.exe
Binary file not shown.
 13  
WAP_to_check_character_is_upper_case_or_lower_case.c
@@ -0,0 +1,13 @@
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character to check upper case or not");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("upper case character");
    else if(ch>='a'&&ch<='b')
    printf("lower case");
    else
    printf("specail character");
}
 BIN +47.5 KB 
WAP_to_check_character_is_upper_case_or_lower_case.exe
Binary file not shown.
 16  
...er_roots_of_agiven_quadratic_equation_are_real_distinct_real_equal_or_imaginary_roots.cpp
@@ -0,0 +1,16 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int x,y,z,D;
cout<<"enter the value of x y z";
cin>>x>>y>>z;
D=(y*y)-4*x*z;
if(D>0)
cout<<"real root";
else if(D<0)
cout<<"imaginary root";
else if(D==0)
cout<<"equal root";
return 0;
}
 BIN +50.6 KB 
...er_roots_of_agiven_quadratic_equation_are_real_distinct_real_equal_or_imaginary_roots.exe
Binary file not shown.
 7  
Write_a_program_to_print_“MySirG.cpp
@@ -0,0 +1,7 @@
#include<iostream>
using namespace std;
int main()
{
    cout<<"\"MYSIRG\"";
    return 0;
}
 BIN +68.7 KB 
Write_a_program_to_print_“MySirG.exe
Binary file not shown.
 BIN +42.5 KB 
array/Assignment 14.pdf
Binary file not shown.
 16  
array/Define_a_function_to_calculate_x_raised_to_the_power_y.cpp
@@ -0,0 +1,16 @@
#include<iostream>
#include<math.h>
#include<conio.h>
void xpowery(int x,int y);
using namespace std;
int main(){
int x,y;
cout<<"enter the x,ynumber";
cin>>x>>y;
xpowery(x,y);
return 0;
}
void xpowery(int x,int y)
{
    cout<<pow(x,y);
} 
 BIN +55.5 KB 
array/Define_a_function_to_calculate_x_raised_to_the_power_y.exe
Binary file not shown.
 27  
array/Define_a_function_to_check_whether_a_given_number_is_a_Prime_number_or_not.cpp
@@ -0,0 +1,27 @@
#include<iostream>
using namespace std;
void prime(int n)

{
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {  count++;

            cout<<"not prime";
            break;
        }
    }
    if(count==0)
    {
      cout<<"prime number";
    }
}
int main()
{
    int n;
    cout<<"enter the number to check prime or not";
    cin>>n;
    prime(n);
}
 BIN +50.6 KB 
array/Define_a_function_to_check_whether_a_given_number_is_a_Prime_number_or_not.exe
Binary file not shown.
 29  
...ine_a_function_to_check_whether_a_given_number_is_a_term_in_a_Fibonacci_series_or_not.cpp
@@ -0,0 +1,29 @@
#include<iostream>
#include<conio.h>
void fibonacci_term_check(int);
using namespace std;
int main(){
int n;
cout<<"enter the number for check term of fibonacci series or not";
cin>>n;
fibonacci_term_check(n);
return 0;
}
void fibonacci_term_check(int n)
{
    int a=-1,b=1,sum=0,count=0;
    for(int i=0;i<=n;i++)
    {
        sum=a+b;
        if(sum==n)
        {  count++;
            cout<<"yes the number is term of fibonacci series"<<endl;
        }
        a=b;
        b=sum;
    }
    if(count==0)
    {
        cout<<"the number is not term of fibonacci series";
    }
}
 BIN +51 KB 
...ine_a_function_to_check_whether_a_given_number_is_a_term_in_a_Fibonacci_series_or_not.exe
Binary file not shown.
 29  
array/Define_a_function_to_find_the_highest_value_digit_in_a_given_number.cpp
@@ -0,0 +1,29 @@
#include<iostream>
#include<conio.h>
void heighest_value_digit(int n);
using namespace std;
int main(){
    int n;
cout<<"enter the number";
cin>>n;
 heighest_value_digit(n);
return 0;
}

void heighest_value_digit(int n)
{
int digit;
digit=n%10;
n=n/10;
while(n)
{
int digit1;
digit1=n%10;
if(digit1<digit)
{
    digit=digit;
}
n=n/10;
}
cout<<"highest value digit "<<digit;
}
 BIN +50.7 KB 
array/Define_a_function_to_find_the_highest_value_digit_in_a_given_number.exe
Binary file not shown.
 18  
...a_program_in_C_to_read_n_number_of_values_in_an_array_and_display_it_in_reverse_order.cpp
@@ -0,0 +1,18 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,temp;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>a[i];
} 
for(i=n-1;i>=0;i--)
{
cout<<" "<<a[i];
} 
}
 BIN +50.8 KB 
...a_program_in_C_to_read_n_number_of_values_in_an_array_and_display_it_in_reverse_order.exe
Binary file not shown.
 29  
array/Write_a_program_to_desending_sort_elements_of_an_array_of_size_n.cpp
@@ -0,0 +1,29 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,temp;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>a[i];
} 
for(int j=0;j<n;j++)
{
for(i=0;i<n-j-1;i++)
{
    if(a[i]>a[i+1])
    {
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
    }
}
cout<<" "<<a[i];
}
// for(i=0;i<n;i++)

 }
 BIN +50.7 KB 
array/Write_a_program_to_desending_sort_elements_of_an_array_of_size_n.exe
Binary file not shown.
 45  
array/Write_a_program_to_find_second_largest_in_an_array_.cpp
@@ -0,0 +1,45 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,temp;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>a[i];
} 
// for(int j=0;j<2;j++)
// {
// for(i=0;i<n-j;i++)
// {
//     if(a[i]>a[i+1])
//     {
//      temp=a[i];
//     a[i]=a[i+1];
//     a[i+1]=temp;
//     }
// }
// }
// cout<<" "<<a[i-1];

// }
int max1=a[0];
int max2=a[1];
for(i=2;i<n;i++)
{
    if(max1<a[i])
    {
    max1=a[i];
    }
    else 
    {
        if(max2<a[i])
        max2=a[i];
    }

}
cout<<" "<<max2;
}
 BIN +50.7 KB 
array/Write_a_program_to_find_second_largest_in_an_array_.exe
Binary file not shown.
 44  
array/Write_a_program_to_find_second_smallest_in_an_array_.cpp
@@ -0,0 +1,44 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,temp;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>a[i];
} 
// for(int j=0;j<2;j++)
// {
// for(i=0;i<n-j;i++)
// {
//     if(a[i]<a[i+1])
//     {
//      temp=a[i];
//     a[i]=a[i+1];
//     a[i+1]=temp;
//     }
// }
// }
// cout<<" "<<a[i];
// }
int max1=a[0];
int max2=a[1];
for(i=2;i<n;i++)
{
    if(max1>a[i])
    {
    max1=a[i];
    }
    else 
    {
        if(max2>a[i])
        max2=a[i];
    }

}
cout<<" "<<max2;
}
 BIN +50.7 KB 
array/Write_a_program_to_find_second_smallest_in_an_array_.exe
Binary file not shown.
 BIN +50.8 KB 
array/Write_a_program_to_find_the_greatest_number_stored_in_an_array_of_size_10.exe
Binary file not shown.
 36  
array/Write_a_program_to_find_the_greatest_number_stored_in_an_array_of_size_n.cpp
@@ -0,0 +1,36 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,temp;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
// for(i=0;i<n-1;i++)
// {
//     if(a[i]>a[i+1])
//     {
//      temp=a[i];
//     a[i]=a[i+1];
//     a[i+1]=temp;
//     }
// }
// cout<<a[i];
// }

// 2nd way to find the greatest element
int max=a[0];
for(i=1;i<n;i++)
{
    if(max<a[i])
    {
     max=a[i];
    }
}
cout<<"greatest number "<<max;
}
 BIN +50.8 KB 
array/Write_a_program_to_find_the_greatest_number_stored_in_an_array_of_size_n.exe
Binary file not shown.
 35  
array/Write_a_program_to_find_the_smallest_number_stored_in_an_array_of_size_n.cpp
@@ -0,0 +1,35 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,temp;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
// for(i=0;i<n-1;i++)
// {
//     if(a[i]<a[i+1])
//     {
//      temp=a[i];
//     a[i]=a[i+1];
//     a[i+1]=temp;
//     }
// }
// cout<<a[i];
// }
// 2nd way 
int max=a[0];
for(i=1;i<n;i++)
{
    if(max>a[i])
    {
     max=a[i];
    }
}
cout<<"smallest number "<<max;
}
 BIN +50.8 KB 
array/Write_a_program_to_find_the_smallest_number_stored_in_an_array_of_size_n.exe
Binary file not shown.
 27  
array/Write_a_program_to_sort_elements_of_an_array_of_size_n.cpp
@@ -0,0 +1,27 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,temp;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>a[i];
} 
for(int j=0;j<n;j++)
{
for(i=0;i<n-j-1;i++)
{
    if(a[i]<a[i+1])
    {
     temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
    }
}
cout<<" "<<a[i];
}
}
 BIN +50.7 KB 
array/Write_a_program_to_sort_elements_of_an_array_of_size_n.exe
Binary file not shown.
 19  
array/_Write_a_program_in_C_to_copy_the_elements_of_one_array_into_another_array.cpp
@@ -0,0 +1,19 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i;
cout<<"enter the size of array";
cin>>n;
int a[n],b[n];
cout<<"enter the element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>a[i];
    b[i]=a[i];
} 
for(i=0;i<n;i++)
{
cout<<" "<<b[i];
} 
}
 BIN +50.8 KB 
array/_Write_a_program_in_C_to_copy_the_elements_of_one_array_into_another_array.exe
Binary file not shown.
 24  
...o_calculate_the_average_of_numbers_stored_in_an_array_of_size_n__Take_value_from_user.cpp
@@ -0,0 +1,24 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,sum=0;
float avg=0;
cout<<"enter the size of array";
cin>>n;
int summ[n];
cout<<"enter the element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>summ[i];

}
for(int j=0;j<n;j++)
{

  sum=sum+summ[j];
}
avg=float(sum)/n;
cout<<avg;
return 0; 
}
 BIN +50.9 KB 
...o_calculate_the_average_of_numbers_stored_in_an_array_of_size_n__Take_value_from_user.exe
Binary file not shown.
 21  
array/_Write_a_program_to_calculate_the_sum_of_all_even_numbers_and_sum_of_all_odd.cpp
@@ -0,0 +1,21 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,sumEv=0,sumod=0;
cout<<"enter the size of array";
cin>>n;
int arr[n];
cout<<"enter the element "<<n<<"  \n";
for(i=0;i<n;i++)
{
 cin>>arr[i];
 if(arr[i]%2==0)
 sumEv=sumEv+arr[i];
 else
 sumod=sumod+arr[i];
}
cout<<"sum of evan number"<<sumEv<<" \n";
cout<<"sum of odd number"<<sumod<<" \n";
return 0;
}
 BIN +50.8 KB 
array/_Write_a_program_to_calculate_the_sum_of_all_even_numbers_and_sum_of_all_odd.exe
Binary file not shown.
 22  
...m_to_calculate_the_sum_of_numbers_stored_in_an_array_of_size_10__Take_value_from_user.cpp
@@ -0,0 +1,22 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i,sum=0;
cout<<"enter the size of array";
cin>>n;
int summ[n];
cout<<"enter the element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>summ[i];

}
for(int j=0;j<n;j++)
{

    sum=sum+summ[j];
}
cout<<sum;
return 0; 
}
 BIN +50.8 KB 
...m_to_calculate_the_sum_of_numbers_stored_in_an_array_of_size_10__Take_value_from_user.exe
Binary file not shown.
 BIN +49.7 KB 
array/array_and_function/Assignment 15.pdf
Binary file not shown.
 BIN +49.2 KB 
array/array_and_function/Assignment 16.pdf
Binary file not shown.
 59  
...ction/Write_a_function_in_C_to_count_a_total_number_of_duplicate_elements_in_an_array.cpp
@@ -0,0 +1,59 @@
#include<iostream>
#include<conio.h>
void duplicate(int arr[],int n);
using namespace std;
int main(){
int n,i;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element of array";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
duplicate(a,n);
return 0;
}
void duplicate(int arr[],int n)
{
// int i,j,c=0;
// for(i=0;i<n;i++)
// { c=0;

//    if(arr[i]!='n')
//     {
//     for(j=i+1;j<n;j++)
//     {
//       if(arr[i]==arr[j])
//       {
//          c++;
//          arr[j]='n';
//       }
//     }
//     cout<<" total duplicate number is"<<c<<"\n"<<arr[i]<<" \n";
//     }
// }
//2nd way 

int i,j,c=0,k=0;

for(i=0;i<n;i++)
{ 

    for(j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
       arr[i]='c';
      }
    }
    if(arr[i]=='c')
    k++;

}
 cout<<"total duplicate number is "<<k;

}


 BIN +50.8 KB 
...ction/Write_a_function_in_C_to_count_a_total_number_of_duplicate_elements_in_an_array.exe
Binary file not shown.
 41  
...and_function/Write_a_function_in_C_to_count_the_frequency_of_each_element_of_an_array.cpp
@@ -0,0 +1,41 @@
#include<iostream>
#include<conio.h>
void frequency(int arr[],int n);
using namespace std;
int main(){
int n,i;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element of array";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
frequency(a,n);
return 0;
}
void frequency(int arr[],int n)
{ 
    int i,j,c;
    for(i=0;i<n;i++)
    {   
         if(arr[i]!=-1)
         {
         c=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                arr[j]=-1;
            }
        }


        cout<<arr[i]<<"...."<<c<<"\n";
         }
    }


}
 BIN +50.8 KB 
...and_function/Write_a_function_in_C_to_count_the_frequency_of_each_element_of_an_array.exe
Binary file not shown.
 45  
...Write_a_function_in_C_to_merge_two_arrays_of_the_same_size_sorted_in_descending_order.cpp
@@ -0,0 +1,45 @@
#include<iostream>
#include<conio.h>
void sortm(int arr[],int n);
using namespace std;
int main(){
int n,m,i;
cout<<"enter the size of first array\n";
cin>>n;
cout<<"enter the size of second array";
cin>>m;
int a[n],b[m],c[m+n];
cout<<"enter the element of first array";
for( i=0;i<n;i++)
{
cin>>a[i];
c[i]=a[i];
}
cout<<"enter the element of second array";
for(int j=0;j<n;j++)
{
cin>>b[j];
c[i]=b[j];
i++;
}
int t=m+n;
sortm(c,t);
return 0;
}
void sortm(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        cout<<" "<<arr[j];
    } 
}
 BIN +51.5 KB 
...Write_a_function_in_C_to_merge_two_arrays_of_the_same_size_sorted_in_descending_order.exe
Binary file not shown.
 30  
...unction/Write_a_function_to_find_the_greatest_number_from_the_given_array_of_any_size.cpp
@@ -0,0 +1,30 @@
#include<iostream>
#include<conio.h>
int greatest(int arr[],int n);
using namespace std;
int main(){
int n,i;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element of array";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"  "<<greatest(a,n);
return 0;
}
int greatest(int arr[],int n)
{
    int i,max=0;
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
 BIN +50.8 KB 
...unction/Write_a_function_to_find_the_greatest_number_from_the_given_array_of_any_size.exe
Binary file not shown.
 30  
...unction/Write_a_function_to_find_the_smallest_number_from_the_given_array_of_any_size.cpp
@@ -0,0 +1,30 @@
#include<iostream>
#include<conio.h>
int smallest(int arr[],int n);
using namespace std;
int main(){
int n,i;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element of array";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"  "<<smallest(a,n);
return 0;
}
int smallest(int arr[],int n)
{
    int i,max=0;
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max>arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
 BIN +50.8 KB 
...unction/Write_a_function_to_find_the_smallest_number_from_the_given_array_of_any_size.exe
Binary file not shown.
 59  
...an_array_by_n_position_in_d_direction__The_d_is_an_indicative_value_for_left_or_right.cpp
@@ -0,0 +1,59 @@
#include<iostream>
#include<conio.h>
void rotation(int arr[],int n);
using namespace std;
int main(){
int n,i;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element of array";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
rotation(a,n);
return 0;
}
// void rotation(int arr[],int n)
// {
//     int m,b[n],temp;
//     cout<<"enter the number rotation"; 
//     cin>>m;
//     for(int j=0;j<m;j++)
//     {
//      temp=arr[0];
//     for(int i=0;i<n-1;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     arr[n-1]=temp;
//     }
//     for(int i=0;i<n;i++)
//     {
//     cout<<"  "<<arr[i];
//     }  
// }


////////2nd way 
void rotation(int arr[],int n)
{
    int m,b[n],k=0;
    cout<<"enter the number rotation"; 
    cin>>m;
    for(int j=m;j<n;j++)
  {
      b[k]=arr[j];
      k++;
  }
  for(int i=0;i<m;i++)
  {
    b[k]=arr[i];
    k++;
  }
    for(int i=0;i<n;i++)
    {
    cout<<"  "<<b[i];
    }  
}
 BIN +50.9 KB 
...an_array_by_n_position_in_d_direction__The_d_is_an_indicative_value_for_left_or_right.exe
Binary file not shown.
 34  
array/array_and_function/Write_a_function_to_sort_an_array_of_any_size.cpp
@@ -0,0 +1,34 @@
#include<iostream>
#include<conio.h>
void sorting(int arr[],int n);
using namespace std;
int main(){
int n,i;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element of array";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
sorting(a,n);
return 0;
}
void sorting(int arr[],int n)
{
    int temp,i;
    for(int j=0;j<n;j++)
{
for(i=0;i<n-j-1;i++)
{
    if(arr[i]<arr[i+1])
    {
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
    }
}
cout<<" "<<arr[i];
}
}
 BIN +50.8 KB 
array/array_and_function/Write_a_function_to_sort_an_array_of_any_size.exe
Binary file not shown.
 56  
array/array_and_function/_Write_a_function_in_C_to_print_all_unique_elements_in_an_array.cpp
@@ -0,0 +1,56 @@
#include<iostream>
#include<conio.h>
void duplicate(int arr[],int n);
using namespace std;
int main(){
int n,i;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the element of array";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
duplicate(a,n);
return 0;
}
// void duplicate(int arr[],int n)
// {
// int i,j,c=0;
// for(i=0;i<n;i++)
// {  
//     if(arr[i]!='n')
//     {   cout<<"  "<<arr[i];
//     for(j=i+1;j<n;j++)
//     {
//       if(arr[i]==arr[j])
//       {
//          c++;
//          arr[j]='n';
//       }
//     }
//     }
// }

// cout<<" total duplicate number is  s"<<c;
void duplicate(int arr[],int n)
{
int i,j,c=0;
for(i=0;i<n;i++)
{  c=0;

    for(j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
         c++;
      }
    }
    if(c==0)
    {
      cout<<" "<<arr[i];
    }

}
}
 BIN +50.8 KB 
array/array_and_function/_Write_a_function_in_C_to_print_all_unique_elements_in_an_array.exe
Binary file not shown.
 10  
array/array_and_function/bnbj.c
@@ -0,0 +1,10 @@
#include <stdio.h>
#include <conio.h>
int main(){
textcolor(BLUE);
cprintf("Hello World!\n"); // cprintf specially use for console(screen)
textcolor(RED+128); // 128 is value of BLINK
cprintf("Blinking Text");
getch();
return 0;
}
 84  
array/array_and_function/gfg.c
@@ -0,0 +1,84 @@
#include<stdio.h>

// int main()
// {
//     int a[6],i;

//     for(i=1;i<=5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
// cyclic rotation gfg
//     int last=a[4];

//     for(i=4;i>0;i--)
//     {
//       a[i]=a[i-1];

//     }
//     a[0]=last;
//wave rotation in gfg
    // for(i=0;i<5;i++)
    // {
    //   int temp=a[i];
    //       a[i]=a[i+1];
    //       a[i+1]=temp;
    //       i++;

    // }
    //reverse arry in group
   int n=3;
    static int j=1;
    int arr[5];
    for(i=3;i>0;i--)
    {
      arr[j]=a[i];
       j++;

    }

    // printf("%d",j);
    for(i=5;i>3;i--)
    {
        arr[j]=a[i];
        j++;
    }

// for(i=1;i<=5;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }
void rotateArr(int arr[],int,int);
int main()
{
    int arr[]={1,2,3,4,5};
    rotateArr(arr,2,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

}
void rotateArr(int arr[], int d, int n)
{
  int brr[n],i,j=0;
  for(i=d;i<n;i++)
  {
      brr[j]=arr[i];
      j++;
  }
 +

  for(i=0;i<d;i++)
  {
      brr[j]=arr[i];
      j++;
  }
  j=0;
  for(int i=0;i<n;i++)
  {  
      arr[i]=brr[j];
      j++;
  }
}
 BIN +47.8 KB 
array/array_and_function/gfg.exe
Binary file not shown.
 29  
...mension_array/6__Write_a_program_in_C_to_find_the_sum_of_rows_and_columns_of_a_Matrix.cpp
@@ -0,0 +1,29 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],i,j,sumc=0,sumr=0;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];

    }

}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
         sumr=sumr+a[i][j];
         sumc=sumc+a[j][i];
    }
        cout<<"sum of " <<i<<" rows is"<<sumr<<"\n";
    cout<<"sum of " <<i<<" column is"<<sumc<<"\n";
    sumc=0;
    sumr=0;
}
}
 BIN +50.8 KB 
...mension_array/6__Write_a_program_in_C_to_find_the_sum_of_rows_and_columns_of_a_Matrix.exe
Binary file not shown.
 42  
.../Write_a_program_in_C_to_accept_a_matrix_and_determine_whether_it_is_a_sparse_matrix_.cpp
@@ -0,0 +1,42 @@
1#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,m,r,i,j;
cout<<"enter the number of rows";
cin>>n;
cout<<"enter the number of column";
cin>>m;
int a[n][m];
r=n*m;
cout<<"enter the "<<r<<" element of matrix";
for(i=0;i<n;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<m;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
} 
int c=0;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        if(a[i][j]==0)
        {
            c++;
        }
    }
}
cout<<"number of zero is"<<c<<"\n";
    if(c>(r/2))
    {
     cout<<"sparse matrix";

    }
    else
    {
        cout<<"not sparse matrix";
    }
}
 BIN +52.1 KB 
.../Write_a_program_in_C_to_accept_a_matrix_and_determine_whether_it_is_a_sparse_matrix_.exe
Binary file not shown.
 39  
...sion_array/Write_a_program_to_calculate_the_product_of_two_matrices_each_of_order_3x3.cpp
@@ -0,0 +1,39 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
cout<<"enter the 9 element of first matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
}
cout<<"enter the 9 element of second matrix";
for(i=0;i<3;i++)
{   cout<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
          cout<<"element number"<<i+1<<" "<<j+1<<"\n";

        cin>>b[i][j];
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
          sum=sum+a[i][k]*b[k][j];
        }
        c[i][j]=sum;
        cout<<sum<<" ";
        sum=0;
    }
    cout<<"\n";
}
}
 BIN +51.5 KB 
...sion_array/Write_a_program_to_calculate_the_product_of_two_matrices_each_of_order_3x3.exe
Binary file not shown.
 25  
...on/multidimension_array/_Write_a_program_in_C_to_find_the_transpose_of_a_given_matrix.cpp
@@ -0,0 +1,25 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],i,j;
cout<<"enter the 9 element of first matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {

        //b[i][j]=a[i][j];
        cout<<a[j][i]<<" ";
    }
    cout<<"\n";
}
}
 BIN +50.8 KB 
...on/multidimension_array/_Write_a_program_in_C_to_find_the_transpose_of_a_given_matrix.exe
Binary file not shown.
 36  
...mension_array/_Write_a_program_to_calculate_the_sum_of_two_matrices_each_of_order_3x3.cpp
@@ -0,0 +1,36 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],c[3][3],i,j;
cout<<"enter the 9 element of first matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
}
cout<<"enter the 9 element of second matrix";
for(i=0;i<3;i++)
{   cout<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
          cout<<"element number"<<i+1<<" "<<j+1<<"\n";

        cin>>b[i][j];
    }
}
cout<<"sum of matrix\n";
for(i=0;i<3;i++)
{  
    for(j=0;j<3;j++)
    {
    cout<<(a[i][j]+b[i][j])<<" ";
    }
    cout<<"\n";
}

return 0;
}
 BIN +51.6 KB 
...mension_array/_Write_a_program_to_calculate_the_sum_of_two_matrices_each_of_order_3x3.exe
Binary file not shown.
 39  
...ultidimension_array/__Write_a_program_in_C_to_find_the_row_with_maximum_number_of_1s_.cpp
@@ -0,0 +1,39 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],i,j;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
} 
int c=0,k=0,r=0;
for(i=0;i<3;i++)
{   c=0;
    for(j=0;j<3;j++)
    {
        if(a[i][j]==1)
        {
            c++;
        }
    }
    if(c>k)
    {
    k=c;
    r=i;
    }
}
if(k==0)
{
    cout<<"not 1 in matrix";
}
else
{
cout<<" "<<k<<" "<<r;
}
}
 BIN +50.8 KB 
...ultidimension_array/__Write_a_program_in_C_to_find_the_row_with_maximum_number_of_1s_.exe
Binary file not shown.
 31  
...idimension_array/__Write_a_program_in_C_to_find_the_sum_of_left_diagonals_of_a_matrix.cpp
@@ -0,0 +1,31 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],i,j;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
}
int sum=0;
int k=2;
cout<<"right digonal is  ";
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
     if(j==k)
     {
       sum=sum+a[i][j];
       cout<<" "<<a[i][j]<<"\n";
     }
    }
    k--;
}
cout<<"sum="<<sum;
}
 BIN +50.9 KB 
...idimension_array/__Write_a_program_in_C_to_find_the_sum_of_left_diagonals_of_a_matrix.exe
Binary file not shown.
 29  
...dimension_array/__Write_a_program_in_C_to_find_the_sum_of_right_diagonals_of_a_matrix.cpp
@@ -0,0 +1,29 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],i,j;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
}
int sum=0;
cout<<"right digonal is  ";
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
     if(i==j)
     {
       sum=sum+a[i][j];
       cout<<" "<<a[i][j]<<"\n";
     }
    }
}
cout<<"sum="<<sum;
}
 BIN +50.9 KB 
...dimension_array/__Write_a_program_in_C_to_find_the_sum_of_right_diagonals_of_a_matrix.exe
Binary file not shown.
 47  
...ray/__Write_a_program_in_C_to_print_or_display_the_lower_triangular_of_a_given_matrix.cpp
@@ -0,0 +1,47 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],i,j;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
} 
// for(i=0;i<3;i++)
// {
//     for(j=0;j<3;j++)
//     {
//         if(j<=i)
//         {
//             cout<<a[i][j]<<" ";
//         }
//     }
//     cout<<"\n";
// }
//2nd way
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(j<i)
        {
        a[i][j]=0;
        }
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {

        cout<<a[i][j]<<" ";

    }
    cout<<"\n";
}
}
 BIN +50.8 KB 
...ray/__Write_a_program_in_C_to_print_or_display_the_lower_triangular_of_a_given_matrix.exe
Binary file not shown.
 49  
...ray/__Write_a_program_in_C_to_print_or_display_the_upper_triangular_of_a_given_matrix.cpp
@@ -0,0 +1,49 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],i,j;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
} 
// for(i=0;i<3;i++)
// {
//     for(j=0;j<3;j++)
//     {
//         if(j>=i)
//         {
//             cout<<a[i][j]<<" ";
//         }
//     }
//     cout<<"\n";
// }


//2nd way
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(j>i)
        {
        a[i][j]=0;
        }
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {

        cout<<a[i][j];

    }
    cout<<"\n";
}
}
 BIN +50.8 KB 
...ray/__Write_a_program_in_C_to_print_or_display_the_upper_triangular_of_a_given_matrix.exe
Binary file not shown.
 32  
.../array_and_function/multidimension_array/find_the_maximum_element_in_the_left_digonal.cpp
@@ -0,0 +1,32 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],i,j;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
}
int c=0,k=0; 
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(j==2-i)
        {
            c=a[i][j];
        }
    }
    if(c>k)
    {
        k=c;
    }

}
cout<<"maximum number of left digonal\n"<<k;
}
 BIN +50.7 KB 
.../array_and_function/multidimension_array/find_the_maximum_element_in_the_left_digonal.exe
Binary file not shown.
 32  
...array_and_function/multidimension_array/find_the_maximum_element_in_the_right_digonal.cpp
@@ -0,0 +1,32 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],i,j;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
}
int c=0,k=0; 
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(i==j)
        {
            c=a[i][j];
        }
    }
    if(c>k)
    {
        k=c;
    }

}
cout<<"maximum number of right digonal\n"<<k;
}
 8  
array/array_and_function/multidimension_array/q.c
@@ -0,0 +1,8 @@
#include<stdio.h>
int main()
{
    int a=15;
    float b=1.234;
    printf("%d",a,b);
    return 0;
}
 BIN +47.3 KB 
array/array_and_function/multidimension_array/q.exe
Binary file not shown.
 36  
array/array_and_function/multidimension_array/search_the_element_in_matrix_o_n_order.cpp
@@ -0,0 +1,36 @@
#include<iostream>
using namespace std;
int main()
{
int a[3][3],i,j;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{  
    for(j=0;j<3;j++)
    {

        cin>>a[i][j];
    }
}
int row=0,col=2,choice;
cout<<"enter the number do you want to search";
cin>>choice;
int m=0;
while(m<=8)
{   
if(a[row][col]==choice)
{
    cout<<"position of element"<<row<<col;
    break;
}
else if(a[row][col]>choice)
    col--;
    else
    row++;
m++;
}
if(m==9)
{
    cout<<"element not found";
}
}
 BIN +50.8 KB 
array/array_and_function/multidimension_array/search_the_element_in_matrix_o_n_order.exe
Binary file not shown.
 54  
array/array_and_function/multidimension_array/wap_to_print_matrix_sprial_form.cpp
@@ -0,0 +1,54 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a[3][3],b[3][3],i,j,k;
cout<<"enter the 9 element of matrix";
for(i=0;i<3;i++)
{   cout<<" "<<i+1<<" row number\n";
    for(j=0;j<3;j++)
    {
        cout<<"element number"<<i+1<<" "<<j+1<<"\n";
        cin>>a[i][j];
    }
} 
int top,bottom,left,right;
top=0;
bottom=2;
left=0;
right=2;
int count =0;
while(count<=8)
{
    for(i=left;i<=right;i++)
    {
        printf("%d ",a[top][i]);
        count++;
    }
   for(i=top+1;i<=bottom;i++)
    {
        printf("%d ",a[i][bottom]);
        count++;
    }
       for(i=top+1;i>=left;i--)
    {
        printf("%d ",a[right][i]);
        count++;
    }
    for(i=top;i<=bottom-1;i++)
    {
        printf("%d ",a[right-1][i]);
        count++;
    }
    // printf("%d",count);
    // if(count==9)
    // {
    //     break;
    // }

}



}

 BIN +83.6 KB 
array/array_and_function/multidimension_array/wap_to_print_matrix_sprial_form.exe
Binary file not shown.
 16  
...d_function/structure/Define_a_structure_Employee_with_member_variables_id__name__salary.c
@@ -0,0 +1,16 @@
#include<stdio.h>
#include<string.h>
struct employee
{
    int empid;
    char empname[30];
    float empsalary;
};
int main()
{   struct employee e={1,"fjg",8.9};
   e.empname[strlen(e.empname)-1]='\0';
     printf("employee id =%d\n",e.empid);
      printf("employee name =%s\n",e.empname);
       printf("employee salary =%f\n",e.empsalary);
    return 0;
}
 BIN +47.4 KB 
...function/structure/Define_a_structure_Employee_with_member_variables_id__name__salary.exe
Binary file not shown.
 31  
...tructure/Write_a_function_to_display_employee_data____Refer_structure_from_question_1__.c
@@ -0,0 +1,31 @@
#include<stdio.h>
#include<string.h>
struct employee 
{int empid;
char empname[30];
int salary;
};
struct employee input()
{
struct employee e;
printf("enter the empid,name,salary\n");
scanf("%d",&e.empid);
fflush(stdin);
gets(e.empname);
scanf("%d",&e.salary);
return e;
}
void display(struct employee e)
{
  printf("employee id =%d\n",e.empid);
    printf("employee name =%s\n",e.empname);
      printf("employee id =%d\n",e.salary);


}
int main()
{
    struct employee e,m;
    m=input();
    display(m);
}
 BIN +48.6 KB 
...ucture/Write_a_function_to_display_employee_data____Refer_structure_from_question_1__.exe
Binary file not shown.
 65  
...structure/Write_a_function_to_find_the_highest_salary_employee_from_a_given_array_of_10.c
@@ -0,0 +1,65 @@
#include<stdio.h>
#include<string.h>
struct employee
{
int empid;
char empname[30];
int empsalary;
};
struct employee input()
{  struct employee e;
  printf("enter the employee id");
  scanf("%d",&e.empid);  
   printf("enter the employee name");
   fflush(stdin);
   gets(e.empname);
   printf("enter the employee salary");
  scanf("%d",&e.empsalary); 
  return e;
}
void display(struct employee b[],int n)
{
int i;
for(i=0;i<n;i++)
{
    printf("employee id=%d\n",b[i].empid);
     printf("employee name=%s\n",b[i].empname);
      printf("employee salary=%d\n",b[i].empsalary);
}
}
void highestsalary(struct employee s[],int n)
{
struct employee temp;
int i,j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
    if(s[j].empsalary<s[j+1].empsalary)
    {
      temp=s[j];
      s[j]=s[j+1];
      s[j+1]=temp;
    }
}
}
}

int main()
{
    struct employee e[10];
    int i;

    for(i=0;i<3;i++)
    {
     e[i]=input();
    }
    //    for(i=0;i<10;i++)
    // {
    //  display(e[i]);
    // }
    // 2nd method 
     highestsalary(e,3);
    display(e,1);

}
 BIN +49 KB 
...ructure/Write_a_function_to_find_the_highest_salary_employee_from_a_given_array_of_10.exe
Binary file not shown.
 55  
...cture/Write_a_function_to_sort_employees_according_to_their_names__refer_structure_from.c
@@ -0,0 +1,55 @@
#include<stdio.h>
#include<string.h>
struct employee
{    int empid;
    char name[30];
    float salary;
};
struct employee input()
{  
    struct employee e;
    printf("enter the employee id\n");
    scanf("%d",&e.empid);
        fflush(stdin);
        printf("enter the employee name\n");
       gets(e.name);
    printf("enter the employee salary\n");
    scanf("%f",&e.salary);
    return e;
}
void display(struct employee e[5])
{  int i;
    for(i=0;i<5;i++)
    {
    printf("employee id =%d\n",e[i].empid);
     printf("employee name =%s\n",e[i].name);
      printf("employee id =%f\n",e[i].salary);
    }
}
struct employee sortbyname(struct employee e[])
{   int i,j;
   struct employee temp; 
//struct employee e[5];
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-1-i;j++)
        {
            if((strcmp(e[j].name,e[j+1].name))>0)
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;

            }
        } 
    }
}
int main()
{   struct employee b[5];
int i;
   for(i=0;i<5;i++)
    b[i]=input();

    sortbyname(b);
    display(b);
}
 BIN +49.8 KB 
...ure/Write_a_function_to_sort_employees_according_to_their_names__refer_structure_from.exe
Binary file not shown.
 25  
...ture/Write_a_function_to_take_input_employee_data_from_the_user____Refer_structure_from.c
@@ -0,0 +1,25 @@
#include<stdio.h>
#include<string.h>
struct employee
{
    int empid;
    char empname[30];
    float empsalary;
};
void input(struct employee e)
{
    printf("enter the employee id name salary\n");
    scanf("%d",&e.empid);
    fflush(stdin);
    fgets(e.empname,30,stdin);
    scanf("%f",&e.empsalary);
       e.empname[strlen(e.empname)-1]='\0';
     printf("employee id =%d\n",e.empid);
      printf("employee name =%s\n",e.empname);
       printf("employee salary =%f\n",e.empsalary);
}
int main()
{    struct employee e;
     input(e);
    return 0;
}
 BIN +48.6 KB 
...re/Write_a_function_to_take_input_employee_data_from_the_user____Refer_structure_from.exe
Binary file not shown.
 38  
.../Write_a_program_to_enter_the_marks_of_5_students_in_Chemistry__Mathematics_and_physics.c
@@ -0,0 +1,38 @@
/* Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student*/
#include<stdio.h>
struct student
{
  char name[20];
  int rollnumber;
float phy_marks,chem_marks,math_marks;
};
int main()
{   struct student marks[5];
float p[5];
for(int i=0;i<5;i++)
{
    int sum=0;

    printf("enter the name of student\n");
    gets(marks[i].name);
    fflush(stdin);
    printf("enter the roll number of student\n");
    scanf("%d",&marks[i].rollnumber);
    printf("enter the marks of physics out of 100\n");
    scanf("%f",&marks[i].phy_marks);
    printf("enter the marks of chemistry out of 100\n");
    scanf("%f",&marks[i].chem_marks);
    printf("enter the marks of math out of 100\n");
    scanf("%f",&marks[i].math_marks);
    sum=marks[i].phy_marks+marks[i].chem_marks+marks[i].math_marks;

    p[i]=(sum*100)/300;
}
    for(int i=0;i<5;i++)
    {
    printf("rollnumber of student is %d \n precentage is =%.3f",marks[i].rollnumber,p[i]);
    }  
}
 BIN +48.6 KB 
...rite_a_program_to_enter_the_marks_of_5_students_in_Chemistry__Mathematics_and_physics.exe
Binary file not shown.
 42  
...ure/Write_a_program_to_store_information_of_n_students_and_display_them_using_structure.c
@@ -0,0 +1,42 @@
#include<stdio.h>
#include<string.h>
struct student
{
    int studentid;
    char name[30];
     char branch[10];
};
void input(int n)
{  int i;

    struct student e[n];
    for(i=0;i<n;i++)
    {
    printf("enter the student  id\n");
    scanf("%d",&e[i].studentid);
        fflush(stdin);
        printf("enter the student  name\n");
       gets(e[i].name);
    printf("enter the student  branch \n");
    scanf("%s",&e[i].branch);
    }
}
void display(int n)
{  int i;
    struct student e[n];
    for(i=0;i<n;i++)
    {
    printf("student id =%d\n",e[i].studentid);
     printf("student  name =%s\n",e[i].name);
      printf("enter student branch =%s\n",e[i].name);
    }
}
int main()

{   
    int n;
      printf("enter the number of student\n");
  scanf("%d",&n);
    input(n);
    display(n);
}
 BIN +48.6 KB 
...e/Write_a_program_to_store_information_of_n_students_and_display_them_using_structure.exe
Binary file not shown.
 40  
...nction/structure/_Write_a_program_to_calculate_the_difference_between_two_time_periods_.c
@@ -0,0 +1,40 @@
#include<stdio.h>
struct time
{
    int sec;
    int hour;
    int minute;
};
void difference(struct time s,struct time e,struct time diff)
{
while(s.sec<e.sec)
{
    s.sec=s.sec+60;
    s.minute--;

}
diff.sec=s.sec-e.sec;
while(s.minute<e.minute)
{
    s.minute=s.minute+60;
    s.hour--;
}
diff.minute=s.minute-e.minute;
diff.hour=s.hour-e.hour;
printf("start different -->%d:%d:%d\n",diff.hour,diff.minute,diff.sec);

}
int main()
{
       struct time s,e,diff;

    printf("enter the start time in sequence hour minute second\n");
    scanf("%d%d%d",&s.hour,&s.minute,&s.sec);
    printf("enter the end time in sequence hour minute second\n");
    scanf("%d%d%d",&e.hour,&e.minute,&e.sec); 
    printf("start time -->%d:%d:%d\n",s.hour,s.minute,s.sec);
    printf("start end -->%d:%d:%d\n",e.hour,e.minute,e.sec);
    difference( s,e,diff);


}
 BIN +48.2 KB 
...tion/structure/_Write_a_program_to_calculate_the_difference_between_two_time_periods_.exe
Binary file not shown.
 1  
array/array_and_function/structure/tempCodeRunnerFile.c
@@ -0,0 +1 @@
gets
 87  
array/array_and_function/structure/understandin_of_stricture copy.c
@@ -0,0 +1,87 @@
#include<stdio.h>
#include<string.h>
struct book
{
int bookid;
char title[30];
 float price;
};
void display(struct book b)
{
   printf("%d\n%s\n%f\n",b.bookid,b.title,b.price);
}
struct book input()
{
  struct book b;
  printf("enter book id,title,and price of a book");
  scanf("%d",&b.bookid);
  fflush(stdin);
  fgets(b.title,20,stdin);
  b.title[strlen(b.title)-1]='\0';
  scanf("%f",&b.price);
  return b;
}
void sortbyprice(struct book b[],int size)
{
  int r,i;
  struct book temp;
  for(r=1;r<=size-1;r++)
  {
    for(i=0;i<=size-1-r;i++)
    {
      if(b[i].price>b[i+1].price)
      {
        temp=b[i];
       b[i]=b[i+1];
       b[i+1]=temp;

      }
    }
  }
}
// int main()
// {
//   struct book b1={1,"cpp",340.0f};
//   printf("\n ");
//   display(b1);
//   struct book b2;
//   b2=input(); 
//   display(b2);
//   return 0; 
// }
int main()
{
  struct book b[5];
  int i;
  for(i=0;i<=4;i++)
  {
    b[i]=input();
  }
  sortbyprice(b,5); 
   for(i=0;i<=4;i++)
  {
   display(b[i]);
  }
  printf("\n ");
  return 0; 
}

// void display(struct employee b )
// {
//   printf("%d \n %s \n%f \n",b.employee id)
// }
// int main()
// {
//      struct employee b1={1,"cpp",9785.8};

//     printf("%.01f \n",b1.salary);
//     printf("%d \n",b1.id);
//       printf("%s \n",b1.name);
//       printf("enter the id ,name ,salary of employee");
//       scanf("%d",b2.id);
//     //   fflush(stdin);
//       gets(b2.name);
//       scanf("%f",&b2.salary);
//        printf("%.01f \n",b2.salary);
//     printf("%d \n",b2.id);
//       printf("%s \n",b2.name);
 87  
array/array_and_function/structure/understandin_of_stricture.c
@@ -0,0 +1,87 @@
#include<stdio.h>
#include<string.h>
struct book
{
int bookid;
char title[30];
 float price;
};
void display(struct book b)
{
   printf("%d\n%s\n%f\n",b.bookid,b.title,b.price);
}
struct book input()
{
  struct book b;
  printf("enter book id,title,and price of a book");
  scanf("%d",&b.bookid);
  fflush(stdin);
  fgets(b.title,20,stdin);
  b.title[strlen(b.title)-1]='\0';
  scanf("%f",&b.price);
  return b;
}
void sortbyprice(struct book b[],int size)
{
  int r,i;
  struct book temp;
  for(r=1;r<=size-1;r++)
  {
    for(i=0;i<=size-1-r;i++)
    {
      if(b[i].price>b[i+1].price)
      {
        temp=b[i];
       b[i]=b[i+1];
       b[i+1]=temp;

      }
    }
  }
}
// int main()
// {
//   struct book b1={1,"cpp",340.0f};
//   printf("\n ");
//   display(b1);
//   struct book b2;
//   b2=input(); 
//   display(b2);
//   return 0; 
// }
int main()
{
  struct book b[5];
  int i;
  for(i=0;i<=4;i++)
  {
    b[i]=input();
  }
  sortbyprice(b,5); 
   for(i=0;i<=4;i++)
  {
   display(b[i]);
  }
  printf("\n ");
  return 0; 
}

// void display(struct employee b )
// {
//   printf("%d \n %s \n%f \n",b.employee id)
// }
// int main()
// {
//      struct employee b1={1,"cpp",9785.8};

//     printf("%.01f \n",b1.salary);
//     printf("%d \n",b1.id);
//       printf("%s \n",b1.name);
//       printf("enter the id ,name ,salary of employee");
//       scanf("%d",b2.id);
//     //   fflush(stdin);
//       gets(b2.name);
//       scanf("%f",&b2.salary);
//        printf("%.01f \n",b2.salary);
//     printf("%d \n",b2.id);
//       printf("%s \n",b2.name);
 BIN +48.9 KB 
array/array_and_function/structure/understandin_of_stricture.exe
Binary file not shown.
 28  
array/clg.cpp
@@ -0,0 +1,28 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i;
cout<<"enter the size of array";
cin>>n;
int a[n],b[n];
cout<<"enter the in sorted order element  "<<n<<" \n";
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n-1;i++)
{
    int temp,temp2;
    temp=a[i+1];
    temp2=a[i];
    a[i]=temp;
    a[i+1]=temp2;
    i++;

}
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}
 BIN +83.5 KB 
array/clg.exe
Binary file not shown.
 23  
...rloaded_functions_to_calculate_area_of_circle__area_of_rectangle_and_area_of_traingle.cpp
@@ -0,0 +1,23 @@
#include<iostream>
using namespace std;
float area(int r )
{
return(3.14*r*r);
}
int  area(int a,int b )
{
   return a*b;
}

float area(double a,double b)
{
    return (a*b)/2;
}
int main()
{
 int a,b;
    cout<<"area of circle"  <<area(5)<<endl;
    cout<<"area of ractangle "<<area(4,5)<<endl;
    cout<<"area of triangle is"<<area( 4.5, 6.34)<<endl;

}
 BIN +51 KB 
...rloaded_functions_to_calculate_area_of_circle__area_of_rectangle_and_area_of_traingle.exe
Binary file not shown.
 21  
...+/Write_functions_using_function_overloading_to_add_two_numbers_having_different_data.cpp
@@ -0,0 +1,21 @@
#include<iostream>
#include<conio.h>
using namespace std;
int sum(int x ,int y)
{
return x+y;
}
float sum(double x,double y)
{
    return x+y;
}
int main(){
int a,b;
cout<<"enter two number \n";
cin>>a>>b;
cout<<" "<<endl<<sum(a,b);
cout<<"enter two number\n";
cin>>a>>b;
cout<<" "<<sum(a,b);
return 0;
}
 BIN +51.3 KB 
...+/Write_functions_using_function_overloading_to_add_two_numbers_having_different_data.exe
Binary file not shown.
 30  
...erloading_to_find_a_maximum_of_two_numbers_and_oth_the_numbers_can_be_integer_or_real.cpp
@@ -0,0 +1,30 @@
#include<iostream>
#include<conio.h>
using namespace std;
void maxnumber(int x,int y)
{
    if(x>y)
    {
        cout<<"grater \n"<<x;
    }
    else
    cout<<"grater \n"<<y;

}
void maxnumber(float x,float y)
{
    if(x>y)
    {
        cout<<"grater \n"<<x;
    }
    else
    cout<<"grater \n"<<y;

}
int main(){
int a,b;
cout<<"enter the two number \n";
cin>>a>>b;
maxnumber(a,b);
return 0;
}
 BIN +51.1 KB 
...erloading_to_find_a_maximum_of_two_numbers_and_oth_the_numbers_can_be_integer_or_real.exe
Binary file not shown.
 20  
...n_in_c++/_Define_a_function_to_swap_data_of_two_int_variables_using_call_by_reference.cpp
@@ -0,0 +1,20 @@
#include<iostream>
#include<conio.h>
void swap(int &,int &);
using namespace std;
int main(){
int a,b;
cout<<"enter the two number";
cin>>a>>b;
swap(a,b);
cout<<"after swap "<<a<<" "<<b;
return 0;
}
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

}
 BIN +50.7 KB 
...n_in_c++/_Define_a_function_to_swap_data_of_two_int_variables_using_call_by_reference.exe
Binary file not shown.
 18  
...n_c++/_Write_a_function_using_the_default_argument_that_is_able_to_add_2_or_3_numbers.cpp
@@ -0,0 +1,18 @@
#include<iostream>
#include<conio.h>
//int add(int a,int b,int c=0);
using namespace std;
int add(int a,int b,int c=0)
{
return a+b+c;
}
int main(){
    int a,b,c;
cout<<"Enter the two number";
cin>>a>>b;
cout<<"sum of two number"<<add(a,b)<<endl;
cout<<"Enter the three number";
cin>>a>>b>>c;
cout<<"sum of three number"<<add(a,b,c);
return 0;
}
 BIN +50.8 KB 
...n_c++/_Write_a_function_using_the_default_argument_that_is_able_to_add_2_or_3_numbers.exe
Binary file not shown.
 57  
...unctions_to_find_the_area_of_the_different_shapes_like_square__rectangle___circle_etc.cpp
@@ -0,0 +1,57 @@
#include<iostream>
#include<conio.h>
using namespace std;
class Area
{ 
    private:
    int side,sqarea;
    int length,breadth,rectanglearea;
    int radius;
    float circlearea;
    public:
    void set_date_of_square(int s)
    {
        side=s;
    }
    int calculate_area_of_square()
    {
         sqarea=side*side;
         return sqarea;
    }
    void set_data_of_rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int calculate_area_of_rectangle()
    {
        rectanglearea=length*breadth;
        return rectanglearea;
    }
    void set_data_of_circle(int r)
    {
        radius=r;
    }
    float calculate_area_of_circle()
    {
        circlearea=3.14*radius*radius;
        return circlearea;
    }
};
int main(){
    Area a,b;
    a.set_date_of_square(5);
    cout<<a.calculate_area_of_square()<<endl;
    a.set_data_of_rectangle(5,6);
    cout<<a.calculate_area_of_rectangle()<<endl;
     a.set_data_of_circle(4);
     cout<<a.calculate_area_of_circle()<<endl;
         b.set_date_of_square(7);
    cout<<b.calculate_area_of_square()<<endl;
    b.set_data_of_rectangle(9,6);
    cout<<b.calculate_area_of_rectangle()<<endl;
     b.set_data_of_circle(49);
     cout<<b.calculate_area_of_circle()<<endl;

return 0;
}
 BIN +52.6 KB 
...unctions_to_find_the_area_of_the_different_shapes_like_square__rectangle___circle_etc.exe
Binary file not shown.
 31  
.../Define_a_class_Circle_and_define_an_instance_member_function_to_find_the_area_of_the.cpp
@@ -0,0 +1,31 @@
#include<iostream>
#include<conio.h>
using namespace std;
class areacircle
{
    private:
    int radius;
    float area;
    public:
    void setdata(int r)
    {
        radius=r;
    }
    void calculatearea()
    {
         area=3.14*radius*radius;
    }
    float Area()
    {
        return area;
    }
};
int main()
{
    areacircle r;
    r.setdata(4);
    r.calculatearea();
    cout<<r.Area();
    return 0;

}
 BIN +50 KB 
.../Define_a_class_Circle_and_define_an_instance_member_function_to_find_the_area_of_the.exe
Binary file not shown.
 73  
..._and_define_an_instance_member_function_to_find_the_Factorial_of_a_number_using_class.cpp
@@ -0,0 +1,73 @@
#include<iostream>
#include<conio.h>
using namespace std;
// class fectorial
// {private:
// int a,fect;
// public:
// void setdata(int x)
// {
// a=x;
// }
// void showdata()
// {
//    int i;
//     fect=1;
//    for(i=1;i<=a;i++)
// {
//     fect=fect*i;
// } 
// cout<<"fectorial is"<<fect;
// }
// };
// int main(){
// fectorial f;
// f.setdata(5);
// f.showdata();
// return 0;
// }
class fectorial
{
private:
int n,fect;
public:
void setn(int x)
{
    n=x;
}
int getn()
{
    return n;
}
int getfectorial()
{
    return fect;

}
void calculatefectorial()
{

   int i ,f;
   f=1;
   if(n<0)
   {

     cout<<"enter the positive number\n";
   }
   for(i=1;i<=n;i++)
{
    f=f*i;
} 
fect=f;
}

};
int main()
{
    fectorial f;
    f.setn(5);
    f.calculatefectorial();
    cout<<"fectorial of"<<f.getn()<<"is"<<f.getfectorial();


}
 BIN +51 KB 
..._and_define_an_instance_member_function_to_find_the_Factorial_of_a_number_using_class.exe
Binary file not shown.
 43  
...bject/Define_a_class_LargestNumber_and_define_an_instance_member_function_to_find_the.cpp
@@ -0,0 +1,43 @@
#include<iostream>
#include<conio.h>
using namespace std;
class findlargest
{
private:
int a,b,c,largest;
public:
void setdata(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}
int largestnumber()
{
    return largest;
}
void calculatelargest()
{
    if(a>b && a>c)
    {
        largest=a;
    }
    else
    {
        if(b>c)
        {
            largest=b;
        }
        else
        largest=c;
    }
}
};
int main(){
findlargest f;
f.setdata(5,6,6);
f.calculatelargest();
cout<<f.largestnumber();

return 0;
}
 BIN +50.6 KB 
...bject/Define_a_class_LargestNumber_and_define_an_instance_member_function_to_find_the.exe
Binary file not shown.
 32  
..._class_Rectangle_and_define_an_instance_member_function_to_find_the_area_of_ractangle.cpp
@@ -0,0 +1,32 @@
#include<iostream>
#include<conio.h>
using namespace std;
class ractagle
{
    private:
    int lenght,breadth;
    int area;
    public:
    void setdata(int x,int y)
    {
        lenght=x;
        breadth=y;

    }
    int findarea()
    {
        return area;
    }

    void calculatearea()
    {  
        area=lenght*breadth;
    }
};
int main(){
ractagle r;
r.setdata(5,6);
r.calculatearea();
cout<<r.findarea();
return 0;
}
 BIN +50 KB 
..._class_Rectangle_and_define_an_instance_member_function_to_find_the_area_of_ractangle.exe
Binary file not shown.
 36  
...fine_a_class_ReverseNumber_and_define_an_instance_member_function_to_find_the_reverse.cpp
@@ -0,0 +1,36 @@
#include<iostream>
#include<conio.h>
using namespace std;
class reversnumber
{
private:
int n,reverse;
public:
void setdata(int x)
{
    n=x;
}
int getreverse()
{
    return reverse;
}
void calculatereverse()
{ 
    int y=0,x;
    while (n)
    {
        x=n%10;
        y=y*10+x;
        n=n/10;
    }
    reverse=y;

}
};
int main(){
reversnumber r;
r.setdata(3476);
r.calculatereverse();
cout<<r.getreverse();
return 0;
}
 BIN +50.6 KB 
...fine_a_class_ReverseNumber_and_define_an_instance_member_function_to_find_the_reverse.exe
Binary file not shown.
 39  
...bject/Define_a_class_Square_to_find_the_square_of_a_number_and_write_a_C___program_to.cpp
@@ -0,0 +1,39 @@
#include<iostream>
#include<conio.h>
using namespace std;
class findsquare
{
private:
int n,square;
static int count; 
public:
void setdata(int x)
{
    n=x;
}
int getsquare()
{
    return square;
}
void calcultesquare()
{
    square=n*n;
    count++;
}
int countingfunctioncall()
{
    return count;
}
};
int findsquare::count=0;
int main(){
findsquare s,s1;
s.setdata(40);
s.calcultesquare();
s1.setdata(80);
s1.calcultesquare();
cout<<s.getsquare()<<endl;
cout<<s1.getsquare()<<endl;
cout<<"\ntotal call of function is \n"<<s.countingfunctioncall();
return 0;
}
 BIN +51.6 KB 
...bject/Define_a_class_Square_to_find_the_square_of_a_number_and_write_a_C___program_to.exe
Binary file not shown.
 39  
...n_c++/class and object/Define_a_class_Time_to_represent_Time__like_3_hr_45_min_20_sec.cpp
@@ -0,0 +1,39 @@
#include<iostream>
#include<conio.h>
using namespace std;
class time
{private:
    int hour,minute,second;
    public:
    void setdata(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void showdata()
    {

    //     if(second>60)
    //     {
    //         minute=minute+(second/60);
    //         second=second%60;
    //     }
    //    if(minute>60)
    //     {
    //         hour=hour+minute/60;
    //         minute=minute%60;
    //     }
          minute=minute+second/60;
      second=second%60;
      hour=hour+minute/60;
      minute=minute%60;
         cout<<hour<<"hr"<<minute<<"min"<<second<<"sec";
    }
};
int main(){
time t;
t.setdata(3,12,320);
t.showdata();
return 0;
}
 BIN +50.5 KB 
...n_c++/class and object/Define_a_class_Time_to_represent_Time__like_3_hr_45_min_20_sec.exe
Binary file not shown.
 53  
array/fuction_in_c++/class and object/complex_class_and_define_set_data.cpp
@@ -0,0 +1,53 @@
#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    // void getdata()
    // {
    //     int x,y;
    //     cout<<"enter the real and imaginary part\n";
    //     cin>>x>>y;

    // }
    void showdata()
    {  
        cout<<"real part"<<a<<"\nimaginary part "<<b;
    }
    // complex add(complex c)
    // {
    //     complex temp;
    //     temp.a=a+c.a;
    //     temp.b=b+c.b;
    //     return temp;

    // }
        complex operator +(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;

    }
};
int main()
{
complex c1,c2,c3;
//c1.getdata();
c1.setdata(4,5);
c2.setdata(5,4);
c3=c1+c2;

c3.showdata();

return 0;
}   
 BIN +50.7 KB 
array/fuction_in_c++/class and object/complex_class_and_define_set_data.exe
Binary file not shown.
 36  
...fuction_in_c++/class and object/complex_class_set_data_show_data_complex_add_function.cpp
@@ -0,0 +1,36 @@
#include<iostream>
#include<conio.h>
using namespace std;
class complex 
{   
    private:
    int realpart,imaginarypart;
    public:
    void setdata(int r,int i)
    {
        realpart=r;
        imaginarypart=i;

    }
    void showdata()
    {
        cout<<"realpart->"<<realpart<<endl<<"imaginarypart->"<<imaginarypart<<endl;
    }
    complex add(complex c2)
    { 
        complex temp;
        temp.realpart=realpart+c2.imaginarypart;
        temp.imaginarypart=imaginarypart+c2.imaginarypart; 
        return temp;

    }

};
int main(){
complex c1,c2,c3;
c1.setdata(4,5);
c2.setdata(6,7);
c3=c1.add(c2);
c3.showdata();
return 0;
}
 BIN +51.1 KB 
...fuction_in_c++/class and object/complex_class_set_data_show_data_complex_add_function.exe
Binary file not shown.
 24  
array/fuction_in_c++/class and object/single_inheritance.cpp
@@ -0,0 +1,24 @@
#include<iostream>
using namespace std;
class A
{  public:
     private:
    void f1()
    {
        printf("hello");
    }
  protected:
    void f1()
    {
        printf("hello protected ");
    }
};
class v2:public A
{

};
int main()
{
    A a;
    a.f1();
}
 BIN +82 KB 
array/fuction_in_c++/class and object/single_inheritance.exe
Binary file not shown.
 13  
array/fuction_in_c++/class and object/tempCodeRunnerFile.cpp
@@ -0,0 +1,13 @@
int getn()
{
    return n;
}
int getfectorial()
{
    return fect;

}
void calculatefectorial()
{
    fect=f;
}
 47  
...in_c++/class and object/time_class_and_define_settime_showtime_normalize_and_add_time.cpp
@@ -0,0 +1,47 @@
#include<iostream>
#include<conio.h>
using namespace std;
class time
{
    private:
    int hour,minute,second;
    public:
    void set_time(int h,int m,int s)
    {
      hour=h;
      minute=m;
      second=s;
    }
    void showtime()
    {
    // cout<<"hour=>"<<hour<<endl<<"minute=>"<<minute<<endl<<"second=>"<<second<<endl;
    cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
    void normalize()
    {
      minute=minute+second/60;
      second=second%60;
      hour=hour+minute/60;
      minute=minute%60;
    }
    time add(time t2)
    {
        time temp;
        temp.hour=hour+t2.hour;
        temp.minute=minute+t2.minute;
        temp.second=second+t2.second;
        temp.normalize();
        return (temp);
    }

};

int main(){
    time t,t2,t3;
    t.set_time(3,45,78);
    t2.set_time(4,45,78);
    t3=t.add(t2);
    t3.showtime();

return 0;
}
#include <iostream>
using namespace std;
void reverse(int arr){
    int arr2[];
    arr2=arr;
    for(int i=ar;i>=0;i--)
    {
         cout<<ar[i];
    }
}
int main() {
	int t;
	cin>>t;
	int arr[n];
	while(t>0){

	 cin>>n   
	  reverse(4);   

	    t--;
	}
	return 0;
}
 33  
array/fuction_in_c++/pascal_traingle.cpp
@@ -0,0 +1,33 @@
#include<iostream>
using namespace std;

int fectorial(int n)
{
int i;
int fect=1;
for(i=1;i<=n;i++)
{
    fect=fect*i;
}
return fect;
}
int combination(int n,int r)
{  
    int c=(fectorial(n)/(fectorial(r)*fectorial(n-r)));

    return c;
}
int main()
{  int n;
cout<<"enter the number to print pascal triangle\n";
cin>>n;
for(int i=0;i<5;i++)
{
    for(int j=0;j<=i;j++)
    {
cout<<" "<<combination(i,j);
    }
    cout<<endl;
}

}
 BIN +51.2 KB 
array/fuction_in_c++/pascal_traingle.exe
Binary file not shown.
 4  
array/fuction_in_c++/tempCodeRunnerFile.cpp
@@ -0,0 +1,4 @@
// float area(float a,float b)
// {
//     return (a*b*0.5);
// }
 25  
array/reverse_array_by_swaping.cpp
@@ -0,0 +1,25 @@
#include<iostream>
using namespace std;
int main(){
int a[10]={9,3,-4,1,0,-5,-4,3,9,5};
int i,j,temp;
for(i=0;i<10;i++)
{
    for(j=0;j<9;j++)

{     
    if(a[i]>0)
    {
       temp=a[i];
        a[i]=a[j];
        a[j]=temp;

    }
}

}
for(i=0;i<9;i++)
{
    cout<<"  "<<a[i];
}
}
 BIN +50.2 KB 
array/reverse_array_by_swaping.exe
Binary file not shown.
 17  
array/wap_to_print_frequency_of_each_element_in_each_order_optimal_code.cpp
@@ -0,0 +1,17 @@
#include<iostream>
using namespace std;
int main(){
int a[10]={9,3,4,1,0,5,4,3,9,5};
int freq[1000]={0},i;
for(i=0;i<10;i++)
{
   freq[a[i]]++;
}
for(i=0;i<1000;i++)
{  
    if(freq[i]!=0)
    {
        printf("%d==>%d\n",i,freq[i]);
    }
}
}
 BIN +82.4 KB 
array/wap_to_print_frequency_of_each_element_in_each_order_optimal_code.exe
Binary file not shown.
 6  
calculate_length_of_string_using_printf.c
@@ -0,0 +1,6 @@
#include<stdio.h>
int main()
{
int x=printf("heloo");
printf("  lenght %d",x);
}
 BIN +47.3 KB 
calculate_length_of_string_using_printf.exe
Binary file not shown.
 13  
check_evan_or_odd.cpp
@@ -0,0 +1,13 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n;
cout<<"enter the number ";
cin>>n;
if(n%2==0)
cout<<"evan number";
else
cout<<"odd number";
return 0;
}
 13  
check_given_year_leep_or_not.cpp
@@ -0,0 +1,13 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n;
cout<<"enter the year";
cin>>n;
if(n%400==0||(n%100!=0)&&n%4==0)
    cout<<"leep year";
else
cout<<"not leap year";
return 0;
}
 BIN +50.5 KB 
check_given_year_leep_or_not.exe
Binary file not shown.
 16  
check_number_is_three_digit_or_not.cpp
@@ -0,0 +1,16 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n,i=0,x;
cout<<"enter the number";
cin>>n;
while(i<=n)
{
    x=n%10;
    n=n/10;
    i++;
}
cout<<i;
return 0;
}
 BIN +50.6 KB 
check_number_is_three_digit_or_not.exe
Binary file not shown.
 14  
check_number_positive_or_non_positive.cpp
@@ -0,0 +1,14 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int n;
cout<<"enter the number ";
cin>>n;
if(n>=0)
cout<<"positive";
else
cout<<"non positive";

return 0;
}
 BIN +50 KB 
check_number_positive_or_non_positive.exe
Binary file not shown.
 16  
enter_the_length_of_tringle_and_check_the_valid_or_not.c
@@ -0,0 +1,16 @@
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three side of length");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c)
    printf("valid traingle");
    else if(a+c>b)
    printf("valid traingle");
    else if(b+c>a)
    printf("valid traingle");
    else
    printf("not valid");

}
 BIN +47.5 KB 
enter_the_length_of_tringle_and_check_the_valid_or_not.exe
Binary file not shown.
 15  
find_greatest_between_three.cpp
@@ -0,0 +1,15 @@
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a,b,c;
cout<<"enter three number check greater";
cin>>a>>b>>c;
if(a>b&&a>c)
cout<<"greater"<<a;
else if(b>c)
cout<<"greater"<<b;
else
cout<<"greater"<<c;
return 0;
}
 BIN +50.7 KB 
find_greatest_between_three.exe
Binary file not shown.
 15  
find_out_put.c/Q.c
@@ -0,0 +1,15 @@
#include<stdio.h>
int main()
{
    int i=0;
    while (i<=6)
    {
       if(i%2)
       i=i-3;
       else
       i=i+5;
       printf("%d ",i);
    }
    printf("%d",i);

}
 BIN +47.3 KB 
find_out_put.c/Q.exe
Binary file not shown.
 23  
find_out_put.c/moduls_op.c
 BIN  
find_out_put.c/moduls_op.exe
Binary file not shown.
 0  
ga,
Empty file.
 33  
game.c
 BIN  
game.exe
Binary file not shown.
 7  
h.cpp
 BIN  
h.exe
Binary file not shown.
 10  
k.c
 BIN  
k.exe
Binary file not shown.
 BIN  
loop/Assignment - 4.pdf
Binary file not shown.
 BIN  
loop/Assignment - 5.pdf
Binary file not shown.
 BIN  
loop/Assignment - 6.pdf
Binary file not shown.
 BIN  
loop/Assignment - 7 Updated.pdf
Binary file not shown.
 BIN  
loop/Program.exe
Binary file not shown.
 14  
loop/calculate_fectorial_of_a_number.cpp
 BIN  
loop/calculate_fectorial_of_a_number.exe
Binary file not shown.
 15  
loop/calculate_sum_of_square_n_number.cpp
 15  
loop/calculate_the_cube_of_n_number.cpp
 14  
loop/calculate_the_sum_of_n_natural_number.cpp
 BIN  
loop/calculate_the_sum_of_n_natural_number.exe
Binary file not shown.
 22  
loop/check_given_number_term_of_fibonacci_series_or_not.cpp
 BIN  
loop/check_given_number_term_of_fibonacci_series_or_not.exe
Binary file not shown.
 20  
loop/check_number_is_armstrong_or_not.cpp
 BIN  
loop/check_number_is_armstrong_or_not.exe
Binary file not shown.
 19  
loop/check_the_number_is_prime_or_not.cpp
 BIN  
loop/check_the_number_is_prime_or_not.exe
Binary file not shown.
 16  
loop/count_the_digit_of_a_number.cpp
 BIN  
loop/count_the_digit_of_a_number.exe
Binary file not shown.
 0  
loop/cout
Empty file.
 24  
loop/find_next_prime_number.cpp
 BIN  
loop/find_next_prime_number.exe
Binary file not shown.
 17  
loop/find_the_nth_term_of_fibonacci_series.cpp
 BIN  
loop/find_the_nth_term_of_fibonacci_series.exe
Binary file not shown.
 17  
loop/hcf_of_two_number.cpp
 BIN  
loop/hcf_of_two_number.exe
Binary file not shown.
 17  
loop/lcm_of_two_number.cpp
 BIN  
loop/lcm_of_two_number.exe
Binary file not shown.
 19  
loop/print__prime_number_under100.cpp
 BIN  
loop/print__prime_number_under100.exe
Binary file not shown.
 20  
loop/print_all_armstrong_number_under_100.cpp
 BIN  
loop/print_all_armstrong_number_under_100.exe
Binary file not shown.
 14  
loop/print_cube_of_n_number.cpp
 BIN  
loop/print_cube_of_n_number.exe
Binary file not shown.
 13  
loop/print_n_evan_in_reverse_order.cpp
 BIN  
loop/print_n_evan_in_reverse_order.exe
Binary file not shown.
 11  
loop/print_n_natural_number.c
 BIN  
loop/print_n_natural_number.exe
Binary file not shown.
 22  
loop/print_n_natural_numbr_in_reverse_order.cpp
 BIN  
loop/print_n_natural_numbr_in_reverse_order.exe
Binary file not shown.
 11  
loop/print_n_number_of_table_user_choice.cpp
 BIN  
loop/print_n_number_of_table_user_choice.exe
Binary file not shown.
 16  
loop/print_n_term_of_fibonacci_series.cpp
 BIN  
loop/print_n_term_of_fibonacci_series.exe
Binary file not shown.
 9  
loop/print_name_5_times.c
 BIN  
loop/print_name_5_times.exe
Binary file not shown.
 21  
loop/print_prime_number_between_two_given_number.cpp
 BIN  
loop/print_prime_number_between_two_given_number.exe
Binary file not shown.
 15  
loop/print_square_of_n_evan_number.cpp
 BIN  
loop/print_square_of_n_evan_number.exe
Binary file not shown.
 15  
loop/print_sum_of_n_number.cpp
 BIN  
loop/print_sum_of_n_number.exe
Binary file not shown.
 0  
loop/sum_of_n_evan_number.cpp
Empty file.
 BIN  
loop/sum_of_n_evan_number.exe
Binary file not shown.
 BIN  
loop/switch case/Assignment - 9 Updated.pdf
Binary file not shown.
 6  
.../write_a_program_manu_driven_program_with_the_following_option_add_and_sub_mul_div_exit.c
 16  
loop/write_a_program_to_reverse_of_a_number.cpp
 BIN  
loop/write_a_program_to_reverse_of_a_number.exe
Binary file not shown.
 13  
number_divisible_by_5_or_not.cpp
 1  
p
 21  
pattern.c
 BIN  
pattern.exe
Binary file not shown.
 BIN  
pattern_assingment8/Assignment - 8 Updated.pdf
Binary file not shown.
 14  
pattern_assingment8/Q1.c
 BIN  
pattern_assingment8/Q1.exe
Binary file not shown.
 34  
pattern_assingment8/Q10.c
 BIN  
pattern_assingment8/Q10.exe
Binary file not shown.
 19  
pattern_assingment8/Q19.c
 BIN  
pattern_assingment8/Q19.exe
Binary file not shown.
 16  
pattern_assingment8/Q2.c
 BIN  
pattern_assingment8/Q2.exe
Binary file not shown.
 16  
pattern_assingment8/Q4.c
 BIN  
pattern_assingment8/Q4.exe
Binary file not shown.
 16  
pattern_assingment8/Q5.c
 BIN  
pattern_assingment8/Q5.exe
Binary file not shown.
 16  
pattern_assingment8/Q7.C
 BIN  
pattern_assingment8/Q7.exe
Binary file not shown.
 28  
pattern_assingment8/Q8.c
 BIN  
pattern_assingment8/Q8.exe
Binary file not shown.
 28  
pattern_assingment8/Q9.c
 BIN  
pattern_assingment8/Q9.exe
Binary file not shown.
 15  
pattern_assingment8/Write_a_function_to_calculate_simple_interest___TSRS.cpp
 BIN  
pattern_assingment8/Write_a_function_to_calculate_simple_interest___TSRS.exe
Binary file not shown.
 15  
pattern_assingment8/Write_a_function_to_calculate_the_area_of_a_circle___TSRS.cpp
 BIN  
pattern_assingment8/Write_a_function_to_calculate_the_area_of_a_circle___TSRS.exe
Binary file not shown.
 15  
..._whether_a_given_number_is_even_or_odd__Return_1_if_the_number_is_evan_otherwise_zero.cpp
 BIN  
..._whether_a_given_number_is_even_or_odd__Return_1_if_the_number_is_evan_otherwise_zero.exe
Binary file not shown.
 18  
pattern_assingment8/hackerrank.c
 BIN  
pattern_assingment8/hackerrank.exe
Binary file not shown.
 16  
pattern_assingment8/hhh.c
 BIN  
pattern_assingment8/hhh.exe
Binary file not shown.
 52  
...Write_a_function_to_sort_an_array_of_int_type_values____void_sort_int__ptr_int_size____.c
 BIN  
...ite_a_function_to_sort_an_array_of_int_type_values____void_sort_int__ptr_int_size____.exe
Binary file not shown.
 15  
pointer/Write_a_program_to_calculate_the_length_of_the_string_using_a_pointer.c
 BIN  
pointer/Write_a_program_to_calculate_the_length_of_the_string_using_a_pointer.exe
Binary file not shown.
 24  
pointer/Write_a_program_to_compute_the_sum_of_all_elements_in_an_array_using_pointers_.c
 BIN  
pointer/Write_a_program_to_compute_the_sum_of_all_elements_in_an_array_using_pointers_.exe
Binary file not shown.
 24  
...rite_a_program_to_count_the_number_of_vowels_and_consonants_in_a_string_using_a_pointer.c
 BIN  
...te_a_program_to_count_the_number_of_vowels_and_consonants_in_a_string_using_a_pointer.exe
Binary file not shown.
 18  
pointer/Write_a_program_to_find_the_maximum_number_between_two_numbers_using_a_pointer.c
 BIN  
pointer/Write_a_program_to_find_the_maximum_number_between_two_numbers_using_a_pointer.exe
Binary file not shown.
 24  
pointer/Write_a_program_to_print_the_elements_of_an_array_in_reverse_order.c
 BIN  
pointer/Write_a_program_to_print_the_elements_of_an_array_in_reverse_order.exe
Binary file not shown.
 23  
pointer/_Write_a_function_to_swap_strings_of_two_char_arrays_of_calling_functions___TSRS.c
 BIN  
pointer/_Write_a_function_to_swap_strings_of_two_char_arrays_of_calling_functions___TSRS.exe
Binary file not shown.
 19  
pointer/_Write_a_function_to_swap_values_of_two_in_variables_of_calling_function___TSRS_.c
 BIN  
pointer/_Write_a_function_to_swap_values_of_two_in_variables_of_calling_function___TSRS_.exe
Binary file not shown.
 17  
pointer/_Write_a_program_to_print_a_string_in_reverse_using_a_pointer.c
 BIN  
pointer/_Write_a_program_to_print_a_string_in_reverse_using_a_pointer.exe
Binary file not shown.
 0  
prin
Empty file.
 6  
print_/n.c
 BIN  
print_/n.exe
Binary file not shown.
 15  
print_/print_/print_the_/_symbol.c
 BIN  
print_/print_/print_the_/_symbol.exe
Binary file not shown.
 16  
print_greater_between_two_number.cpp
 BIN  
print_greater_between_two_number.exe
Binary file not shown.
 15  
print_n_evan_number.cpp
 BIN  
print_n_evan_number.exe
Binary file not shown.
 10  
print_number_without_last_digit.cpp
 BIN  
print_number_without_last_digit.exe
Binary file not shown.
 20  
print_sum_of_digit.cpp
 BIN  
print_sum_of_digit.exe
Binary file not shown.
 10  
print_unit_digit_of_a_number.cpp
 BIN  
print_unit_digit_of_a_number.exe
Binary file not shown.
 18  
string/Write_a_program_in_C_to_Find_the_Frequency_of_Characters.c
 BIN  
string/Write_a_program_in_C_to_Find_the_Frequency_of_Characters.exe
Binary file not shown.
 30  
...in_C_to_count_the_total_number_of_alphabets__digits_and_special_characters_in_a_string_.c
 BIN  
..._C_to_count_the_total_number_of_alphabets__digits_and_special_characters_in_a_string_.exe
Binary file not shown.
 26  
string/Write_a_program_to_convert_a_given_string_into_lowercase.c
 BIN  
string/Write_a_program_to_convert_a_given_string_into_lowercase.exe
Binary file not shown.
 26  
string/Write_a_program_to_convert_a_given_string_into_uppercase.c
 BIN  
string/Write_a_program_to_convert_a_given_string_into_uppercase.exe
Binary file not shown.
 0  
string/_Write_a_C_program_to_sort_a_string_array_in_ascending_order.c
Empty file.
 48  
string/_Write_a_function_to_reverse_a_string_word_wise.c
 BIN  
string/_Write_a_function_to_reverse_a_string_word_wise.exe
Binary file not shown.
 14  
string/_Write_a_program_in_C_to_copy_one_string_to_another_string_.c
 BIN  
string/_Write_a_program_in_C_to_copy_one_string_to_another_string_.exe
Binary file not shown.
 21  
string/_Write_a_program_to_count_the_occurrence_of_a_given_character_in_a_given_string.c
 BIN  
string/_Write_a_program_to_count_the_occurrence_of_a_given_character_in_a_given_string.exe
Binary file not shown.
 20  
string/_Write_a_program_to_count_vowels_in_a_given_string.cpp
 BIN  
string/_Write_a_program_to_count_vowels_in_a_given_string.exe
Binary file not shown.
 20  
string/_Write_a_program_to_reverse_a_string.c
 BIN  
string/_Write_a_program_to_reverse_a_string.exe
Binary file not shown.
 29  
... and function/2d array string/Create_an_authentication_system__It_should_be_menu_driven.c
 BIN  
...nd function/2d array string/Create_an_authentication_system__It_should_be_menu_driven.exe
Binary file not shown.
 26  
...2d array string/From_the_list_of_IP_addresses__check_whether_all_ip_addresses_are_valid.c
 BIN  
... array string/From_the_list_of_IP_addresses__check_whether_all_ip_addresses_are_valid.exe
Binary file not shown.
 31  
...e_task_is_to_find_the_minimum_distance_between_the_given_two_words_in_the_list_of_words.c
 BIN  
...task_is_to_find_the_minimum_distance_between_the_given_two_words_in_the_list_of_words.exe
Binary file not shown.
 47  
string/string and function/2d array string/Q9.c
 BIN  
string/string and function/2d array string/Q9.exe
Binary file not shown.
 28  
...m_to_find_the_number_of_vowels_in_each_of_the_5_strings_stored_in_two_dimensional_array.c
 BIN  
...to_find_the_number_of_vowels_in_each_of_the_5_strings_stored_in_two_dimensional_array.exe
Binary file not shown.
 33  
...string/Write_a_program_to_print_the_strings_which_are_palindrome_in_the_list_of_strings.c
 BIN  
...ring/Write_a_program_to_print_the_strings_which_are_palindrome_in_the_list_of_strings.exe
Binary file not shown.
 20  
...l_addresses__check_whether_all_email_addresses_have_in_addres_it_Printthe_odd_email_out.c
 BIN  
...addresses__check_whether_all_email_addresses_have_in_addres_it_Printthe_odd_email_out.exe
Binary file not shown.
 43  
...Write_a_program_to_sort_10_city_names_stored_in_two_dimensional_arrays__taken_from_user.c
 BIN  
...ite_a_program_to_sort_10_city_names_stored_in_two_dimensional_arrays__taken_from_user.exe
Binary file not shown.
 22  
...d function/2d array string/__Write_a_program_to_search_a_string_in_the_list_of_strings_.c
 BIN  
...function/2d array string/__Write_a_program_to_search_a_string_in_the_list_of_strings_.exe
Binary file not shown.
 10  
string/string and function/2d array string/understanding.c
 BIN  
string/string and function/2d array string/understanding.exe
Binary file not shown.
 27  
...g/string and function/Write_a_function_to_find_the_repeated_character_in_a_given_string.c
 BIN  
...string and function/Write_a_function_to_find_the_repeated_character_in_a_given_string.exe
Binary file not shown.
 10  
string/string and function/Write_a_function_to_reverse_a_string.c
 BIN  
string/string and function/Write_a_function_to_reverse_a_string.exe
Binary file not shown.
 35  
string/string and function/_Write_a_function_to_check_string_palindrom_or_not.c
 BIN  
string/string and function/_Write_a_function_to_check_string_palindrom_or_not.exe
Binary file not shown.
 25  
...tion/_Write_a_function_to_check_whether_a_given_string_is_an_alphanumeric_string_or_not.c
 BIN  
...on/_Write_a_function_to_check_whether_a_given_string_is_an_alphanumeric_string_or_not.exe
Binary file not shown.
 11  
string/string and function/_Write_a_function_to_compare_two_strings.c
 BIN  
string/string and function/_Write_a_function_to_compare_two_strings.exe
Binary file not shown.
 16  
string/string and function/_Write_a_function_to_count_words_in_a_given_string.c
 BIN  
string/string and function/_Write_a_function_to_count_words_in_a_given_string.exe
Binary file not shown.
 10  
string/string and function/_Write_a_function_to_transform_string_into_lowercase.c
 10  
string/string and function/_Write_a_function_to_transform_string_into_uppercase.c
 10  
string/string and function/find_the_length_of_string.c
 BIN  
string/string and function/find_the_length_of_string.exe
Binary file not shown.
 12  
..._Write_a_program_to_calculate_the_length_of_the_string___without_using_built_in_method_.c
 BIN  
...rite_a_program_to_calculate_the_length_of_the_string___without_using_built_in_method_.exe
Binary file not shown.
 0  
sum_n_square_of_a_number.cpp
Empty file.
 13  
swap_two_number_without_third_variable.cpp
 BIN  
swap_two_number_without_third_variable.exe
Binary file not shown.
 9  
take_character_print_acii_number.c
 10  
take_character_print_acii_number.cpp
 BIN  
take_character_print_acii_number.exe
Binary file not shown.
 16  
take_selling_price_and_cost_price_of_the_product_and_find_the_profit_percent.c
 BIN  
take_selling_price_and_cost_price_of_the_product_and_find_the_profit_percent.exe
Binary file not shown.
 10  
wap_calculate_area_of_circle.cpp
 BIN  
wap_calculate_area_of_circle.exe
Binary file not shown.
 5  
wap_print_%d.c
 BIN  
wap_print_%d.exe
Binary file not shown.
 21  
..._passing_marks_is_33_now_display_whether_the_condidate_passed_the_examination_or_failed.c
 BIN  
...assing_marks_is_33_now_display_whether_the_condidate_passed_the_examination_or_failed.exe
Binary file not shown.
0 comments on commit 5d2d83b
@Vikashgupta95239
 
Add heading textAdd bold text, <Ctrl+b>Add italic text, <Ctrl+i>
Add a quote, <Ctrl+Shift+.>Add code, <Ctrl+e>Add a link, <Ctrl+k>
Add a bulleted list, <Ctrl+Shift+8>Add a numbered list, <Ctrl+Shift+7>Add a task list, <Ctrl+Shift+l>
Directly mention a user or team
Reference an issue, pull request, or discussion
Add saved reply
Leave a comment
No file chosen
Attach files by dragging & dropping, selecting or pasting them.
Styling with Markdown is supported
 You’re receiving notifications because you’re watching this repository.
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About

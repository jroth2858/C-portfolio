//Example of the const type qualifier.

const static int dont_change = 2000; //Tell the compiler that this variable won't change value

int main(){
    dont_change = 1999; //Then change that value anyway. This will result in a compile time error.

    return 0;
}
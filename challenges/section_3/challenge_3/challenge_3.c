

int main(){
    int * restrict ptr; //Tells the compiler that it can look for optimizations with this pointer.
    int * bad_ptr;
    int array[10] = {0};
    int x = 0;
    
    ptr = array;
    bad_ptr = array; //This is bad since the compiler expects that only ptr will point to array.

    for(int i = 0; i < 20; i++){
        // It is _possible_ that the comipler tries to optimize the next three 
        //  commands by replacing three assembly instructions with the equivalent
        //  of:
        //  ptr[0] += 6;
        //  bad_ptr[0] *= 3;
        //  which would result an unexpected answer.
        ptr[0] += 2;
        bad_ptr[0] *= 3;
        ptr[0] += 4;

        // This is the same caluclation performed on an integer without the restrict 
        //  qualifier involved and should always result in the correct calculation.
        x += 2;
        x *= 3;
        x += 4;
    }

    return 0;
}
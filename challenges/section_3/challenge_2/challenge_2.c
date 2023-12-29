//Dummy example showing how the volatile keyword might be used.
//  This type qualifier tells the compiler that the variable _will_ change value
//  potentially in a way not easily calculable by the compiler and so it should not 
//  optimize away this possibility. The below example assumes a potential hardware
//  interrupt.

volatile int flag = 0; //Shared between two functions, one of which interfaces with hardware.

void HardwareHandler(){
    // If hardware interrupt, then... <code would go here>
    flag ++;
}

int main(){
    while (flag == 0){
        //Do lots of stuff
    }
}

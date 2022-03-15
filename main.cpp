/*************************************************************************************
Program Name: 
Description: 
Author: 
Date: 

-------------------Pseudo Code---------------------------------------------------------
	Inlcude mbed.h, platform/mbed_thread.h, QEI.h libraries
	Declare Serial port to PC
	Declare Inputs for encoder and IR sensor
    Declare any variables

	while(true)
		Provide Instructions to User (to take samples or quit)
        if quit
            exit program
        else
            for i = 1 to i = 10
                Read the IR sensor and multiply 3.3
                Read Encoder
                Display Values
                Wait 50 ms
            end-for
            Compute average values
            Display Values
        end-if
	end-while
**************************************************************************************/

/************** Libraries ******************************************/
//[Insert] Include and import mbed library
//[Insert] Include and import QEI library

/************** Declare Objects ******************************************/ 
//[Insert] Declare serial object for PC communication
//[Insert] Declare AnalogIn object for sensor, use right pin #
//[Insert] Declare QEI object for motor encoder

/************** Declare and Initialize Variables and Parameters ************/
//[Insert] Declare all variables needed in your computations and processes
//For example: declare measurement variables (as float), averages (as a float)

int main()
{
	while (true) {
		//[INSERT] Ask the user when is ready to take a sample of the position at given (static) height
        //[INSERT] Offer the option to quit the program
		//[INSERT] Read the IR sensor and the encoder 10 times (time-spaced by 0.05 seconds -> you can use wait(0.05) between samples)
		//[INSERT] Do not forget to multiply by 3.3 to convert the IR sensor reading to volts
		//[INSERT] Cast as a float the reading from the encoder 
		//[INSERT] Display to Tera Term each sample along with the data number, e.g., Sample Number: 4, IR Voltage: 0.8929, Encoder Count: 501
		//[INSERT] Compute and display to Tera Term the average for both sensors
    }
}
// Putting the function protoype in a header file enforces separation of implementation and interface. This helps ensure correct usage of the function in larger projects.

// include guard to avoid redefinition problems, which really aren't a concern here, but implemented as a best practice.
#ifndef CHALLENGE_1_HELPER_H 
#define CHALLENGE_1_HELPER_H

void far_away_function(void);

#endif
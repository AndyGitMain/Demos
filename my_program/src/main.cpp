#include <myadd.h>
#include <iostream>
#include "helper.h"


int main(int argc, char *argv[])
{
    MyAdd add_obj;
	Helper h;


	std::cout << "Addition Result:" << add_obj.add(1, 1) << std::endl;

	printf("End of Program\n");
	
    return 0;
}

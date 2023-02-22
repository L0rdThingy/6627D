#include "main.h"
#include "consts.hpp"

bool firing = false;
void CataFunc(){
	while(true){
		if(!firing) {
            pros::delay(10);
            continue;
        }

		while (Catataaa.get_value() == 1) {
			CataM.move(-127);
            pros::delay(10);
		}

		CataM.brake();
		pros::delay(300);

		while (Catataaa.get_value() == 0){
			CataM.move(-127);
            pros::delay(10);
		}
		CataM.brake();
		firing = false;
	}
}

void FireCata(){
	firing = true;
};


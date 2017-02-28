#define _USE_MATH_DEFINES
#include <cmath>

float cutoff(float dist, float cutoff_dist) {
	float res;
	if (dist > cutoff_dist)
		res = 0.0;
	else
		res = 0.5 * (cosf(M_PI * dist / cutoff_dist) + 1.0);
	return res;
}

float dcutoff(float dist, float cutoff_dist) {
	float res;
	if (dist > cutoff_dist)
		res = 0.0;
	else
		res = -0.5 * M_PI / cutoff_dist * sinf(M_PI * dist / cutoff_dist);
	return res;
}

float symfunc2(float dist, float cutoff_val, float params[4]) {
	return expf(-params[0] * powf(dist - params[1], 2.0)) * cutoff_val;
}

/*
float dsymfunc2() {

}
*/

float symfunc4(float dist, float cutoff_val, float params[4]) {
	return expf(-params[0] * powf(dist - params[1], 2.0)) * cutoff_val;
}

/*
float dsymfunc4() {

}
*/
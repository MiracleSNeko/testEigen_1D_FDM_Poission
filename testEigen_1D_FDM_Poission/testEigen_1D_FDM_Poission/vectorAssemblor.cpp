#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Eigen\Dense>
#include "parameter.h"

double f(double x);

Eigen::VectorXd VectorAssemblor() {
	Eigen::VectorXd vec_answer(N);
	double h = 1 / (double)N;
	for (int i = 0; i < N; i++) {
		//vec_answer(i) = f(i*h);
		vec_answer(i) = exp(i*h);
	}
	return vec_answer;
}

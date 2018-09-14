#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Eigen\Dense>
#include "parameter.h"

double q(double x);

Eigen::MatrixXd MatrixAssemblor() {
	Eigen::MatrixXd mat_answer(N,N);
	double h = 1 / (double)N;
	for (int i = 0; i < N; i++)	{
		for (int j = 0; j < N; j++) {
			if ( i == j ) {
				mat_answer(i, j) = 2 / h / h + q(i*h);
			}
			else if (1 == abs(i - j)) {
				mat_answer(i, j) = -1 / h / h;
			}
			else {
				mat_answer(i, j) = 0;
			}
		}
	}
	return mat_answer;
}


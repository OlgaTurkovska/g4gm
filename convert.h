#ifndef CONVERT_H
#define CONVERT_H

#include<valarray>
using namespace std;

class Convertion{
public:
	const std::valarray<double> convertToValarray(double v1, double v2, double v3, double v4, double v5, 
												  double v6, double v7, double v8, double v9, double v10,
												  double v11, double v12, double v13, double v14, double v15);

	const std::valarray<double> convertToValarray(double v1, double v2, double v3, double v4, double v5, 
												  double v6, double v7, double v8, double v9, double v10,
												  double v11, double v12, double v13, double v14);

	const std::valarray<double> convertToValarray(double v1, double v2, double v3, double v4, double v5, 
												  double v6, double v7, double v8, double v9, double v10,
												  double v11, double v12, double v13, double v14, double v15,
												  double v16, double v17, double v18, double v19, double v20,
												  double v21, double v22, double v23);

	const std::valarray<double> convertToValarray(double v1);

	const std::valarray<double> convertToValarray();


};



#endif
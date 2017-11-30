#include <valarray>
#include <limits>

#include "convert.h"

using namespace std;



const std::valarray<double> Convertion::convertToValarray(double v1, double v2, double v3, double v4, double v5, 
															 double v6, double v7, double v8, double v9, double v10,
															 double v11, double v12, double v13, double v14, double v15)
{
	double arrayToConvert[] = { v1,  v2,  v3,  v4,  v5, v6,  v7,  v8,  v9,  v10, v11,  v12,  v13,  v14,  v15};
	const std::valarray<double> valArray(arrayToConvert, 15);
	return valArray;												 
}

const std::valarray<double> Convertion::convertToValarray(double v1, double v2, double v3, double v4, double v5, 
															 double v6, double v7, double v8, double v9, double v10,
															 double v11, double v12, double v13, double v14)
{
	double arrayToConvert[] = { v1,  v2,  v3,  v4,  v5, v6,  v7,  v8,  v9,  v10, v11,  v12,  v13,  v14};
	const std::valarray<double> valArray(arrayToConvert, 14);
	return valArray;												 
}

const std::valarray<double> Convertion::convertToValarray(double v1, double v2, double v3, double v4, double v5, 
															 double v6, double v7, double v8, double v9, double v10,
															 double v11, double v12, double v13, double v14, double v15,
															 double v16, double v17, double v18, double v19, double v20,
															 double v21, double v22, double v23)                                                             

{
	double arrayToConvert[] = { v1,  v2,  v3,  v4,  v5, v6,  v7,  v8,  v9,  v10, v11,  v12,  v13,  v14,  v15, v16, v17, v18, v19, v20, v21, v22, v23};
	const std::valarray<double> valArray(arrayToConvert, 23);
	return valArray;												 
}

const std::valarray<double> Convertion::convertToValarray(double v1)
{
	double arrayToConvert[] = { v1 };
	const std::valarray<double> valArray(arrayToConvert, 1);
	return valArray;

}

const std::valarray<double> Convertion::convertToValarray()
{
	double arrayToConvert[] = { std::numeric_limits<double>::infinity() };
	const std::valarray<double> valArray(std::numeric_limits<double>::infinity(), 1);
	return valArray;
}

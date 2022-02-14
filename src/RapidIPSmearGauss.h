#ifndef RAPIDIPSMEARGAUSS_H
#define RAPIDIPSMEARGAUSS_H

#include "TGraphErrors.h"
#include <vector>
#include "RapidIPSmear.h"
#include "Math/Point3D.h"
#include "Math/Vector3D.h"

class RapidIPSmearGauss : public RapidIPSmear {
	public:
		RapidIPSmearGauss(double intercept, double slope) : intercept_(intercept),slope_(slope) {}

		~RapidIPSmearGauss() {}

		std::pair<double,double> smearIP(double pt, ROOT::Math::XYZVector ip_vec);

	private:
		double intercept_,slope_;

};

#endif

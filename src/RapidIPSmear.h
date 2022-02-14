#ifndef RAPIDIPSMEAR_H
#define RAPIDIPSMEAR_H
#include <vector>
#include "Math/Point3D.h"
#include "Math/Vector3D.h"

class RapidIPSmear {
	public:
		virtual ~RapidIPSmear() {}

		virtual std::pair<double,double> smearIP(double pt, ROOT::Math::XYZVector ip_vec)=0;
};

#endif

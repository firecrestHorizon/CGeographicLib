//
//  firecrestHORIZON.uk
//
//  e-Mail  : kieran.conlon@firecresthorizon.uk
//  Twitter : @firecrestHRZN and @Kieran_Conlon
//

#include "include/CGeodesic.h"
#include "../../geographiclib/geographiclib.h"

void inverse(double lat1, double lon1, double lat2, double lon2,
             double *s12, double *azi1, double *azi2,
             double a, double f) {
  using namespace std;
  using namespace GeographicLib;
  
  Geodesic geod(a, f);
  geod.Inverse(lat1, lon1, lat2, lon2, *s12, *azi1, *azi2);
}

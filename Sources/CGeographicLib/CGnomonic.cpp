//
//  firecrestHORIZON.uk
//  
//  e-Mail  : kieran.conlon@firecresthorizon.uk
//  Twitter : @firecrestHRZN and @Kieran_Conlon
//

#include "include/CGnomonic.hpp"
#include "include/CGeodesic.hpp"
#include "../../geographiclib/geographiclib.h"

void Forward(double lat0, double lon0, double lat, double lon,
             double *x, double *y,
             double a, double f) {
  using namespace std;
  using namespace GeographicLib;

  Geodesic geod(a, f);
  Gnomonic proj(geod);
  
  proj.Forward(lat0, lon0, lat, lon, *x, *y);
}

void Reverse(double lat0, double lon0, double x, double y,
             double *lat, double *lon,
             double a, double f) {
  using namespace std;
  using namespace GeographicLib;

  Geodesic geod(a, f);
  Gnomonic proj(geod);

  proj.Reverse(lat0, lon0, x, y, *lat, *lon);
}

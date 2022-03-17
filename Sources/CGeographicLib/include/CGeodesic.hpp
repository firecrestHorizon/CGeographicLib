//
//  firecrestHORIZON.uk
//
//  e-Mail  : kieran.conlon@firecresthorizon.uk
//  Twitter : @firecrestHRZN and @Kieran_Conlon
//

#ifndef CGEODESIC_HPP
#define CGEODESIC_HPP

#ifdef __cplusplus
extern "C"  {
#endif

void inverse(double lat1, double lon1, double lat2, double lon2,
             double *s12, double *azi1, double *azi2,
             double a, double f);

void direct(double lat1, double lon1, double azi1, double s12,
            double *lat2, double *lon2, double * azi2,
            double a, double f);

void arcDirect(double lat1, double lon1, double azi1, double a12,
            double *lat2, double *lon2, double * azi2,
            double a, double f);

#ifdef __cplusplus
}
#endif

#endif /* CGEODESIC_HPP */

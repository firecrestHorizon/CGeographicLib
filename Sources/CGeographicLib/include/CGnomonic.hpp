//
//  firecrestHORIZON.uk
//  
//  e-Mail  : kieran.conlon@firecresthorizon.uk
//  Twitter : @firecrestHRZN and @Kieran_Conlon
//

#ifndef CGnomonic_hpp
#define CGnomonic_hpp

#ifdef __cplusplus
extern "C"  {
#endif

void forward(double lat0, double lon0, double lat, double lon,
             double *x, double *y,
             double a, double f);

void reverse(double lat0, double lon0, double x, double y,
             double *lat, double *lon,
             double a, double f);

#ifdef __cplusplus
}
#endif

#endif /* CGnomonic_hpp */

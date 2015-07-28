#ifndef _EBBSCALARGAUSSIAN_H
#define _EBBSCALARGAUSSIAN_H

class EbbScalarGaussian
{
protected:

    /// Anisotropic standard deviation sigma of the Gaussian in x direction
    double _Sigma_x;

    /// Anisotropic standard deviation sigma of the Gaussian in y direction
    double _Sigma_y;

    /// Anisotropic standard deviation sigma of the Gaussian in z direction
    double _Sigma_z;

    /// Center in x
    double _X_0;

    /// Center in y
    double _Y_0;

    /// Center in z
    double _Z_0;

    /// Normalization of the Gaussian function
    double _Norm;

public:

    //
    // Constructors and destructor
    //

    /// Constructor with isotropic sigma of 1 and center at origin
    EbbScalarGaussian();

    /// Constructor with isotropic sigma and center at origin
    EbbScalarGaussian(double sigma);

    /// Constructor with isotropic sigma and specific center
    EbbScalarGaussian(double sigma, double x_0, double y_0, double z_0);

    /// Constructor with anisotropic sigma and specific center
    EbbScalarGaussian(double sigma_x, double sigma_y, double sigma_z,
		       double x_0, double y_0, double z_0);

    /// Virtual destructor
    ~EbbScalarGaussian();

    /// Virtual local evaluation function
    double Evaluate(double, double, double);
};

#endif

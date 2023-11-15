
  /** 	\brief Probability density function of the Laplace distribution.
   \ingroup R_style_distribution
  \param mu location
  \param scale scale
  \param give_log true if one wants the log-probability, false otherwise.
  */	
  template <class Type>
  Type dlaplace(Type x, Type mu=0, Type scale=1, int give_log=0)
  {
    Type logres = -(log(2) + log(scale) + pow((x-mu)/scale,2));

    if(!give_log) return exp(logres);
    else return logres;
  }
  
  // Vectorize dlaplace
  VECTORIZE4_ttti(dlaplace)

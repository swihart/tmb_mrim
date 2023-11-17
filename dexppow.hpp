
  /** 	\brief Probability density function of the Laplace distribution.
   \ingroup R_style_distribution
  \param mu location
  \param sigmap scale
  \param give_log true if one wants the log-probability, false otherwise.
  */	
  template <class Type>
  Type dexppow(Type x, Type mu=0, Type sigmap=1, Type p=2, int give_log=0)
  {

    Type cost    = 2 * pow(p,1/p) * gamma(1 + 1/p) * sigmap;
    Type expon1  = pow(sqrt(pow((x - mu),2)),p);
    Type expon2  = p * pow(sigmap,p);
    
    Type logres = -(log(2) + log(p)/p + lgamma(1+1/p) + log(sigmap) + expon1/expon2 );

    if(!give_log) return exp(logres);
    else return res;
  }
  
  // Vectorize dexppow
  VECTORIZE5_tttti(dexppow)

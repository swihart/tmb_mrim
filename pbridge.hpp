// Copyright (C) 2017 Bruce Swihart
// License: GPL-2

/** \file
    \brief Univariate bridge CDF (Wang & Louis (2003))
    \ingroup R_style_distribution
*/
template<class Type>
Type pbridge(Type x, Type phi)
{
  return 1 - 1/(M_PI * phi) * (M_PI/2 - atan((exp(phi * x) + cos(phi * 
                M_PI))/sin(phi * M_PI)));
  }
VECTORIZE2_tt(pbridge)

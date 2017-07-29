    template <class Type>
    Type pcauchy(Type x, Type mu=0, Type scale=1)
    {
      return Type(1./M_PI) * atan(Type((x-mu)/scale)) + Type(0.5);
    }
    
    // Vectorize pcauchy
    VECTORIZE3_ttt(pcauchy)

      
      //notes: I put pcauchy in inst/include/pcauchy.hpp and not in distributions_R.hpp
      // because I couldn't get atan() to behave.  Here're some notes for an approx atan()
      // Type A = 0.0776509570923569;
      // Type B = -0.287434475393028;
      // Type C = (M_PI_4 - A - B);
      //               Type arg = (x-mu)/scale);
      //               Type argarg = (x-mu)/scale) * (x-mu)/scale);
      
      /*approx atan()*/
      /*https://stackoverflow.com/a/42542593/2727349*/
      // Type res = Type(1./M_PI) * ((A*argarg + B)*argarg + C)*arg + Type(0.5);
      
      
      //return res;
      
#ifndef PYTHONIC_NUMPY_CONJ_HPP
#define PYTHONIC_NUMPY_CONJ_HPP

#include "pythonic/utils/proxy.hpp"
#include "pythonic/types/ndarray.hpp"
#include <nt2/include/functions/conj.hpp>

namespace pythonic {

    namespace numpy {
#define NUMPY_UNARY_FUNC_NAME conj
#define NUMPY_UNARY_FUNC_SYM nt2::conj
#include "pythonic/types/numpy_unary_expr.hpp"

    }

}

#endif


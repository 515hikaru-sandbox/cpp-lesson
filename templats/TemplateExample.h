#ifndef TEMPLATEEXAMPLE_H_
#define TEMPLATEEXAMPLE_H_

template<typename TYPE>
  TYPE Abs(TYPE a) {
      return a < 0 ? -a: a;
  }

#endif

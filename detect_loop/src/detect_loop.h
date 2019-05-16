#ifndef DETECT_LOOP_H
#define DETECT_LOOP_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

  #include "node.h"

  int detect_loop(Node **node, Node **loopStart);

#ifdef __cplusplus
}
#endif // __cplusplus


#endif /* DETECT_LOOP_H */

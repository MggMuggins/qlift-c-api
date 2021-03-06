#ifndef QLIFT_C_API_QLIFT_QLAYOUTITEM_H
#define QLIFT_C_API_QLIFT_QLAYOUTITEM_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

unsigned int QLayoutItem_alignment(void *layoutItem);
void QLayoutItem_setAlignment(void *layoutItem, int alignment);

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QLAYOUTITEM_H


#ifndef QLIFT_C_API_QLIFT_QABSTRACTBUTTON_H
#define QLIFT_C_API_QLIFT_QABSTRACTBUTTON_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(QLIFT_C_API_INTERNAL)
#error "Only <qlift-c-api.h> can be included."
#endif

void QAbstractButton_clicked_connect(void *abstractButton, void *receiver, void (*slot_ptr)(int));

#ifdef __cplusplus
}
#endif

#endif //QLIFT_C_API_QLIFT_QABSTRACTBUTTON_H

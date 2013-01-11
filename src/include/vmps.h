#ifndef VMPS_H
#define VMPS_H
/*
 * @file vmps.h
 * @brief Routines to handle VMPS sockets.
 *
 * @version $Id$
 * @copyright 2013  The FreeRADIUS server project
 */

#include <freeradius-devel/ident.h>
RCSIDH(vmps_h, "$Id$")

#ifdef __cplusplus
extern "C" {
#endif

int vqp_socket_recv(rad_listen_t *listener);
int vqp_socket_send(rad_listen_t *listener, REQUEST *request);
int vqp_socket_encode(UNUSED rad_listen_t *listener, REQUEST *request);
int vqp_socket_decode(UNUSED rad_listen_t *listener, REQUEST *request);
int vmps_process(REQUEST *request);

#ifdef __cplusplus
}
#endif

#endif /* VMPS_H */

/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.37 $ of : mfd-interface.m2c,v $
 *
 * $Id$
 */
/** @defgroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef IPADDRESSTABLE_INTERFACE_H
#define IPADDRESSTABLE_INTERFACE_H

#ifdef __cplusplus
extern          "C" {
#endif


#include "ipAddressTable.h"

    /*
     ********************************************************************
     * Table declarations
     */

    /*
     * PUBLIC interface initialization routine 
     */
    void           
        _ipAddressTable_initialize_interface
        (ipAddressTable_registration_ptr user_ctx, u_long flags);

    ipAddressTable_rowreq_ctx
        *ipAddressTable_allocate_rowreq_ctx(ipAddressTable_data *);
    void           
        ipAddressTable_release_rowreq_ctx(ipAddressTable_rowreq_ctx *
                                          rowreq_ctx);

    int             ipAddressTable_index_to_oid(netsnmp_index * oid_idx,
                                                ipAddressTable_mib_index *
                                                mib_idx);
    int             ipAddressTable_index_from_oid(netsnmp_index * oid_idx,
                                                  ipAddressTable_mib_index
                                                  * mib_idx);

    /*
     * access to certain internals. use with caution!
     */
    void            ipAddressTable_valid_columns_set(netsnmp_column_info
                                                     *vc);


#ifdef __cplusplus
}
#endif
#endif                          /* IPADDRESSTABLE_INTERFACE_H */

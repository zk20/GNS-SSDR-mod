/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef _GPSTOWAssistElement_H_
#define _GPSTOWAssistElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SatelliteID.h"
#include "TLMWord.h"
#include "AntiSpoofFlag.h"
#include "AlertFlag.h"
#include "TLMReservedBits.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* GPSTOWAssistElement */
    typedef struct GPSTOWAssistElement
    {
        SatelliteID_t satelliteID;
        TLMWord_t tlmWord;
        AntiSpoofFlag_t antiSpoof;
        AlertFlag_t alert;
        TLMReservedBits_t tlmRsvdBits;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GPSTOWAssistElement_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GPSTOWAssistElement;

#ifdef __cplusplus
}
#endif

#endif /* _GPSTOWAssistElement_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -gen-PER -D src`
 */

#include "Ngap_OverloadResponse.h"

#include "Ngap_ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_Ngap_OverloadResponse_constr_1
    CC_NOTUSED = {{0, 0}, -1};
asn_per_constraints_t asn_PER_type_Ngap_OverloadResponse_constr_1 CC_NOTUSED = {
    {APC_CONSTRAINED, 1, 1, 0, 1} /* (0..1) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
asn_TYPE_member_t asn_MBR_Ngap_OverloadResponse_1[] = {
    {ATF_NOFLAGS,
     0,
     offsetof(struct Ngap_OverloadResponse, choice.overloadAction),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_OverloadAction,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "overloadAction"},
    {ATF_POINTER,
     0,
     offsetof(struct Ngap_OverloadResponse, choice.choice_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ProtocolIE_SingleContainer_127P14,
     0,
     {0, 0, 0},
     0,
     0, /* No default value */
     "choice-Extensions"},
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_OverloadResponse_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* overloadAction */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_Ngap_OverloadResponse_specs_1 = {
    sizeof(struct Ngap_OverloadResponse),
    offsetof(struct Ngap_OverloadResponse, _asn_ctx),
    offsetof(struct Ngap_OverloadResponse, present),
    sizeof(((struct Ngap_OverloadResponse*) 0)->present),
    asn_MAP_Ngap_OverloadResponse_tag2el_1,
    2, /* Count of tags in the map */
    0,
    0,
    -1 /* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_OverloadResponse = {
    "OverloadResponse",
    "OverloadResponse",
    &asn_OP_CHOICE,
    0, /* No effective tags (pointer) */
    0, /* No effective tags (count) */
    0, /* No tags (pointer) */
    0, /* No tags (count) */
    {&asn_OER_type_Ngap_OverloadResponse_constr_1,
     &asn_PER_type_Ngap_OverloadResponse_constr_1, CHOICE_constraint},
    asn_MBR_Ngap_OverloadResponse_1,
    2,                                     /* Elements count */
    &asn_SPC_Ngap_OverloadResponse_specs_1 /* Additional specs */
};

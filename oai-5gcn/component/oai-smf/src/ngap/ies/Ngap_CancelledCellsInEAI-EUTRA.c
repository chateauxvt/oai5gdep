/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D src`
 */

#include "Ngap_CancelledCellsInEAI-EUTRA.h"

#include "Ngap_CancelledCellsInEAI-EUTRA-Item.h"
static asn_oer_constraints_t asn_OER_type_Ngap_CancelledCellsInEAI_EUTRA_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65535)) */};
asn_per_constraints_t asn_PER_type_Ngap_CancelledCellsInEAI_EUTRA_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Ngap_CancelledCellsInEAI_EUTRA_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Ngap_CancelledCellsInEAI_EUTRA_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_Ngap_CancelledCellsInEAI_EUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_Ngap_CancelledCellsInEAI_EUTRA_specs_1 = {
	sizeof(struct Ngap_CancelledCellsInEAI_EUTRA),
	offsetof(struct Ngap_CancelledCellsInEAI_EUTRA, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_CancelledCellsInEAI_EUTRA = {
	"CancelledCellsInEAI-EUTRA",
	"CancelledCellsInEAI-EUTRA",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_Ngap_CancelledCellsInEAI_EUTRA_tags_1,
	sizeof(asn_DEF_Ngap_CancelledCellsInEAI_EUTRA_tags_1)
		/sizeof(asn_DEF_Ngap_CancelledCellsInEAI_EUTRA_tags_1[0]), /* 1 */
	asn_DEF_Ngap_CancelledCellsInEAI_EUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_CancelledCellsInEAI_EUTRA_tags_1)
		/sizeof(asn_DEF_Ngap_CancelledCellsInEAI_EUTRA_tags_1[0]), /* 1 */
	{ &asn_OER_type_Ngap_CancelledCellsInEAI_EUTRA_constr_1, &asn_PER_type_Ngap_CancelledCellsInEAI_EUTRA_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_Ngap_CancelledCellsInEAI_EUTRA_1,
	1,	/* Single element */
	&asn_SPC_Ngap_CancelledCellsInEAI_EUTRA_specs_1	/* Additional specs */
};


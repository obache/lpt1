# $NetBSD: buildlink3.mk,v 1.3 2018/07/19 15:15:30 jaapb Exp $

BUILDLINK_TREE+=	ocaml-calendar

.if !defined(OCAML_CALENDAR_BUILDLINK3_MK)
OCAML_CALENDAR_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.ocaml-calendar+=	ocaml-calendar>=2.03.2nb4
BUILDLINK_ABI_DEPENDS.ocaml-calendar+=	ocaml-calendar>=2.04.0nb9
BUILDLINK_PKGSRCDIR.ocaml-calendar?=	../../time/ocaml-calendar

#.include "../../lang/ocaml/buildlink3.mk"
.endif	# OCAML_CALENDAR_BUILDLINK3_MK

BUILDLINK_TREE+=	-ocaml-calendar

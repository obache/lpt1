# $NetBSD: Makefile,v 1.18 2020/01/26 17:31:08 rillig Exp $

DISTNAME=	Ted_sv_SE
PKGNAME=	ted-sv-2.16
PKGREVISION=	1
CATEGORIES=	editors
MASTER_SITES=	ftp://ftp.nluug.nl/pub/editors/ted/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://www.nllgg.nl/Ted/
COMMENT=	Swedish spelling dictionary for the Ted word processor

DEPENDS+=	ted>=2.6:../../editors/ted

WRKSRC=		${WRKDIR}

DIST_SUBDIR=	Ted-2.16
NO_BUILD=	YES

INSTALLATION_DIRS=	share/Ted/ind

do-install:
	${INSTALL_DATA} ${WRKSRC}/ind/Swedish.ind \
		${DESTDIR}${PREFIX}/share/Ted/ind

.include "../../mk/bsd.pkg.mk"

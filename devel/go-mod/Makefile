# $NetBSD: Makefile,v 1.1 2020/12/04 09:25:33 bsiegert Exp $

GITHUB_PROJECT=	mod
GITHUB_TAG=	v${PKGVERSION_NOREV}
DISTNAME=	mod-0.4.0
PKGNAME=	go-${DISTNAME}
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=golang/}

MAINTAINER=	bsiegert@NetBSD.org
HOMEPAGE=	https://pkg.go.dev/golang.org/x/mod/
COMMENT=	Go module mechanics libraries
LICENSE=	modified-bsd

GO_SRCPATH=	golang.org/x/mod
GO_DIST_BASE=	${DISTNAME}

REPLACE_BASH+=	gosumcheck/test.bash

.include "../../devel/go-xerrors/buildlink3.mk"
.include "../../lang/go/go-package.mk"
.include "../../security/go-crypto/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"

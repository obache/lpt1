# $NetBSD: Makefile,v 1.41 2020/10/12 21:51:57 bacon Exp $

MAINTAINER=	thomas.orgis@uni-hamburg.de
COMMENT=	Linear Algebra PACKage (Netlib reference implementation)
PKGREVISION=	1

LAPACK_COMPONENT=	lapack
LAPACK_COMPONENT_CMAKE_ARGS= \
	-DUSE_OPTIMIZED_BLAS=ON \
	-DBLAS_LIBRARIES=${BLAS_LIBS:Q} \
	-DUSE_OPTIMIZED_LAPACK=OFF \
	-DCBLAS=OFF -DLAPACKE=OFF -DLAPACK=ON

UNWRAP_CMAKE_FILES+=	build/CMakeFiles/Export/lib/cmake/lapack-${PKGVERSION_NOREV}/lapack-targets.cmake
UNWRAP_CMAKE_FILES+=	build/CMakeFiles/lapack-config.cmake

# This always uses Netlib BLAS. Other optimized BLAS packages bring
# their own LAPACK, hence cblas and lapacke packages use
# mk/blas.buildlink3.mk instead.
.include "../../math/blas/buildlink3.mk"
.include "../../math/lapack/Makefile.common"
.include "../../mk/bsd.pkg.mk"

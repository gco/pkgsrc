# $NetBSD: Makefile,v 1.6 2015/03/15 21:08:00 wiz Exp $

DISTNAME=	cffi-0.9.2
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel
MASTER_SITES=	https://pypi.python.org/packages/source/c/cffi/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://pypi.python.org/pypi/cffi/
COMMENT=	Foreign Function Interface for Python calling C code
LICENSE=	mit

USE_TOOLS+=	pkg-config

.include "../../devel/libffi/buildlink3.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"

# $NetBSD: Makefile,v 1.49 2015/04/25 14:23:03 tnn Exp $

DISTNAME=	simgear-2.8.0
PKGREVISION=	23
CATEGORIES=	games devel
MASTER_SITES=	ftp://mirrors.ibiblio.org/pub/mirrors/simgear/ftp/Source/ \
		ftp://ftp.goflyflightgear.com/simgear/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://simgear.sourceforge.net/
COMMENT=	Simulator Construction Tools
LICENSE=	gnu-lgpl-v2

USE_LANGUAGES=		c c++
USE_PKGLOCALEDIR=	yes
USE_CMAKE=		yes

BUILDLINK_API_DEPENDS.plib+= plib>=1.8.5

.include "../../audio/freealut/buildlink3.mk"
.include "../../audio/openal/buildlink3.mk"
.include "../../devel/boost-headers/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../games/plib/buildlink3.mk"
.include "../../mk/jpeg.buildlink3.mk"
.include "../../graphics/osg/buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"

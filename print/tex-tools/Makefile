# $NetBSD: Makefile,v 1.6 2015/04/25 05:13:59 markd Exp $

DISTNAME=	tools
PKGNAME=	tex-${DISTNAME}-2014
TEXLIVE_REV=	35577

MAINTAINER=	minskim@NetBSD.org
COMMENT=	The LaTeX standard tools bundle
LICENSE=	lppl-1.3c

CONFLICTS+=	teTeX-texmf<=3.0nb13
DEPENDS+=	tex-graphics>=1.0onb1:../../print/tex-graphics

.include "../../print/texlive/package.mk"
.include "../../mk/bsd.pkg.mk"

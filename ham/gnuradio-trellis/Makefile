# $NetBSD: Makefile,v 1.21 2015/04/17 15:53:08 adam Exp $

PKGNAME=	gnuradio-trellis-${VERSION}
PKGREVISION=	1
COMMENT=	Trellis-based encoding and decoding algorithms for GNU Radio

.include	"../../ham/gnuradio-core/Makefile.common"
.include	"../../ham/gnuradio-core/Nocore.mk"

CMAKE_ARGS+=	-DENABLE_DEFAULT=False
CMAKE_ARGS+=	-DENABLE_GR_TRELLIS=True
CMAKE_ARGS+=	-DENABLE_GR_DIGITAL=True

DEPENDS+=	gnuradio-digital-[0-9]*:../../ham/gnuradio-digital
DEPENDS+=	xmlto-[0-9]*:../../textproc/xmlto

PLIST_MINUS+=	digital

.include	"../../mk/bsd.pkg.mk"

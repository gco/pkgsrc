# $NetBSD: Makefile,v 1.15 2014/10/09 14:06:42 wiz Exp $
#

DISTNAME=	cuetools-1.3.1
CATEGORIES=	misc
MASTER_SITES=	http://download.berlios.de/cuetools/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://cuetools.berlios.de/
COMMENT=	Set of utilities to manipulate cue and toc files
LICENSE=	gnu-gpl-v2

USE_LANGUAGES=	c
GNU_CONFIGURE=	yes

INSTALLATION_DIRS=	share/doc/cuetools

post-install:
	${INSTALL_DATA} ${WRKSRC}/extras/formats.txt \
		${DESTDIR}${PREFIX}/share/doc/cuetools/

.include "../../mk/bsd.pkg.mk"

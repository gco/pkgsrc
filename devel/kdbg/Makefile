# $NetBSD: Makefile,v 1.107 2015/04/25 14:20:34 tnn Exp $

DISTNAME=	kdbg-2.2.2
PKGREVISION=	26
CATEGORIES=	devel kde
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=kdbg/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.kdbg.org/
COMMENT=	Graphical User Interface around gdb using KDE
LICENSE=	gnu-gpl-v2

# Race condition with using procattach.h and rebuilding procattachbase.h
MAKE_JOBS_SAFE=	no

USE_TOOLS+=		gmake msgfmt perl
GNU_CONFIGURE=		YES
SET_LIBDIR=		YES
USE_LIBTOOL=		YES
USE_LANGUAGES=		c c++

CONFIGURE_ARGS+=	--with-kde-version=3

.include "../../meta-pkgs/kde3/kde3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../x11/kdebase3/buildlink3.mk"
.include "../../x11/kdelibs3/buildlink3.mk"
.include "../../x11/libSM/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/libXt/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../mk/bsd.pkg.mk"

# $NetBSD: Makefile,v 1.30 2014/05/29 23:37:34 wiz Exp $

DISTNAME=	kdoc-2.0a54
PKGNAME=	kdoc-3.0
PKGREVISION=	5
CATEGORIES=	textproc kde
MASTER_SITES=	${MASTER_SITE_KDE:=3.0/src/}

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	C++ and IDL Class Documentation Tool

USE_TOOLS+=		perl:run pod2man

SUBST_CLASSES+=		vars
SUBST_STAGE.vars=	do-configure
SUBST_FILES.vars=	Makefile.in
SUBST_SED.vars=		-e 's|@perl@|${PERL5}|g'

.include "../../meta-pkgs/kde3/Makefile.kde3"
.include "../../mk/bsd.pkg.mk"

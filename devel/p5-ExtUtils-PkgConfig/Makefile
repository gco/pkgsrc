# $NetBSD: Makefile,v 1.26 2014/12/10 22:02:16 wiz Exp $

DISTNAME=	ExtUtils-PkgConfig-1.15
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=ExtUtils/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://gtk2-perl.sourceforge.net/
COMMENT=	Simplistic perl interface to pkg-config
LICENSE=	gnu-lgpl-v3

USE_LANGUAGES=		# empty
USE_TOOLS+=		pkg-config:run
PERL5_PACKLIST=		auto/ExtUtils/PkgConfig/.packlist

TOOLS_CMD.pkg-config=	${TOOLS_PATH.pkg-config}

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

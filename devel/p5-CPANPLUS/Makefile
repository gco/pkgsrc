# $NetBSD: Makefile,v 1.2 2015/04/28 06:59:22 mef Exp $

DISTNAME=	CPANPLUS-0.9152
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=CPANPLUS/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://cpanplus.sourceforge.net/
COMMENT=	Ameliorated interface to the CPAN
LICENSE=	${PERL5_LICENSE}

INSTALL_TARGET=	pure_install

DEPENDS+=	p5-Log-Message-[0-9]*:../../devel/p5-Log-Message
DEPENDS+=	p5-Object-Accessor-[0-9]*:../../devel/p5-Object-Accessor
DEPENDS+=	p5-Test-Reporter-[0-9]*:../../devel/p5-Test-Reporter
DEPENDS+=	p5-YAML-[0-9]*:../../textproc/p5-YAML
# for make test
BUILD_DEPENDS+=	p5-Archive-Extract-[0-9]*:../../archivers/p5-Archive-Extract
BUILD_DEPENDS+=	p5-Term-UI-[0-9]*:../../devel/p5-Term-UI
BUILD_DEPENDS+=	p5-Module-Pluggable-[0-9]*:../../devel/p5-Module-Pluggable
BUILD_DEPENDS+=	p5-Log-Message-Simple-[0-9]*:../../devel/p5-Log-Message-Simple

PERL5_PACKLIST= auto/CPANPLUS/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

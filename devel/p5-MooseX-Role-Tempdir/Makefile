# $NetBSD: Makefile,v 1.2 2015/04/28 06:59:22 mef Exp $
#

DISTNAME=	MooseX-Role-Tempdir-0.03
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=MooseX/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/~iamb/MooseX-Role-Tempdir/
COMMENT=	(Perl Module)  Moose role to provide temporary directories
LICENSE=	${PERL5_LICENSE}

# for make test
BUILD_DEPENDS+=	p5-MooseX-Role-Parameterized-[0-9]*:../../devel/p5-MooseX-Role-Parameterized
BUILD_DEPENDS+= p5-namespace-autoclean-[0-9]*:../../devel/p5-namespace-autoclean

PERL5_PACKLIST=	auto/MooseX/Role/Tempdir/.packlist
USE_LANGUAGES=	# none

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

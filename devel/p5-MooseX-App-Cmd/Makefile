# $NetBSD: Makefile,v 1.14 2015/04/23 15:21:32 mef Exp $
#

DISTNAME=	MooseX-App-Cmd-0.30
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=MooseX/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/MooseX-App-Cmd/
COMMENT=	Perl 5 module providing MooseX::Getopt and App::Cmd mashup
LICENSE=	${PERL5_LICENSE}

USE_LANGUAGES=	# empty
PERL5_PACKLIST=	auto/MooseX/App/Cmd/.packlist

DEPENDS+=	p5-Any-Moose>=0:../../devel/p5-Any-Moose
DEPENDS+=	p5-App-Cmd>=0.321:../../devel/p5-App-Cmd
DEPENDS+=	p5-Getopt-Long-Descriptive>=0.091:../../devel/p5-Getopt-Long-Descriptive
DEPENDS+=	p5-Moose>=0.86:../../devel/p5-Moose
DEPENDS+=	p5-MooseX-Getopt>=0.18:../../devel/p5-MooseX-Getopt
DEPENDS+=	p5-MouseX-Getopt>=0:../../devel/p5-MouseX-Getopt
DEPENDS+=	p5-namespace-clean>=0:../../devel/p5-namespace-clean

# For test target
BUILD_DEPENDS+=	p5-MooseX-ConfigFromFile>=0.08:../../devel/p5-MooseX-ConfigFromFile
BUILD_DEPENDS+=	p5-Test-Requires-[0-9]*:../../devel/p5-Test-Requires
BUILD_DEPENDS+=	p5-Test-Output-[0-9]*:../../devel/p5-Test-Output
BUILD_DEPENDS+=	p5-Test-Simple>=1.001014:../../devel/p5-Test-Simple

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

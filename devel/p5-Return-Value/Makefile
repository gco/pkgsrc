# $NetBSD: Makefile,v 1.12 2015/02/15 01:28:37 mef Exp $

DISTNAME=		Return-Value-1.666004
# put dot in the center of 6 digits      1.666004                    -> 1.666.004
PKGNAME=		p5-${DISTNAME:C/([0-9][0-9][0-9])([0-9][0-9][0-9])/\1.\2/}
CATEGORIES=		devel perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=../by-authors/id/R/RJ/RJBS/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://search.cpan.org/dist/Return-Value/
COMMENT=		Polymorphic Return Values
LICENSE=		${PERL5_LICENSE}

DEPENDS+=		{perl>=5.7.3,p5-Test-Simple>=0.47}:../../devel/p5-Test-Simple

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/Return/Value/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

# $NetBSD: Makefile,v 1.15 2015/02/17 06:38:17 mef Exp $

DISTNAME=		Test-LongString-0.17
PKGNAME=		p5-${DISTNAME}
CATEGORIES=		devel perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Test/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://search.cpan.org/dist/Test-LongString/
COMMENT=		Perl5 module to test strings for equality
LICENSE=		${PERL5_LICENSE}

PERL5_REQD+=		5.10.0

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/Test/LongString/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

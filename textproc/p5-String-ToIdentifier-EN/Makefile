# $NetBSD: Makefile,v 1.7 2015/04/26 13:37:48 mef Exp $
#

DISTNAME=		String-ToIdentifier-EN-0.11
PKGNAME=		p5-${DISTNAME}
CATEGORIES=		textproc perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=String/}

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://search.cpan.org/dist/String-ToIdentifier-EN/
COMMENT=		Convert Strings to English Program Identifiers
LICENSE=		${PERL5_LICENSE}

DEPENDS+= 		p5-Lingua-EN-Inflect-Phrase>=0.07:../../textproc/p5-Lingua-EN-Inflect-Phrase
DEPENDS+=		p5-Text-Unidecode>=0.04:../../textproc/p5-Text-Unidecode
DEPENDS+=		p5-namespace-clean>=0.20:../../devel/p5-namespace-clean

PERL5_PACKLIST=		auto/String/ToIdentifier/EN/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

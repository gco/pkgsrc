# $NetBSD: Makefile,v 1.9 2014/10/09 14:06:47 wiz Exp $

DISTNAME=	Net-Interface-1.012
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	5
CATEGORIES=	net perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Net/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/${DISTNAME}
COMMENT=	Perl extension to access network interfaces
LICENSE=	${PERL5_LICENSE}

PERL5_PACKLIST=		auto/Net/Interface/.packlist

REPLACE_PERL+=		inst/netsymbols.pl

pre-configure:
	${FIND} ${WRKSRC} -name '*.orig' -print -type f | ${XARGS} ${RM} -f

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

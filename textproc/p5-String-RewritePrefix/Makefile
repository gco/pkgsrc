# $NetBSD: Makefile,v 1.10 2015/04/26 13:35:48 mef Exp $

DISTNAME=	String-RewritePrefix-0.007
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	textproc perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=String/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/String-RewritePrefix/
COMMENT=	Rewrite strings based on a set of known prefixes
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Sub-Exporter-[0-9]*:../../devel/p5-Sub-Exporter

PERL5_PACKLIST=		auto/String/RewritePrefix/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

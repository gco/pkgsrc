# $NetBSD: Makefile,v 1.12 2015/04/27 15:07:30 mef Exp $
#

DISTNAME=	LaTeX-Driver-0.200.4
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	print
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=LaTeX/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/LaTeX-Driver/
COMMENT=	Perl module encapsulates the details of invoking the Latex programs
LICENSE=	${PERL5_LICENSE}

USE_TOOLS+=	gs:run

DEPENDS+=	makeindexk-[0-9]*:../../textproc/makeindexk
DEPENDS+=	p5-Class-Accessor-[0-9]*:../../devel/p5-Class-Accessor
DEPENDS+=	p5-Module-Install-ReadmeFromPod-[0-9]*:../../devel/p5-Module-Install-ReadmeFromPod
DEPENDS+=	p5-Module-Install-AuthorRequires-[0-9]*:../../devel/p5-Module-Install-AuthorRequires
DEPENDS+=	p5-Module-Install-AuthorTests-[0-9]*:../../devel/p5-Module-Install-AuthorTests
DEPENDS+=	p5-Test-NoTabs-[0-9]*:../../devel/p5-Test-NoTabs
DEPENDS+=	p5-Test-Spelling-[0-9]*:../../devel/p5-Test-Spelling
DEPENDS+=	p5-Exception-Class-[0-9]*:../../devel/p5-Exception-Class
DEPENDS+=	p5-File-Slurp-[0-9]*:../../devel/p5-File-Slurp
DEPENDS+=	tex-latex-bin-[0-9]*:../../print/tex-latex-bin
DEPENDS+=	web2c-[0-9]*:../../print/web2c
DEPENDS+=	dvipsk-[0-9]*:../../print/dvipsk

PERL5_MODULE_TYPE=	Module::Install
PERL5_PACKLIST=		auto/LaTeX/Driver/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"

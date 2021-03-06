# $NetBSD: Makefile,v 1.5 2015/04/24 20:16:54 joerg Exp $
#

DISTNAME=	rxtx-2.1-7r2
PKGNAME=	java-rxtx-2.1.7r2
PKGREVISION=	1
CATEGORIES=	comms java
MASTER_SITES=	http://rxtx.qbang.org/pub/rxtx/
EXTRACT_SUFX=	.zip

MAINTAINER=	dsainty@NetBSD.org
HOMEPAGE=	http://rxtx.qbang.org/
COMMENT=	Java serial IO library
LICENSE=	gnu-lgpl-v2 # or later

USE_TOOLS+=	aclocal autoconf autoheader automake gmake unzip
USE_LIBTOOL=	yes
USE_LANGUAGES=	c c++
GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	no

PKG_DESTDIR_SUPPORT=	user-destdir

# Configuration looks for certain versions of JDK - this list can be expanded
# if the patches are also appropriately updated.
PKG_JVMS_ACCEPTED= openjdk7 sun-jdk7 sun-jdk6 sun-jdk15 sun-jdk14

MAKE_ENV+=	JAVA_HOME=${PKG_JAVA_HOME}

.include "../../mk/bsd.prefs.mk"

.if ${MACHINE_ARCH} == "x86_64"
JAVA_MACHINE_ARCH=	amd64
.elif ${OPSYS} == "NetBSD" && ${MACHINE_CPU:U} == "arm"
JAVA_MACHINE_ARCH=    arm
.else
JAVA_MACHINE_ARCH=     ${MACHINE_ARCH}
.endif

INSTALLATION_DIRS+=	${PKG_JAVA_HOME}/jre/lib/ext
INSTALLATION_DIRS+=	${PKG_JAVA_HOME}/jre/lib/${JAVA_MACHINE_ARCH}

PLIST_SUBST+=	JAVA_MACHINE_ARCH=${JAVA_MACHINE_ARCH:Q}
PLIST_SUBST+=	JAVA_HOME="${PKG_JAVA_HOME:C/^${PREFIX}\///}"

pre-configure:
	set -e; cd ${WRKSRC}; \
	aclocal; autoheader; automake -a --foreign -i; autoconf

.include "../../mk/java-vm.mk"
.include "../../mk/bsd.pkg.mk"

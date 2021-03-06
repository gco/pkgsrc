$NetBSD: patch-src_lua.c,v 1.1 2015/03/05 13:39:20 ryoon Exp $

--- src/lua.c.orig	2013-04-12 18:48:47.000000000 +0000
+++ src/lua.c
@@ -453,7 +453,9 @@ static int pmain (lua_State *L) {
     lua_setfield(L, LUA_REGISTRYINDEX, "LUA_NOENV");
   }
   /* open standard libraries */
+#if !defined(__CYGWIN__)
   luaL_checkversion(L);
+#endif
   lua_gc(L, LUA_GCSTOP, 0);  /* stop collector during initialization */
   luaL_openlibs(L);  /* open libraries */
   lua_gc(L, LUA_GCRESTART, 0);

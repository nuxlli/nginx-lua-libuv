require 'formula'

# Documentation: https://github.com/mxcl/homebrew/wiki/Formula-Cookbook
# PLEASE REMOVE ALL GENERATED COMMENTS BEFORE SUBMITTING YOUR PULL REQUEST!

class NgxOpenresty < Formula
  homepage 'http://openresty.org/'
  version '1.2.4.9'
  url 'http://agentzh.org/misc/nginx/ngx_openresty-1.2.4.9.tar.gz'
  md5 '01cf83429834f3c6ef5e2816640aa340'

  depends_on 'pcre'
  depends_on 'geoip'

  # Changes default port to 8080
  # Tell configure to look for pcre in HOMEBREW_PREFIX  
  def patches
    DATA
  end

  def install
    # ENV.x11 # if your formula requires any X11 headers
    # ENV.j1  # if your formula's build system can't parallelize
    args = [
      "--prefix=#{prefix}",
      "--with-luajit",
      "--with-http_iconv_module",
      "-j2",
      "--with-http_realip_module",
      "--with-http_geoip_module",
      "--with-http_ssl_module",
      "--conf-path=#{etc}/ngx_openresty/nginx.conf",
      "--pid-path=#{var}/run/ngx_openresty.pid",
      "--lock-path=#{var}/ngx_openresty/nginx.lock",
      "--with-cc-opt=-I#{HOMEBREW_PREFIX}/include",
      "--with-ld-opt=-L#{HOMEBREW_PREFIX}/lib"
    ]

    system "./configure", *args
                          
    # system "cmake . #{std_cmake_parameters}"
    system "make install" # if this fails, try separate make/make install steps
    system "mkdir #{prefix}/bin"
    system "ln -s #{prefix}/nginx/sbin/nginx #{prefix}/bin/nginx"
  end

  def test
    # This test will fail and we won't accept that! It's enough to just replace
    # "false" with the main program this formula installs, but it'd be nice if you
    # were more thorough. Run the test with `brew test ngx_openresty`.
    system "false"
  end
end

__END__
--- a/bundle/nginx-1.2.4/conf/nginx.conf
+++ b/bundle/nginx-1.2.4/conf/nginx.conf
@@ -36,7 +36,7 @@
     #gzip  on;

     server {
-        listen       80;
+        listen       8080;
         server_name  localhost;

         #charset koi8-r;

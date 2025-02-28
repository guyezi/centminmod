php_patches() {
  {
  if [[ "$PHP_PATCH" = [yY] ]]; then
    if [[ "$PHPMUVER" = 5.3 ]]; then
      # patch PHP 5.3 source tarballs
      # https://bugs.php.net/bug.php?id=48795
      # https://community.centminmod.com/posts/63882/
      # pushd ../
      if [ ! -f php53.patch ]; then
        cp -a $CUR_DIR/patches/php/php53.patch php53.patch
        patch < php53.patch
      fi
      # popd
    fi
    if [[ "$PHPMUVER" = '5.6' || "$PHPMVER" = '5.6' ]]; then
      # backport security bug patch from PHP 7.1.27 to 
      # PHP 5.6 bug #77540 https://bugs.php.net/bug.php?id=77540
      if [ ! -f php5640-77540.patch ]; then
        echo
        echo "patching PHP 5.6 for bug #77540"
        echo "https://bugs.php.net/bug.php?id=77540"
        echo
        cp -a $CUR_DIR/patches/php/php5640-77540.patch php5640-77540.patch
        dos2unix php5640-77540.patch
        patch -p1 < php5640-77540.patch
      fi
      # PHP 5.6 bug #77563 https://bugs.php.net/bug.php?id=77563
      if [ ! -f php5640-77563.patch ]; then
        echo
        echo "patching PHP 5.6 for bug #77563"
        echo "https://bugs.php.net/bug.php?id=77563"
        echo
        cp -a $CUR_DIR/patches/php/php5640-77563.patch php5640-77563.patch
        dos2unix php5640-77563.patch
        patch -p1 < php5640-77563.patch
      fi
      # PHP 5.6 bug #77630 https://bugs.php.net/bug.php?id=77630
      if [ ! -f php5640-77630.patch ]; then
        echo
        echo "patching PHP 5.6 for bug #77630"
        echo "https://bugs.php.net/bug.php?id=77630"
        echo
        cp -a $CUR_DIR/patches/php/php5640-77630.patch php5640-77630.patch
        dos2unix php5640-77630.patch
        patch -p1 < php5640-77630.patch
      fi
      # PHP 5.6 bug #76846 https://bugs.php.net/bug.php?id=76846
      if [ ! -f php5640-76846.patch ]; then
        echo
        echo "patching PHP 5.6 for bug #76846"
        echo "https://bugs.php.net/bug.php?id=76846"
        echo
        cp -a $CUR_DIR/patches/php/php5640-76846.patch php5640-76846.patch
        dos2unix php5640-76846.patch
        patch -p1 < php5640-76846.patch
      fi
      # PHP 5.6 bug #77753 https://bugs.php.net/bug.php?id=77753
      if [ ! -f php5640-77753.patch ]; then
        echo
        echo "patching PHP 5.6 for bug #77753"
        echo "https://bugs.php.net/bug.php?id=77753"
        echo
        cp -a $CUR_DIR/patches/php/php5640-77753.patch php5640-77753.patch
        dos2unix php5640-77753.patch
        patch -p1 < php5640-77753.patch
      fi
      # PHP 5.6 bug #77831 https://bugs.php.net/bug.php?id=77831
      if [ ! -f php5640-77831.patch ]; then
        echo
        echo "patching PHP 5.6 for bug #77831"
        echo "https://bugs.php.net/bug.php?id=77831"
        echo
        cp -a $CUR_DIR/patches/php/php5640-77831.patch php5640-77831.patch
        dos2unix php5640-77831.patch
        patch -p1 < php5640-77831.patch
      fi
      # PHP 5.6 Backported from 7.1.28 added sqlite3.defensive INI directive
      if [ ! -f php5640-sqlite3-defensive.patch ]; then
        echo
        echo "patching PHP 5.6 for php5640-sqlite3-defensive patch"
        echo
        cp -a $CUR_DIR/patches/php/php5640-sqlite3-defensive.patch php5640-sqlite3-defensive.patch
        dos2unix php5640-sqlite3-defensive.patch
        patch -p1 < php5640-sqlite3-defensive.patch
      fi
      # PHP 5.6 bug #77950 https://bugs.php.net/bug.php?id=77950
      if [ ! -f php5640-77950.patch ]; then
        echo
        echo "patching PHP 5.6 for bug #77950"
        echo "https://bugs.php.net/bug.php?id=77950"
        echo
        cp -a $CUR_DIR/patches/php/php5640-77950.patch php5640-77950.patch
        dos2unix php5640-77950.patch
        patch -p1 < php5640-77950.patch
      fi
      # PHP 5.6 bug #77967 https://bugs.php.net/bug.php?id=77967
      if [ ! -f php5640-77967.patch ]; then
        echo
        echo "patching PHP 5.6 for bug #77967"
        echo "https://bugs.php.net/bug.php?id=77967"
        echo
        cp -a $CUR_DIR/patches/php/php5640-77967.patch php5640-77967.patch
        dos2unix php5640-77967.patch
        patch -p1 < php5640-77967.patch
      fi
      # PHP 5.6 bug #77988 https://bugs.php.net/bug.php?id=77988
      if [ ! -f php5640-77988.patch ]; then
        echo
        echo "patching PHP 5.6 for bug #77988"
        echo "https://bugs.php.net/bug.php?id=77988"
        echo
        cp -a $CUR_DIR/patches/php/php5640-77988.patch php5640-77988.patch
        dos2unix php5640-77988.patch
        patch -p1 < php5640-77988.patch
      fi
      # PHP 5.6 bug #78069 https://bugs.php.net/bug.php?id=78069
      if [ ! -f php5640-78069.patch ]; then
        echo
        echo "patching PHP 5.6 for bug #78069"
        echo "https://bugs.php.net/bug.php?id=78069"
        echo
        cp -a $CUR_DIR/patches/php/php5640-78069.patch php5640-78069.patch
        dos2unix php5640-78069.patch
        patch -p1 < php5640-78069.patch
      fi
    fi
    if [[ "$PHPVER_ID" = '70213' || "$PHPVER_ID" = '70125' ]]; then
      # patch PHP 7.2.13 and 7.1.25 missing CVE patch
      # https://bugs.php.net/bug.php?id=77020
      if [ ! -f ext/imap/77020fix.patch ]; then
        echo
        echo "patching PHP for CVE-2018-19935"
        echo "https://bugs.php.net/bug.php?id=77020"
        echo
        pushd ext/imap
        cp -a $CUR_DIR/patches/php/77020fix.patch 77020fix.patch
        dos2unix 77020fix.patch
        patch --ignore-whitespace < 77020fix.patch
        popd
      fi
    fi
    if [[ "$PHPVER_ID" = '70300' ]]; then
      # patch PHP 7.3.0 missing CVE patch
      # https://bugs.php.net/bug.php?id=77275
      if [ ! -f 77275fix.patch ]; then
        echo
        echo "patching PHP Zend Opcache Bug"
        echo "https://bugs.php.net/bug.php?id=77275"
        echo
        cp -a $CUR_DIR/patches/php/77275fix.patch 77275fix.patch
        dos2unix 77275fix.patch
        patch --ignore-whitespace -p1 < 77275fix.patch
      fi
    fi
    if [[ "$PHPMUVER" = '7.0' || "$PHPMVER" = '7.0' ]] && [[ "$PHPVER_ID" -ge '7033' ]]; then
      # backport security bug patch from PHP 7.1. to 7.0.33
      # PHP bug #77369 https://bugs.php.net/bug.php?id=77369
      # PHP bug #77370 https://bugs.php.net/bug.php?id=77370
      # PHP bug #77371 https://bugs.php.net/bug.php?id=77371
      # PHP bug #77381 https://bugs.php.net/bug.php?id=77381
      # PHP bug #77382 https://bugs.php.net/bug.php?id=77382
      # PHP bug #77418 https://bugs.php.net/bug.php?id=77418
      # PHP bug #77247 https://bugs.php.net/bug.php?id=77247
      # PHP bug #77242 https://bugs.php.net/bug.php?id=77242
      # PHP bug #77380 https://bugs.php.net/bug.php?id=77380
      # PHP bug #77540 https://bugs.php.net/bug.php?id=77540
      # PHP bug #77563 https://bugs.php.net/bug.php?id=77563
      # PHP bug #77396 https://bugs.php.net/bug.php?id=77396
      # PHP bug #77431 https://bugs.php.net/bug.php?id=77431
      # PHP bug #77630 https://bugs.php.net/bug.php?id=77630
      # PHP bug #76846 https://bugs.php.net/bug.php?id=76846
      # PHP bug #76846 https://bugs.php.net/bug.php?id=77950
      # PHP bug #77967 https://bugs.php.net/bug.php?id=77967
      # PHP bug #77988 https://bugs.php.net/bug.php?id=77988
      # PHP bug #78069 https://bugs.php.net/bug.php?id=78069
      phpseven_bugids='77369 77370 77371 77381 77418 77247 77242 77380 77540 77563 77396 77431 77630 76846 php-openssl-cert 77753 77831 sqlite3-defensive 77950 77967 77988 78069'
      for bugid in $phpseven_bugids; do
        if [[ ! -f "php7033-${bugid}.patch" && -f "$CUR_DIR/patches/php/php7033-${bugid}.patch" ]]; then
          echo
          if [[ "$bugid" != 'php-openssl-cert' ]]; then
            echo "patching PHP 7.0.33+ for bug #${bugid}"
            echo "https://bugs.php.net/bug.php?id=${bugid}"
          elif [[ "$bugid" = 'sqlite3-defensive' ]]; then
            echo "patching PHP 7.0.33+ sqlite3-defensive patch"
          elif [[ "$bugid" = 'php-openssl-cert' ]]; then
            echo "patching PHP 7.0.33+ php-openssl-cert patch"
          fi
          echo
          cp -a $CUR_DIR/patches/php/php7033-${bugid}.patch php7033-${bugid}.patch
          dos2unix php7033-${bugid}.patch
          patch -p1 < php7033-${bugid}.patch
        fi
      done
    fi
    if [[ "$PHPVER_ID" -ge '70304' && "$PHPVER_ID" -le '70306' ]]; then
      # backport security bug patch for php 7.3
      # fix lands in PHP 7.3.7 so backport for 7.3.4 to 7.3.6 https://bugs.php.net/bug.php?id=77955
      phpseven_bugids='77955'
      for bugid in $phpseven_bugids; do
        if [[ ! -f "php735-${bugid}.patch" && -f "$CUR_DIR/patches/php/php735-${bugid}.patch" ]]; then
          echo
          if [[ "$bugid" != 'php-openssl-cert' ]]; then
            echo "patching PHP 7.3.4+ for bug #${bugid}"
            echo "https://bugs.php.net/bug.php?id=${bugid}"
          fi
          echo
          cp -a $CUR_DIR/patches/php/php735-${bugid}.patch php735-${bugid}.patch
          dos2unix php735-${bugid}.patch
          patch -p1 < php735-${bugid}.patch
        fi
      done
    fi
  fi
} 2>&1 | tee -a "${CENTMINLOGDIR}/patch_php_${DT}.log"
}
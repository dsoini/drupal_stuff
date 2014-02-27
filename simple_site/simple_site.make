; simple_site make file for d.o. usage
core = "7.x"
api = "2"

projects[drupal][type] = "core"
projects[drupal][version] = "7.23"

; +++++ Modules +++++

projects[module_filter][version] = "2.0-alpha2"
projects[module_filter][subdir] = "contrib"

projects[admin_menu][version] = "3.0-rc4"
projects[admin_menu][subdir] = "contrib"

projects[admin_views][version] = "1.2"
projects[admin_views][subdir] = "contrib"

projects[boost][version] = "1.0-beta2"
projects[boost][subdir] = "contrib"

projects[httprl][version] = "1.14"
projects[httprl][subdir] = "contrib"

projects[ctools][version] = "1.3"
projects[ctools][subdir] = "contrib"

projects[context][version] = "3.0-beta6"
projects[context][subdir] = "contrib"

projects[date][version] = "2.6"
projects[date][subdir] = "contrib"

projects[delta][version] = "3.0-beta11"
projects[delta][subdir] = "contrib"

projects[draggableviews][version] = "2.0"
projects[draggableviews][subdir] = "contrib"

projects[features][version] = "2.0-rc1"
projects[features][subdir] = "contrib"
projects[features][patch][] = "https://drupal.org/files/features--1063204-65-catch-permission-exception.patch"

projects[features_extra][version] = "1.0-beta1"
projects[features_extra][subdir] = "contrib"

projects[filefield_paths][version] = "1.0-beta4"
projects[filefield_paths][subdir] = "contrib"

projects[flexslider][version] = "1.0-rc3"
projects[flexslider][subdir] = "contrib"

projects[fontyourface][version] = "2.8"
projects[fontyourface][subdir] = "contrib"

projects[link][version] = "1.1"
projects[link][subdir] = "contrib"

projects[manualcrop][version] = "1.4"
projects[manualcrop][subdir] = "contrib"

projects[menu_admin_per_menu][version] = "1.0"
projects[menu_admin_per_menu][subdir] = "contrib"

projects[nodeblock][version] = "1.4"
projects[nodeblock][subdir] = "contrib"

projects[node_level_blocks][version] = "1.0-beta1"
projects[node_level_blocks][subdir] = "contrib"

projects[pathologic][version] = "2.11"
projects[pathologic][subdir] = "contrib"

projects[protected_pages][version] = "2.2"
projects[protected_pages][subdir] = "contrib"

projects[spamspan][version] = "1.1-beta1"
projects[spamspan][subdir] = "contrib"

projects[imce][version] = "1.7"
projects[imce][subdir] = "contrib"

projects[media][version] = "1.3"
projects[media][subdir] = "contrib"

projects[nice_menus][version] = "2.1"
projects[nice_menus][subdir] = "contrib"
projects[nice_menus][patches][] = "http://drupal.org/files/1148746-nice-mega-dropdowns-d7_2.patch"

projects[node_export][version] = "3.0"
projects[node_export][subdir] = "contrib"

projects[nodequeue][version] = "2.0-beta1"
projects[nodequeue][subdir] = "contrib"

projects[auto_nodetitle][version] = "1.0"
projects[auto_nodetitle][subdir] = "contrib"

projects[backup_migrate][version] = "2.4"
projects[backup_migrate][subdir] = "contrib"

projects[block_class][version] = "2.0"
projects[block_class][subdir] = "contrib"

projects[jquery_update][version] = "2.3"
projects[jquery_update][subdir] = "contrib"

projects[libraries][version] = "2.1"
projects[libraries][subdir] = "contrib"

projects[override_node_options][version] = "1.12"
projects[override_node_options][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[simple_ldap][version] = "1.4"
projects[simple_ldap][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[userprotect][version] = "1.0"
projects[userprotect][subdir] = "contrib"

projects[omega_tools][version] = "3.0-rc4"
projects[omega_tools][subdir] = "contrib"

projects[panels][version] = "3.3"
projects[panels][subdir] = "contrib"

projects[responsive_menus][version] = "1.4"
projects[responsive_menus][subdir] = "contrib"

projects[globalredirect][version] = "1.5"
projects[globalredirect][subdir] = "contrib"

projects[page_title][version] = "2.7"
projects[page_title][subdir] = "contrib"

projects[captcha][version] = "1.0"
projects[captcha][subdir] = "contrib"

projects[recaptcha][version] = "1.9"
projects[recaptcha][subdir] = "contrib"

projects[imce_wysiwyg][version] = "1.0"
projects[imce_wysiwyg][subdir] = "contrib"

projects[uuid][version] = "1.0-alpha5"
projects[uuid][subdir] = "contrib"

projects[wysiwyg][version] = "2.2"
projects[wysiwyg][subdir] = "contrib"

projects[views][version] = "3.7"
projects[views][subdir] = "contrib"

projects[webform][version] = "3.19"
projects[webform][subdir] = "contrib"

projects[xmlsitemap][version] = "2.0-rc2"
projects[xmlsitemap][subdir] = "contrib"

; +++++ Themes +++++

; omega
projects[omega][type] = "theme"
projects[omega][version] = "3.1"
projects[omega][subdir] = "contrib"

; +++++ Libraries +++++

; Flexslider
libraries[flexslider][download][type] = "get"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/archive/a4647edaf7d44a32b1d568cef570128b8d28403b.zip"
libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][type] = "library"

; Jquery UI
libraries[jquery.ui][download][type] = "get"
libraries[jquery.ui][download][url] = "http://jqueryui.com/resources/download/jquery-ui-1.10.4.zip"
libraries[jquery.ui][directory_name] = "jquery.ui"
libraries[jquery.ui][type] = "library"

; Tinymce
libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://download.moxiecode.com/tinymce/tinymce_4.0.12.zip"
libraries[tinymce][directory_name] = "tinymce"
libraries[tinymce][type] = "library"


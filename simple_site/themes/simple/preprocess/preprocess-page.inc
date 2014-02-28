<?php
/* These are the vars keys
directory
classes_array
attributes_array
title_attributes_array
content_attributes_array
title_prefix
title_suffix
user
db_is_active
is_admin
logged_in
is_front
show_messages
layout
base_path
front_page
feed_icons
language
logo
main_menu
secondary_menu
action_links
site_name
site_slogan
tabs
node
site_name_hidden
site_slogan_hidden
title_hidden
*/
/*preprocess-page.inc*/

function simple_alpha_preprocess_page(&$vars) {
	//we'll put the feed icon where we want it
	$vars['feed_icons'] = FALSE;
	//also don't show the title
	if(drupal_is_front_page()){
		$vars['title'] = FALSE;
	}
	//$title  = drupal_get_title();
}


?>
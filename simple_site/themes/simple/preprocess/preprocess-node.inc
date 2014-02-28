
<?php

/*preprocess-node.inc*/

function simple_alpha_preprocess_node(&$vars) {
	//don't show the submitted by info
	if(drupal_is_front_page()){
		$vars['display_submitted'] = FALSE;
	}
	if($vars['type']){
        $vars['theme_hook_suggestion'] = 'node__'.$vars['type'];
	}
	
}
?>
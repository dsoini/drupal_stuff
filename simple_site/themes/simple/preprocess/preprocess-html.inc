
<?php

/*preprocess-html.inc*/

function simple_alpha_preprocess_html(&$vars) {

	$basepath = base_path();
	$mypath = $basepath.path_to_theme().'/';
	$isfront = drupal_is_front_page()? 'true' : 'false';
	$ieedge = array(
      '#type' => 'html_tag',
      '#tag' => 'meta',
      '#attributes' => array(
	      'http-equiv' =>  'X-UA-Compatible.01',
	      'content' => 'IE=Edge',
    	)
    );
	drupal_add_html_head($ieedge, 'ieedge');

	drupal_add_css($mypath.'css/nice_menu.css', array('group' => CSS_THEME, 'preprocess' => FALSE));
	drupal_add_css($basepath.'sites/all/libraries/flexslider/flexslider.css', array('group' => CSS_THEME, 'preprocess' => FALSE));
	
	if(path_is_admin(current_path())) {
		drupal_add_css($mypath.'css/admin.css', array('group' => CSS_THEME, 'preprocess' => FALSE));
	}
	$more_js =<<<END
  <script type="text/javascript" src="${basepath}sites/all/libraries/flexslider/jquery.flexslider-min.js"></script>
  <script type="text/javascript" src="${mypath}js/scripts.js"></script>
END;

	$addme = array(
  		'#type' => 'markup',
  		'#markup' => $more_js,
	);
	$vars['additional_scripts'] = $addme;
/*	
	$more_scripts = <<<END
      (function($){      
            $(document).ready(function() {
                
            });
		})(jQuery);
END;
 	drupal_add_js($more_scripts, array( 
 		'type' => 'inline', 
    	'scope' => 'footer', 
    	'weight' => '1500' 
  	));
*/
}


?>
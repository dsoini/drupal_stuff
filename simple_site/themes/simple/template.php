<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

//sets a variable for an image caption.
/*
function simple_preprocess_field(&$vars) {
   // print_r($vars);
	if($vars['element']['#field_name'] == 'field_image'){
		if(isset($vars['element']['#items']['0']['title'])) {
			$vars['image_caption'] = $vars['element']['#items']['0']['title'];
        }
	}
    return;
}*/

//this function replaces stacked tags with inline tags
function simple_field__field_tags(&$vars) {
	$output = '';

	// Subtract 1 from count to match $delta which starts at 0
	$count = (count($vars['items']) - 1);

	// Render the label, if it's not hidden.
	if (!$vars['label_hidden']) {
		$output .= '<div class="field-label"' . $vars['title_attributes'] . '>' . $vars['label'] . ':&nbsp;</div>';
	}

	// Render the items.
	$output .= '<div class="field-items"' . $vars['content_attributes'] . '>';
	foreach ($vars['items'] as $delta => $item) {
		$classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
		$output .= '<div class="' . $classes . '"' . $vars['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
		// If this is not the last item, print a comma and space
		if($delta < $count) {
			$output .= ', ';
		}
	}
	$output .= '</div>';

	// Render the top-level DIV.
	$output = '<div class="' . $vars['classes'] . '"' . $vars['attributes'] . '>' . $output . '</div>';

	return $output;
}


function simple_form_system_theme_settings_alter(&$form, &$form_state) {
    // Change default settings
    //no wide layout
    $form['alpha_settings']['layout']['grid_layouts']['alpha_default']['wide']['alpha_layouts_alpha_default_wide_responsive']['#default_value'] = '0';
    //no debugging
    $form['alpha_settings']['alpha_debug']['alpha_debug_block_toggle']['#default_value'] = 0;
    $form['alpha_settings']['alpha_debug']['alpha_debug_block_active']['#default_value'] = 0;
    $form['alpha_settings']['alpha_debug']['alpha_debug_grid_toggle']['#default_value'] = 0;
    $form['alpha_settings']['alpha_debug']['alpha_debug_grid_active']['#default_value'] = 0;
    //these are the stylesheets I prefer
    $form['alpha_settings']['alpha_styles']['alpha_css']['#default_value'] = array(
        'alpha-reset.css' => '0',
        'alpha-mobile.css' => 'alpha-mobile.css',
        'alpha-alpha.css' => 'alpha-alpha.css',
        'omega-text.css' => '0',
        'omega-branding.css' => '0',
        'omega-menu.css' => '0',
        'omega-forms.css' => '0',
        'omega-visuals.css' => '0',
        'global.css' => 'global.css',
        'reset.css' => 'reset.css',
        'text.css' => 'text.css',
        'nice_menus.css' => 'nice_menus.css',
    );
    //turn these off
    $form['alpha_settings']['alpha_toggle']['alpha_toggle_breadcrumb']['#default_value'] = 0;
    $form['alpha_settings']['alpha_toggle']['alpha_toggle_feed_icons']['#default_value'] = 0;
}
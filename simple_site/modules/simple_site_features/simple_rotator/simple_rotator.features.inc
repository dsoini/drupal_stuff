<?php
/**
 * @file
 * simple_rotator.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function simple_rotator_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function simple_rotator_node_info() {
  $items = array(
    'rotator' => array(
      'name' => t('Rotator'),
      'base' => 'node_content',
      'description' => t('Basic image rotator. Each item in the rotator content type is shown in a single rotator on the home page. Only the latest 10 of them will be displayed.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

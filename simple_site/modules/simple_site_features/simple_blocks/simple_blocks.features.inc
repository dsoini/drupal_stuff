<?php
/**
 * @file
 * simple_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function simple_blocks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function simple_blocks_node_info() {
  $items = array(
    'simple_block' => array(
      'name' => t('Block'),
      'base' => 'node_content',
      'description' => t('A small piece of content that can be plugged in as a component of other pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

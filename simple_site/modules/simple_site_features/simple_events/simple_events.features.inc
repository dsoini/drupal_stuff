<?php
/**
 * @file
 * simple_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function simple_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function simple_events_node_info() {
  $items = array(
    'events' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => t('Simple events'),
      'has_title' => '1',
      'title_label' => t('Event title or heading'),
      'help' => '',
    ),
  );
  return $items;
}

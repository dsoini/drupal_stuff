<?php
/**
 * @file
 * simple_blocks.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function simple_blocks_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_simple_block';
  $strongarm->value = 0;
  $export['comment_anonymous_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_simple_block';
  $strongarm->value = 1;
  $export['comment_default_mode_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_simple_block';
  $strongarm->value = '50';
  $export['comment_default_per_page_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_simple_block';
  $strongarm->value = 1;
  $export['comment_form_location_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_simple_block';
  $strongarm->value = '1';
  $export['comment_preview_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_simple_block';
  $strongarm->value = '1';
  $export['comment_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_simple_block';
  $strongarm->value = 1;
  $export['comment_subject_field_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__simple_block';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_simple_block';
  $strongarm->value = array();
  $export['menu_options_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_simple_block';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_level_blocks_display_node_edit_simple_block';
  $strongarm->value = 1;
  $export['node_level_blocks_display_node_edit_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_level_blocks_enabled_simple_block';
  $strongarm->value = (object) array(
    'enabled' => 0,
    'display_node_edit' => 1,
    'multi' => 0,
    'regions' => array(
      'content' => 'content',
      'sidebar_first' => 'sidebar_first',
      'sidebar_second' => 'sidebar_second',
    ),
    'modules' => array(
      'nodeblock' => 'nodeblock',
    ),
  );
  $export['node_level_blocks_enabled_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_level_blocks_modules_simple_block';
  $strongarm->value = array(
    0 => 'nodeblock',
  );
  $export['node_level_blocks_modules_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_level_blocks_regions_simple_block';
  $strongarm->value = array(
    0 => 'content',
    1 => 'sidebar_first',
    2 => 'sidebar_second',
  );
  $export['node_level_blocks_regions_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_simple_block';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_simple_block';
  $strongarm->value = '1';
  $export['node_preview_simple_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_simple_block';
  $strongarm->value = 0;
  $export['node_submitted_simple_block'] = $strongarm;

  return $export;
}

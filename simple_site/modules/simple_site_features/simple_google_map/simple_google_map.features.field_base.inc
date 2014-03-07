<?php
/**
 * @file
 * simple_google_map.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function simple_google_map_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_full_text'
  $field_bases['field_full_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_full_text',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_google_map'
  $field_bases['field_google_map'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_google_map',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'google_map_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'google_map_field',
  );

  return $field_bases;
}

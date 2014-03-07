<?php
/**
 * @file
 * simple_google_map.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function simple_google_map_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-map-body'
  $field_instances['node-map-body'] = array(
    'bundle' => 'map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Text above the map',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-map-field_full_text'
  $field_instances['node-map-field_full_text'] = array(
    'bundle' => 'map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_full_text',
    'label' => 'Text below the map',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-map-field_google_map'
  $field_instances['node-map-field_google_map'] = array(
    'bundle' => 'map',
    'default_value' => array(
      0 => array(
        'fname' => 'field-google-map',
        'name' => 'UCSB',
        'lat' => 34.4139629,
        'lon' => '-119.84894700000001',
        'zoom' => 15,
        'center_on' => '',
        'do_center' => 'center',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'google_map_field',
        'settings' => array(),
        'type' => 'google_map_field_formatter_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_google_map',
    'label' => 'Google map',
    'required' => 0,
    'settings' => array(
      'cardinality' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'google_map_field',
      'settings' => array(),
      'type' => 'google_map_field_widget',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Google map');
  t('Text above the map');
  t('Text below the map');

  return $field_instances;
}

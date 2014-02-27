<?php
/**
 * @file
 * simple_wysiwyg_profile.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function simple_wysiwyg_profile_filter_default_formats() {
  $formats = array();

  // Exported format: Basic html.
  $formats['basic_html'] = array(
    'format' => 'basic_html',
    'name' => 'Basic html',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'spamspan' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'spamspan_at' => ' [at] ',
          'spamspan_use_graphic' => 0,
        ),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'http://webdev.engr.ucsb.edu/dsoini/<SITENAME>/
http://<SITENAME>.local/
http://<SITENAME>.ucsb.edu/',
          'protocol_style' => 'path',
        ),
      ),
    ),
  );


  return $formats;
}

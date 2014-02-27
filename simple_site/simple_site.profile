<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
if (!function_exists("system_form_install_configure_form_alter")) {
  function system_form_install_configure_form_alter(&$form, $form_state) {
    $form['site_information']['site_name']['#default_value'] = 'Simple Starter Site';
		$form['site_information']['site_mail']['#default_value'] = 'admin@test.local';
		$form['admin_account']['account']['name']['#default_value'] = 'admin';
		$form['admin_account']['account']['mail']['#default_value'] = 'admin@test.local';
		$form['update_notifications']['update_status_module']['#default_value'] = array('0','0');print('<script>window.onload=function(){document.getElementById(\'edit-account-pass-pass1\').value=\'admin\';document.getElementById(\'edit-account-pass-pass2\').value=\'admin\';}</script>');
  }
}

/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
if (!function_exists("system_form_install_select_profile_form_alter")) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach ($form['profile'] as $key => $element) {
      $form['profile'][$key]['#value'] = 'simple_site';
    }
  }
}


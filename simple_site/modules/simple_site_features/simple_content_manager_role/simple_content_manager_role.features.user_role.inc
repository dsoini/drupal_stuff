<?php
/**
 * @file
 * content_manager_role.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function simple_content_manager_role_user_default_roles() {
  $roles = array();

  // Exported role: content manager.
  $roles['content manager'] = array(
    'name' => 'content manager',
    'weight' => 3,
  );


  // Exported role: content manager.
  $roles['account creator'] = array(
    'name' => 'account creator',
    'weight' => 4,
  );

  return $roles;
}

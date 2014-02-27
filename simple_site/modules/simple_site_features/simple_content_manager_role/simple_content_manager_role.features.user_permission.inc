<?php
/**
 * @file
 * simple_content_manager_role.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function simple_content_manager_role_user_default_permissions() {
  $permissions = array();

if(module_exists('admin_menu')){
  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'admin_menu',
  );
} 
  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'contextual',
  );

if(module_exists('draggableviews')){
  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'draggableviews',
  );
}

if(module_exists('protected_pages')){
  // Exported permission: 'access protected page password screen'.
  $permissions['access protected page password screen'] = array(
    'name' => 'access protected page password screen',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'protected_pages',
  );
}

if(module_exists('menu_admin_per_menu')){
  // Exported permission: 'administer main-menu menu items'.
  $permissions['administer main-menu menu items'] = array(
    'name' => 'administer main-menu menu items',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'menu_admin_per_menu',
  );
}


if(module_exists('protected_pages')){
  // Exported permission: 'administer protected pages configuration'.
  $permissions['administer protected pages configuration'] = array(
    'name' => 'administer protected pages configuration',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'protected_pages',
  );
}


if(module_exists('protected_pages')){
  // Exported permission: 'bypass pages password protection'.
  $permissions['bypass pages password protection'] = array(
    'name' => 'bypass pages password protection',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'protected_pages',
  );
}
  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

if(module_exists('simple_people')){
  // Exported permission: 'create people content'.
  $permissions['create people content'] = array(
    'name' => 'create people content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}

if(module_exists('simple_rotator')){
  // Exported permission: 'create rotator content'.
  $permissions['create rotator content'] = array(
    'name' => 'create rotator content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}

if(module_exists('simple_blocks')){
  // Exported permission: 'create simple_block content'.
  $permissions['create simple_block content'] = array(
    'name' => 'create simple_block content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}
  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

if(module_exists('simple_people')){
  // Exported permission: 'delete any people content'.
  $permissions['delete any people content'] = array(
    'name' => 'delete any people content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}

if(module_exists('simple_rotator')){
  // Exported permission: 'delete any rotator content'.
  $permissions['delete any rotator content'] = array(
    'name' => 'delete any rotator content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}

if(module_exists('simple_blocks')){
  // Exported permission: 'delete any simple_block content'.
  $permissions['delete any simple_block content'] = array(
    'name' => 'delete any simple_block content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

if(module_exists('simple_people')){
  // Exported permission: 'delete own people content'.
  $permissions['delete own people content'] = array(
    'name' => 'delete own people content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}

if(module_exists('simple_rotator')){
  // Exported permission: 'delete own rotator content'.
  $permissions['delete own rotator content'] = array(
    'name' => 'delete own rotator content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}

if(module_exists('simple_blocks')){
  // Exported permission: 'delete own simple_block content'.
  $permissions['delete own simple_block content'] = array(
    'name' => 'delete own simple_block content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}

if(module_exists('simple_people')){
  // Exported permission: 'delete terms in people'.
  $permissions['delete terms in people'] = array(
    'name' => 'delete terms in people',
    'roles' => array(
    	'content manager' => 'content manager',
    ),
    'module' => 'taxonomy',
  );
}

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

if(module_exists('simple_people')){
  // Exported permission: 'edit any people content'.
  $permissions['edit any people content'] = array(
    'name' => 'edit any people content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}


if(module_exists('simple_rotator')){
  // Exported permission: 'edit any rotator content'.
  $permissions['edit any rotator content'] = array(
    'name' => 'edit any rotator content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}

if(module_exists('simple_blocks')){
  // Exported permission: 'edit any simple_block content'.
  $permissions['edit any simple_block content'] = array(
    'name' => 'edit any simple_block content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}

  // Exported permission: 'edit node_level_blocks'.
  $permissions['edit node_level_blocks'] = array(
    'name' => 'edit node_level_blocks',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node_level_blocks',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
  
if(module_exists('simple_people')){
  // Exported permission: 'edit own people content'.
  $permissions['edit own people content'] = array(
    'name' => 'edit own people content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}

if(module_exists('simple_rotator')){
  // Exported permission: 'edit own rotator content'.
  $permissions['edit own rotator content'] = array(
    'name' => 'edit own rotator content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}

if(module_exists('simple_blocks')){
  // Exported permission: 'edit own simple_block content'.
  $permissions['edit own simple_block content'] = array(
    'name' => 'edit own simple_block content',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );
}

if(module_exists('simple_people')){
  // Exported permission: 'edit terms in people'.
  $permissions['edit terms in people'] = array(
    'name' => 'edit terms in people',
    'roles' => array(
    'content manager' => 'content manager',
    ),
    'module' => 'taxonomy',
  );
}

if(module_exists('admin_menu')){
  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'admin_menu',
  );
}


if(module_exists('nodeblock')){
  // Exported permission: 'maintain nodeblock'.
  $permissions['maintain nodeblock'] = array(
    'name' => 'maintain nodeblock',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'nodeblock',
  );
}

// Exported permission: 'override page authored by option'.
  $permissions['override page authored by option'] = array(
    'name' => 'override page authored by option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page authored on option'.
  $permissions['override page authored on option'] = array(
    'name' => 'override page authored on option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page promote to front page option'.
  $permissions['override page promote to front page option'] = array(
    'name' => 'override page promote to front page option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page published option'.
  $permissions['override page published option'] = array(
    'name' => 'override page published option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page revision option'.
  $permissions['override page revision option'] = array(
    'name' => 'override page revision option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page sticky option'.
  $permissions['override page sticky option'] = array(
    'name' => 'override page sticky option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );
 
if(module_exists('simple_people')){
  // Exported permission: 'override people authored by option'.
  $permissions['override people authored by option'] = array(
    'name' => 'override people authored by option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override people authored on option'.
  $permissions['override people authored on option'] = array(
    'name' => 'override people authored on option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override people promote to front page option'.
  $permissions['override people promote to front page option'] = array(
    'name' => 'override people promote to front page option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override people published option'.
  $permissions['override people published option'] = array(
    'name' => 'override people published option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override people revision option'.
  $permissions['override people revision option'] = array(
    'name' => 'override people revision option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override people sticky option'.
  $permissions['override people sticky option'] = array(
    'name' => 'override people sticky option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );
}

if(module_exists('simple_rotator')){
  // Exported permission: 'override rotator authored by option'.
  $permissions['override rotator authored by option'] = array(
    'name' => 'override rotator authored by option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override rotator authored on option'.
  $permissions['override rotator authored on option'] = array(
    'name' => 'override rotator authored on option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override rotator promote to front page option'.
  $permissions['override rotator promote to front page option'] = array(
    'name' => 'override rotator promote to front page option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override rotator published option'.
  $permissions['override rotator published option'] = array(
    'name' => 'override rotator published option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override rotator revision option'.
  $permissions['override rotator revision option'] = array(
    'name' => 'override rotator revision option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override rotator sticky option'.
  $permissions['override rotator sticky option'] = array(
    'name' => 'override rotator sticky option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );
}

if(module_exists('simple_blocks')){
  // Exported permission: 'override simple_block authored by option'.
  $permissions['override simple_block authored by option'] = array(
    'name' => 'override simple_block authored by option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override simple_block authored on option'.
  $permissions['override simple_block authored on option'] = array(
    'name' => 'override simple_block authored on option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override simple_block promote to front page option'.
  $permissions['override simple_block promote to front page option'] = array(
    'name' => 'override simple_block promote to front page option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override simple_block published option'.
  $permissions['override simple_block published option'] = array(
    'name' => 'override simple_block published option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override simple_block revision option'.
  $permissions['override simple_block revision option'] = array(
    'name' => 'override simple_block revision option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override simple_block sticky option'.
  $permissions['override simple_block sticky option'] = array(
    'name' => 'override simple_block sticky option',
    'roles' => array(
      'content manager' => 'content manager',
    ),
    'module' => 'override_node_options',
  );
}


  // Exported permission: 'use text format php_code'.
  $permissions['use text format basic_html'] = array(
    'name' => 'use text format basic_html',
    'roles' => array(
      'administrator' => 'content manager',
    ),
    'module' => 'filter',
  );
  
  // Exported permission: 'use text format php_code'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );


  return $permissions;
}

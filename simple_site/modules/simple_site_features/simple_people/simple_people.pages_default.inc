<?php
/**
 * @file
 * simple_people.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function simple_people_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'people';
  $page->task = 'page';
  $page->admin_title = 'People';
  $page->admin_description = '';
  $page->path = 'people';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_people_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'people';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_multibricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top_row_1' => NULL,
      'left_row_1' => NULL,
      'right_row_1' => NULL,
      'top_row_2' => NULL,
      'left_row_2' => NULL,
      'right_row_2' => NULL,
      'top_row_3' => NULL,
      'left_row_3' => NULL,
      'right_row_3' => NULL,
      'top_row_4' => NULL,
      'left_row_4' => NULL,
      'right_row_4' => NULL,
      'top_row_5' => NULL,
      'left_row_5' => NULL,
      'right_row_5' => NULL,
      'top_row_6' => NULL,
      'left_row_6' => NULL,
      'right_row_6' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'People';
  $display->uuid = 'b6c55c6b-3057-48bc-8e77-2c9e090edbb8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b9e8e784-3cda-4c7c-b5fc-de7e6c9000dc';
    $pane->panel = 'left_row_1';
    $pane->type = 'views';
    $pane->subtype = 'people';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '1',
      'url' => '',
      'display' => 'faculty_tax_term_block',
      'override_title' => 1,
      'override_title_text' => 'Executive Committee',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'executive-committee',
      'css_class' => 'people-group faculty',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b9e8e784-3cda-4c7c-b5fc-de7e6c9000dc';
    $display->content['new-b9e8e784-3cda-4c7c-b5fc-de7e6c9000dc'] = $pane;
    $display->panels['left_row_1'][0] = 'new-b9e8e784-3cda-4c7c-b5fc-de7e6c9000dc';
    $pane = new stdClass();
    $pane->pid = 'new-57728c26-685a-41f5-b864-51679f3dcf1d';
    $pane->panel = 'left_row_2';
    $pane->type = 'views';
    $pane->subtype = 'people';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '2',
      'url' => '',
      'display' => 'tax_term_block',
      'override_title' => 1,
      'override_title_text' => 'Visiting Researchers',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'visiting-researchers',
      'css_class' => 'people-group visiting-researchers',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '57728c26-685a-41f5-b864-51679f3dcf1d';
    $display->content['new-57728c26-685a-41f5-b864-51679f3dcf1d'] = $pane;
    $display->panels['left_row_2'][0] = 'new-57728c26-685a-41f5-b864-51679f3dcf1d';
    $pane = new stdClass();
    $pane->pid = 'new-fbe02e43-43ae-42a9-ba45-d90c6e6738a7';
    $pane->panel = 'left_row_3';
    $pane->type = 'views';
    $pane->subtype = 'people';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '4',
      'url' => '',
      'display' => 'tax_term_block',
      'override_title' => 1,
      'override_title_text' => 'Grad Students',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'grad-students',
      'css_class' => 'people-group grad-students',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fbe02e43-43ae-42a9-ba45-d90c6e6738a7';
    $display->content['new-fbe02e43-43ae-42a9-ba45-d90c6e6738a7'] = $pane;
    $display->panels['left_row_3'][0] = 'new-fbe02e43-43ae-42a9-ba45-d90c6e6738a7';
    $pane = new stdClass();
    $pane->pid = 'new-b07bda2e-d227-44c7-922e-03fbea3ee4df';
    $pane->panel = 'right_row_1';
    $pane->type = 'views';
    $pane->subtype = 'people';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '7',
      'url' => '',
      'display' => 'faculty_tax_term_block',
      'override_title' => 1,
      'override_title_text' => 'Participating Faculty',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'participating-faculty',
      'css_class' => 'people-group participating-faculty',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b07bda2e-d227-44c7-922e-03fbea3ee4df';
    $display->content['new-b07bda2e-d227-44c7-922e-03fbea3ee4df'] = $pane;
    $display->panels['right_row_1'][0] = 'new-b07bda2e-d227-44c7-922e-03fbea3ee4df';
    $pane = new stdClass();
    $pane->pid = 'new-cc841342-745f-4b85-a6f5-681837ac5a2c';
    $pane->panel = 'right_row_2';
    $pane->type = 'views';
    $pane->subtype = 'people';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '5',
      'url' => '',
      'display' => 'tax_term_block',
      'override_title' => 1,
      'override_title_text' => 'Development Engineers',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'development-engineers',
      'css_class' => 'people-group development-engineers',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc841342-745f-4b85-a6f5-681837ac5a2c';
    $display->content['new-cc841342-745f-4b85-a6f5-681837ac5a2c'] = $pane;
    $display->panels['right_row_2'][0] = 'new-cc841342-745f-4b85-a6f5-681837ac5a2c';
    $pane = new stdClass();
    $pane->pid = 'new-f7b7a585-4c02-4126-83c7-e69c6cd93690';
    $pane->panel = 'right_row_3';
    $pane->type = 'views';
    $pane->subtype = 'people';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '6',
      'url' => '',
      'display' => 'tax_term_block',
      'override_title' => 1,
      'override_title_text' => 'Administrative Staff',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'administrative-staff',
      'css_class' => 'people-group administrative-staff',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f7b7a585-4c02-4126-83c7-e69c6cd93690';
    $display->content['new-f7b7a585-4c02-4126-83c7-e69c6cd93690'] = $pane;
    $display->panels['right_row_3'][0] = 'new-f7b7a585-4c02-4126-83c7-e69c6cd93690';
    $pane = new stdClass();
    $pane->pid = 'new-2ac2ff32-bed6-4053-b963-ba56b9bf9e8c';
    $pane->panel = 'top_row_1';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-people-search_people';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 0,
      'override_title' => 1,
      'override_title_text' => 'People',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ac2ff32-bed6-4053-b963-ba56b9bf9e8c';
    $display->content['new-2ac2ff32-bed6-4053-b963-ba56b9bf9e8c'] = $pane;
    $display->panels['top_row_1'][0] = 'new-2ac2ff32-bed6-4053-b963-ba56b9bf9e8c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['people'] = $page;

  return $pages;

}

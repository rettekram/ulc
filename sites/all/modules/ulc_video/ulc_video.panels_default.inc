<?php
/**
 * @file
 * ulc_video.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ulc_video_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'sidebar_video_block';
  $mini->category = '';
  $mini->admin_title = 'Sidebar Video Block';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6af11df7-b098-48f8-b4be-32e27696d340';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1fc7fb58-1ccd-4581-88eb-e2acf5a9b50f';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'marketing_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1fc7fb58-1ccd-4581-88eb-e2acf5a9b50f';
    $display->content['new-1fc7fb58-1ccd-4581-88eb-e2acf5a9b50f'] = $pane;
    $display->panels['middle'][0] = 'new-1fc7fb58-1ccd-4581-88eb-e2acf5a9b50f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1fc7fb58-1ccd-4581-88eb-e2acf5a9b50f';
  $mini->display = $display;
  $export['sidebar_video_block'] = $mini;

  return $export;
}

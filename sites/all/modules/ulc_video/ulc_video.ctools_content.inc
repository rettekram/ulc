<?php
/**
 * @file
 * ulc_video.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function ulc_video_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'marketing_video';
  $content->admin_title = 'Marketing Video';
  $content->admin_description = 'Marketing Video';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<iframe width="220" height="170" src="//www.youtube.com/embed/Z62dTMAoGWk?rel=0" frameborder="0" allowfullscreen></iframe>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['marketing_video'] = $content;

  return $export;
}

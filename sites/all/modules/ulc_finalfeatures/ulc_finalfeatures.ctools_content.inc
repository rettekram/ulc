<?php
/**
 * @file
 * ulc_finalfeatures.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function ulc_finalfeatures_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'facebook_feed';
  $content->admin_title = 'Faecbook Feed';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<iframe src="//www.facebook.com/plugins/like.php?href=https%3A%2F%2Fwww.facebook.com%2Fulcbv&amp;width&amp;layout=standard&amp;action=like&amp;show_faces=true&amp;share=true&amp;height=80" scrolling="no" frameborder="0" style="border:none; overflow:hidden; height:80px;" allowTransparency="true"></iframe>',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $export['facebook_feed'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'welcome_message';
  $content->admin_title = 'Welcome Message';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'Welcome Message',
    'title' => '<strong>Welcome</strong>',
    'body' => 'The church was organized in 1975 to serve the many families moving to the area.  We continue to serve Bella Vista and Northwest Arkansas with a ministry that affirms our traditions in the Lutheran Church as a word and sacrament ministry, recognizes the importance of strengthening the family, and a commitment to service in our community.',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['welcome_message'] = $content;

  return $export;
}

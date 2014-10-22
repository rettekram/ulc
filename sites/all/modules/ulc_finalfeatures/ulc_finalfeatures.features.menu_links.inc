<?php
/**
 * @file
 * ulc_finalfeatures.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ulc_finalfeatures_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:about
  $menu_links['main-menu_about-us:about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About Us',
    'options' => array(
      'identifier' => 'main-menu_about-us:about',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact-us:contact
  $menu_links['main-menu_contact-us:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'identifier' => 'main-menu_contact-us:contact',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events-calendar:event-calendar
  $menu_links['main-menu_events-calendar:event-calendar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'event-calendar',
    'router_path' => 'event-calendar',
    'link_title' => 'Events Calendar',
    'options' => array(
      'identifier' => 'main-menu_events-calendar:event-calendar',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:home
  $menu_links['main-menu_home:home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'home',
    'router_path' => 'home',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:home',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_media:media
  $menu_links['main-menu_media:media'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'media',
    'router_path' => 'media',
    'link_title' => 'Media',
    'options' => array(
      'identifier' => 'main-menu_media:media',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_ministries:ministries
  $menu_links['main-menu_ministries:ministries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ministries',
    'router_path' => 'ministries',
    'link_title' => 'Ministries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ministries:ministries',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_newsletter:newsletter
  $menu_links['main-menu_newsletter:newsletter'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'newsletter',
    'router_path' => 'newsletter',
    'link_title' => 'Newsletter',
    'options' => array(
      'identifier' => 'main-menu_newsletter:newsletter',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_pastors-corner:pastors-blog2
  $menu_links['main-menu_pastors-corner:pastors-blog2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'pastors-blog2',
    'router_path' => 'pastors-blog2',
    'link_title' => 'Pastor\'s Corner',
    'options' => array(
      'identifier' => 'main-menu_pastors-corner:pastors-blog2',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: navigation_add-content:node/add
  $menu_links['navigation_add-content:node/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'identifier' => 'navigation_add-content:node/add',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_add-new-staff:node/add/add-new-staff
  $menu_links['navigation_add-new-staff:node/add/add-new-staff'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/add-new-staff',
    'router_path' => 'node/add/add-new-staff',
    'link_title' => 'Add New Staff',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a new staff Member to the Staff Page',
      ),
      'identifier' => 'navigation_add-new-staff:node/add/add-new-staff',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_article:node/add/article
  $menu_links['navigation_article:node/add/article'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      ),
      'identifier' => 'navigation_article:node/add/article',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_basic-page:node/add/page
  $menu_links['navigation_basic-page:node/add/page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add/page',
    'link_title' => 'Basic page',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>basic pages</em> for your static content, such as an \'About us\' page.',
      ),
      'identifier' => 'navigation_basic-page:node/add/page',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_blog-entry:node/add/blog
  $menu_links['navigation_blog-entry:node/add/blog'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/blog',
    'router_path' => 'node/add/blog',
    'link_title' => 'Blog entry',
    'options' => array(
      'attributes' => array(
        'title' => '<strong>Create a New Blog Entry for the Pastor\'s Blog.</strong></br>
<em>Right now the Account Pastor can only post blogs</em>',
      ),
      'identifier' => 'navigation_blog-entry:node/add/blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_new-event:node/add/event-calendar
  $menu_links['navigation_new-event:node/add/event-calendar'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event-calendar',
    'router_path' => 'node/add/event-calendar',
    'link_title' => 'New Event',
    'options' => array(
      'attributes' => array(
        'title' => '<strong>Create a New Event on the Events Calendar.</strong></br>
Choose if you\'d like it to be a Sunday Service or a Different type of Event.</br>
<em>By selecting the type of event, dependent upon the subscriptions of the accounts. They will receive an email about the event.</em>',
      ),
      'identifier' => 'navigation_new-event:node/add/event-calendar',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_new-image-gallery:node/add/image-gallery
  $menu_links['navigation_new-image-gallery:node/add/image-gallery'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/image-gallery',
    'router_path' => 'node/add/image-gallery',
    'link_title' => 'New Image Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '<strong>Use this Option to create a New Gallery of Photo\'s or just to upload a Single Image.</strong></br>
When created the gallery will be sent to which page you decide by the photo tag you give you to the Gallery/Image.',
      ),
      'identifier' => 'navigation_new-image-gallery:node/add/image-gallery',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_new-newsletter:node/add/news-letter
  $menu_links['navigation_new-newsletter:node/add/news-letter'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/news-letter',
    'router_path' => 'node/add/news-letter',
    'link_title' => 'New Newsletter',
    'options' => array(
      'attributes' => array(
        'title' => 'Upload a new Newsletter',
      ),
      'identifier' => 'navigation_new-newsletter:node/add/news-letter',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_new-video:node/add/add-new-video
  $menu_links['navigation_new-video:node/add/add-new-video'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/add-new-video',
    'router_path' => 'node/add/add-new-video',
    'link_title' => 'New Video',
    'options' => array(
      'attributes' => array(
        'title' => '<strong>Add a new video to the Video\'s page or the Sunday Services Sections.</strong> </br>
Use this to add video\'s to the different Video\'s page. </br>
<em>This option maybe expanded upon in the future to allow different areas to have video\'s in them.</em>',
      ),
      'identifier' => 'navigation_new-video:node/add/add-new-video',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_panel:node/add/panel
  $menu_links['navigation_panel:node/add/panel'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/panel',
    'router_path' => 'node/add/panel',
    'link_title' => 'Panel',
    'options' => array(
      'attributes' => array(
        'title' => 'A panel layout broken up into rows and columns.',
      ),
      'identifier' => 'navigation_panel:node/add/panel',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Add New Staff');
  t('Add content');
  t('Article');
  t('Basic page');
  t('Blog entry');
  t('Contact Us');
  t('Events Calendar');
  t('Home');
  t('Media');
  t('Ministries');
  t('New Event');
  t('New Image Gallery');
  t('New Newsletter');
  t('New Video');
  t('Newsletter');
  t('Panel');
  t('Pastor\'s Corner');


  return $menu_links;
}

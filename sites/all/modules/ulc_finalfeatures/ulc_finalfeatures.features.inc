<?php
/**
 * @file
 * ulc_finalfeatures.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ulc_finalfeatures_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ulc_finalfeatures_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ulc_finalfeatures_image_default_styles() {
  $styles = array();

  // Exported image style: cb_images.
  $styles['cb_images'] = array(
    'name' => 'cb_images',
    'label' => 'Colorbox Image (800 wide)',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_gallery_1.
  $styles['image_gallery_1'] = array(
    'name' => 'image_gallery_1',
    'label' => 'Large Gallery Image (480x200)',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_gallery_2.
  $styles['image_gallery_2'] = array(
    'name' => 'image_gallery_2',
    'label' => 'Smaller Gallery Images (50x50)',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: staff_pictures.
  $styles['staff_pictures'] = array(
    'name' => 'staff_pictures',
    'label' => 'Staff Pictures (125x125)',
    'effects' => array(
      10 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 125,
          'height' => 125,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: x-large.
  $styles['x-large'] = array(
    'name' => 'x-large',
    'label' => 'X-Large (480x360)',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ulc_finalfeatures_node_info() {
  $items = array(
    'add_new_staff' => array(
      'name' => t('Add New Staff'),
      'base' => 'node_content',
      'description' => t('Add a new staff Member to the Staff Page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'add_new_video' => array(
      'name' => t('New Video'),
      'base' => 'node_content',
      'description' => t('<strong>Add a new video to the Video\'s page or the Sunday Services Sections.</strong> </br>
Use this to add video\'s to the different Video\'s page. </br>
<em>This option maybe expanded upon in the future to allow different areas to have video\'s in them.</em>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('<strong>Important! Read First before Uploading a new Video</strong></br>
Before being able to upload a video to the site, you need to upload it to Video Storage site. <em>Youtube, Vimeo, etc</em>
<strong><a target="_blank" href="http://localhost:8888/UnitedLutheranChurch/sites/default/files/news-letter/ULC-Branding.pdf">Learn how to Upload to Youtube.</a></strong></br>

Defining this as a Sunday video or Another type of Event will push the video\'s in the direction it needs to be placed. Providing tags will notify those users Via Email that have subscribed to those tags.'),
    ),
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event_calendar' => array(
      'name' => t('New Event'),
      'base' => 'node_content',
      'description' => t('<strong>Create a New Event on the Events Calendar.</strong></br>
Choose if you\'d like it to be a Sunday Service or a Different type of Event.</br>
<em>By selecting the type of event, dependent upon the subscriptions of the accounts. They will receive an email about the event.</em>'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => t('Create a new event. Whether it be a Youth oriented event, Men\'s Retreat, Women\'s Retreat, or even an Outreach event.
Those who have their notifications set up will receive an email about this event.'),
    ),
    'image_gallery' => array(
      'name' => t('New Image Gallery'),
      'base' => 'node_content',
      'description' => t('<strong>Use this Option to create a New Gallery of Photo\'s or just to upload a Single Image.</strong></br>
When created the gallery will be sent to which page you decide by the photo tag you give you to the Gallery/Image.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Create a Gallery by uploading a Single Large Photo (Cover Photo) to the album, followed by up to 10 smaller thumbnail sized photo\'s. </br>
Create a description or summary of the gallery and make sure to decide which ministry this should show up in. </br>
Then decide if you\'d like to notify people of this new gallery or not by checking the specific group notifications.'),
    ),
    'news_letter' => array(
      'name' => t('New Newsletter'),
      'base' => 'node_content',
      'description' => t('Upload a new Newsletter'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('upload a .pdf of this month\'s/week\'s newsletter.'),
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
